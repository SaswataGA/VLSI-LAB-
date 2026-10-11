library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- 8-bit ALU, built on top of register_8bit / register_1bit.
--
--   OP   Operation   RESULT
--   000  ADD         A + B
--   001  SUB         A - B          (A + NOT B + 1)
--   010  AND         A and B
--   011  OR          A or B
--   100  XOR         A xor B
--   101  NOT         not A
--   110  INC         A + 1
--   111  DEC         A - 1
--
-- Usage (one clock edge per step):
--   1. LOAD_A = 1 with the first operand on DATA_IN
--   2. LOAD_B = 1 with the second operand on DATA_IN
--   3. Set OP, LOAD_R = 1  -> RESULT and the flags are captured on the next edge
-- RESET is synchronous, active-high, and clears every register (operands,
-- result, and flags). Give the design one clock edge with RESET = 1 before
-- using it, the same way register_8bit itself is used.
--
-- Flags (registered along with RESULT)
--   FLAG_Z : RESULT = 00000000
--   FLAG_N : RESULT(7)
--   FLAG_C : carry out of the adder (arithmetic ops only, 0 for logic ops).
--            For SUB / DEC, C = 1 means "no borrow" (A >= B, A >= 1).
--   FLAG_V : signed overflow (arithmetic ops only, 0 for logic ops)

entity alu_8bit is
    Port ( CLK     : in  STD_LOGIC;
           RESET   : in  STD_LOGIC;
           DATA_IN : in  STD_LOGIC_VECTOR (7 downto 0);
           LOAD_A  : in  STD_LOGIC;
           LOAD_B  : in  STD_LOGIC;
           LOAD_R  : in  STD_LOGIC;
           OP      : in  STD_LOGIC_VECTOR (2 downto 0);
           A_OUT   : out STD_LOGIC_VECTOR (7 downto 0);
           B_OUT   : out STD_LOGIC_VECTOR (7 downto 0);
           RESULT  : out STD_LOGIC_VECTOR (7 downto 0);
           FLAG_Z  : out STD_LOGIC;
           FLAG_C  : out STD_LOGIC;
           FLAG_N  : out STD_LOGIC;
           FLAG_V  : out STD_LOGIC);
end alu_8bit;

architecture Structural of alu_8bit is

    component register_8bit
        Port ( CLK : in  STD_LOGIC; RESET : in  STD_LOGIC; LOAD : in  STD_LOGIC;
               D : in  STD_LOGIC_VECTOR (7 downto 0); Q : out STD_LOGIC_VECTOR (7 downto 0));
    end component;

    component register_1bit
        Port ( CLK : in  STD_LOGIC; RESET : in  STD_LOGIC; LOAD : in  STD_LOGIC;
               D : in  STD_LOGIC; Q : out STD_LOGIC);
    end component;

    component alu_arith_unit
        Port ( A : in  STD_LOGIC_VECTOR (7 downto 0); B : in  STD_LOGIC_VECTOR (7 downto 0);
               MODE : in  STD_LOGIC_VECTOR (1 downto 0);
               SUM : out STD_LOGIC_VECTOR (7 downto 0); COUT : out STD_LOGIC; OVF : out STD_LOGIC);
    end component;

    component alu_logic_unit
        Port ( A : in  STD_LOGIC_VECTOR (7 downto 0); B : in  STD_LOGIC_VECTOR (7 downto 0);
               AND_OUT : out STD_LOGIC_VECTOR (7 downto 0); OR_OUT : out STD_LOGIC_VECTOR (7 downto 0);
               XOR_OUT : out STD_LOGIC_VECTOR (7 downto 0); NOT_OUT : out STD_LOGIC_VECTOR (7 downto 0));
    end component;

    component mux4
        Port ( D0 : in  STD_LOGIC; D1 : in  STD_LOGIC; D2 : in  STD_LOGIC; D3 : in  STD_LOGIC;
               SEL : in  STD_LOGIC_VECTOR (1 downto 0); Y : out STD_LOGIC);
    end component;

    component mux2
        Port ( D0 : in  STD_LOGIC; D1 : in  STD_LOGIC; SEL : in  STD_LOGIC; Y : out STD_LOGIC);
    end component;

    component zero_detect_8
        Port ( D : in  STD_LOGIC_VECTOR (7 downto 0); Z : out STD_LOGIC);
    end component;

    component and_gate
        Port ( A : in  STD_LOGIC; B : in  STD_LOGIC; Y : out STD_LOGIC);
    end component;

    component xor_gate
        Port ( A : in  STD_LOGIC; B : in  STD_LOGIC; Y : out STD_LOGIC);
    end component;

    component not_gate
        Port ( A : in  STD_LOGIC; Y : out STD_LOGIC);
    end component;

    signal a_q, b_q : STD_LOGIC_VECTOR (7 downto 0);
    signal arith_res, and_res, or_res, xor_res, not_res : STD_LOGIC_VECTOR (7 downto 0);
    signal lo_res, hi_res, result_comb : STD_LOGIC_VECTOR (7 downto 0);
    signal arith_cout, arith_ovf : STD_LOGIC;
    signal op21_xor, is_arith    : STD_LOGIC;   -- is_arith = NOT(OP(2) xor OP(1))
    signal z_comb                : STD_LOGIC;
    signal open_c, open_v        : STD_LOGIC;   -- gated carry/overflow, before the flag registers

