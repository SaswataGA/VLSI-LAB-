library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- 8-bit combinational ALU of the CPU for Set 0: LDI, ADD, AND, JZ, NOT.
-- Only the operations of this instruction set are present.  Built from the
-- gate-level blocks of the earlier ALU project (adder_8bit / alu_arith_unit,
-- and_gate, or_gate, xor_gate, not_gate, zero_detect_8).
--
--   LDI : RESULT = B (the operand)
--   ADD : RESULT = A + B   (8-bit, carry discarded)
--   AND : RESULT = A AND B
--   NOT : RESULT = NOT A
--   ZERO = 1 when RESULT = 0x00 (feeds the Z flag).

entity cpu_alu is
    Port ( A         : in  STD_LOGIC_VECTOR (7 downto 0);       -- ACC
           B         : in  STD_LOGIC_VECTOR (7 downto 0);       -- operand (immediate)
           SEL_B     : in  STD_LOGIC;                           -- LDI
           SEL_ARITH : in  STD_LOGIC;                           -- ADD
           SEL_AND   : in  STD_LOGIC;                           -- AND
           SEL_NOT   : in  STD_LOGIC;                           -- NOT
           RESULT    : out STD_LOGIC_VECTOR (7 downto 0);       -- ALU result
           ZERO      : out STD_LOGIC);                          -- RESULT = 0x00
end cpu_alu;

architecture Structural of cpu_alu is
    component and_gate
        Port ( A : in  STD_LOGIC; B : in  STD_LOGIC; Y : out STD_LOGIC);
    end component;
    component or_gate
        Port ( A : in  STD_LOGIC; B : in  STD_LOGIC; Y : out STD_LOGIC);
    end component;
    component not_gate
        Port ( A : in  STD_LOGIC; Y : out STD_LOGIC);
    end component;
    component adder_8bit
        Port ( A : in  STD_LOGIC_VECTOR (7 downto 0); B : in  STD_LOGIC_VECTOR (7 downto 0);
               CIN : in  STD_LOGIC; SUM : out STD_LOGIC_VECTOR (7 downto 0); COUT : out STD_LOGIC);
    end component;
    component zero_detect_8
        Port ( D : in  STD_LOGIC_VECTOR (7 downto 0); Z : out STD_LOGIC);
    end component;

    signal sum_res : STD_LOGIC_VECTOR (7 downto 0);
    signal and_res : STD_LOGIC_VECTOR (7 downto 0);
    signal not_res : STD_LOGIC_VECTOR (7 downto 0);
    signal t_b    : STD_LOGIC_VECTOR (7 downto 0);   -- B result AND its select
    signal t_arith: STD_LOGIC_VECTOR (7 downto 0);   -- ARITH result AND its select
    signal t_and  : STD_LOGIC_VECTOR (7 downto 0);   -- AND result AND its select
    signal t_not  : STD_LOGIC_VECTOR (7 downto 0);   -- NOT result AND its select
    signal res_int : STD_LOGIC_VECTOR (7 downto 0);
    signal or_1   : STD_LOGIC_VECTOR (7 downto 0);
    signal or_2   : STD_LOGIC_VECTOR (7 downto 0);
begin
    ---------------------------------------------------------------
    -- Functional units (all combinational, always computing from A and B)
    ---------------------------------------------------------------
    -- ADD: 8-bit adder, carry out discarded
    U_ADD: adder_8bit port map ( A => A, B => B, CIN => '0', SUM => sum_res, COUT => open );
    GEN_AND: for i in 0 to 7 generate
        U_AND: and_gate port map ( A => A(i), B => B(i), Y => and_res(i) );
    end generate GEN_AND;
    GEN_NOT: for i in 0 to 7 generate
        U_NOT: not_gate port map ( A => A(i), Y => not_res(i) );
    end generate GEN_NOT;

    ---------------------------------------------------------------
    -- Result select: AND-OR plane.  Exactly one SEL_* line is 1 while an
    -- ACC-writing instruction executes, so RESULT = the selected source.
    ---------------------------------------------------------------
    GEN_SEL: for i in 0 to 7 generate
        U_T_B: and_gate port map ( A => B(i), B => SEL_B, Y => t_b(i) );
        U_T_ARITH: and_gate port map ( A => sum_res(i), B => SEL_ARITH, Y => t_arith(i) );
        U_T_AND: and_gate port map ( A => and_res(i), B => SEL_AND, Y => t_and(i) );
        U_T_NOT: and_gate port map ( A => not_res(i), B => SEL_NOT, Y => t_not(i) );
        U_O1: or_gate port map ( A => t_b(i), B => t_arith(i), Y => or_1(i) );
        U_O2: or_gate port map ( A => or_1(i), B => t_and(i), Y => or_2(i) );
        U_O3: or_gate port map ( A => or_2(i), B => t_not(i), Y => res_int(i) );
    end generate GEN_SEL;

    RESULT <= res_int;

    -- "zero?" output for the Z flag
    U_ZERO: zero_detect_8 port map ( D => res_int, Z => ZERO );
end Structural;