begin

    ---------------------------------------------------------------
    -- Operand registers
    ---------------------------------------------------------------
    REG_A: register_8bit port map ( CLK => CLK, RESET => RESET, LOAD => LOAD_A,
                                    D => DATA_IN, Q => a_q );
    REG_B: register_8bit port map ( CLK => CLK, RESET => RESET, LOAD => LOAD_B,
                                    D => DATA_IN, Q => b_q );

    ---------------------------------------------------------------
    -- Functional units (combinational, run continuously on a_q/b_q)
    ---------------------------------------------------------------
    ARITH: alu_arith_unit port map ( A => a_q, B => b_q, MODE => OP(1 downto 0),
                                     SUM => arith_res, COUT => arith_cout, OVF => arith_ovf );

    LOGIC: alu_logic_unit port map ( A => a_q, B => b_q,
                                     AND_OUT => and_res, OR_OUT => or_res,
                                     XOR_OUT => xor_res, NOT_OUT => not_res );

    ---------------------------------------------------------------
    -- Result select: 8:1 mux per bit = two mux4 + one mux2
    --   OP(2) = 0 : 000 ADD, 001 SUB, 010 AND, 011 OR
    --   OP(2) = 1 : 100 XOR, 101 NOT, 110 INC, 111 DEC
    ---------------------------------------------------------------
    GEN_RES: for i in 0 to 7 generate
        U_LO: mux4 port map ( D0 => arith_res(i), D1 => arith_res(i),
                              D2 => and_res(i),   D3 => or_res(i),
                              SEL => OP(1 downto 0), Y => lo_res(i) );

        U_HI: mux4 port map ( D0 => xor_res(i),   D1 => not_res(i),
                              D2 => arith_res(i), D3 => arith_res(i),
                              SEL => OP(1 downto 0), Y => hi_res(i) );

        U_SEL: mux2 port map ( D0 => lo_res(i), D1 => hi_res(i),
                               SEL => OP(2), Y => result_comb(i) );
    end generate GEN_RES;

    ---------------------------------------------------------------
    -- Flags (combinational, captured into registers below)
    ---------------------------------------------------------------
    -- Arithmetic ops are OP = 000, 001, 110, 111  ->  OP(2) xor OP(1) = 0
    U_XOR21: xor_gate port map ( A => OP(2), B => OP(1), Y => op21_xor );
    U_ISARITH: not_gate port map ( A => op21_xor, Y => is_arith );

    U_C: and_gate port map ( A => arith_cout, B => is_arith, Y => open_c );
    U_V: and_gate port map ( A => arith_ovf,  B => is_arith, Y => open_v );

    U_Z: zero_detect_8 port map ( D => result_comb, Z => z_comb );

    ---------------------------------------------------------------
    -- Result and flag registers, all loaded together by LOAD_R
    ---------------------------------------------------------------
    REG_R: register_8bit port map ( CLK => CLK, RESET => RESET, LOAD => LOAD_R,
                                    D => result_comb, Q => RESULT );

    REG_Z: register_1bit port map ( CLK => CLK, RESET => RESET, LOAD => LOAD_R,
                                    D => z_comb, Q => FLAG_Z );
    REG_C: register_1bit port map ( CLK => CLK, RESET => RESET, LOAD => LOAD_R,
                                    D => open_c, Q => FLAG_C );
    REG_N: register_1bit port map ( CLK => CLK, RESET => RESET, LOAD => LOAD_R,
                                    D => result_comb(7), Q => FLAG_N );
    REG_V: register_1bit port map ( CLK => CLK, RESET => RESET, LOAD => LOAD_R,
                                    D => open_v, Q => FLAG_V );

    A_OUT <= a_q;
    B_OUT <= b_q;

end Structural;
