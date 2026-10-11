library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Mini 8-bit accumulator CPU - top level.
-- Set 0: LDI, ADD, AND, JZ, NOT
--
--   PC  -> Program ROM -> instr(11:0) = opcode(11:8) & operand(7:0)
--   Control Unit decodes the opcode -> load / select lines
--   ALU works on ACC and the operand, result goes to ACC, "zero?" goes to Z
--   Everything is clocked on the rising edge of CLK, RESET is synchronous / active-high:
--   RESET = 1  ->  PC = 0, ACC = 0x00, Z = 1
--
-- Ports: CLK, RESET in;  Q (= ACC), Z, PC out.

entity cpu is
    Port ( CLK   : in  STD_LOGIC;
           RESET : in  STD_LOGIC;                          -- synchronous, active-high
           Q     : out STD_LOGIC_VECTOR (7 downto 0);      -- ACC
           Z     : out STD_LOGIC;                          -- zero flag
           PC    : out STD_LOGIC_VECTOR (3 downto 0));     -- program counter (for checking)
end cpu;

architecture Structural of cpu is
    component program_counter
        Port ( CLK : in  STD_LOGIC; RESET : in  STD_LOGIC; LOAD : in  STD_LOGIC;
               TARGET : in  STD_LOGIC_VECTOR (3 downto 0); PC : out STD_LOGIC_VECTOR (3 downto 0));
    end component;
    component program_rom
        Port ( ADDR : in  STD_LOGIC_VECTOR (3 downto 0); DATA : out STD_LOGIC_VECTOR (11 downto 0));
    end component;
    component control_unit
        Port ( OPCODE    : in  STD_LOGIC_VECTOR (3 downto 0);
               Z         : in  STD_LOGIC;
               ACC_LOAD  : out STD_LOGIC;
               Z_LOAD    : out STD_LOGIC;
               PC_LOAD   : out STD_LOGIC;
               SEL_B     : out STD_LOGIC;
               SEL_ARITH : out STD_LOGIC;
               SEL_AND   : out STD_LOGIC;
               SEL_NOT   : out STD_LOGIC );
    end component;
    component cpu_alu
        Port ( A         : in  STD_LOGIC_VECTOR (7 downto 0);
               B         : in  STD_LOGIC_VECTOR (7 downto 0);
               SEL_B     : in  STD_LOGIC;
               SEL_ARITH : in  STD_LOGIC;
               SEL_AND   : in  STD_LOGIC;
               SEL_NOT   : in  STD_LOGIC;
               RESULT    : out STD_LOGIC_VECTOR (7 downto 0);
               ZERO      : out STD_LOGIC );
    end component;
    component register_8bit
        Port ( CLK : in  STD_LOGIC; RESET : in  STD_LOGIC; LOAD : in  STD_LOGIC;
               D : in  STD_LOGIC_VECTOR (7 downto 0); Q : out STD_LOGIC_VECTOR (7 downto 0));
    end component;
    component register_1bit_set
        Port ( CLK : in  STD_LOGIC; RESET : in  STD_LOGIC; LOAD : in  STD_LOGIC;
               D : in  STD_LOGIC; Q : out STD_LOGIC);
    end component;

    signal pc_q      : STD_LOGIC_VECTOR (3 downto 0);    -- program counter
    signal instr     : STD_LOGIC_VECTOR (11 downto 0);   -- instruction read from the ROM
    signal opcode    : STD_LOGIC_VECTOR (3 downto 0);    -- instr(11 downto 8)
    signal operand   : STD_LOGIC_VECTOR (7 downto 0);    -- instr(7 downto 0)
    signal acc_q     : STD_LOGIC_VECTOR (7 downto 0);    -- accumulator
    signal result    : STD_LOGIC_VECTOR (7 downto 0);    -- ALU result
    signal zero_flag : STD_LOGIC;                        -- ALU "zero?" output
    signal z_q       : STD_LOGIC;                        -- Z flag register
    -- control lines from the control unit
    signal acc_load  : STD_LOGIC;
    signal z_load    : STD_LOGIC;
    signal pc_load   : STD_LOGIC;
    signal sel_b     : STD_LOGIC;
    signal sel_arith : STD_LOGIC;
    signal sel_and   : STD_LOGIC;
    signal sel_not   : STD_LOGIC;
begin
    opcode  <= instr(11 downto 8);
    operand <= instr(7 downto 0);

    U_PC: program_counter port map ( CLK    => CLK,
                                     RESET  => RESET,
                                     LOAD   => pc_load,
                                     TARGET => operand(3 downto 0),
                                     PC     => pc_q );

    U_ROM: program_rom port map ( ADDR => pc_q,
                                  DATA => instr );

    U_CTRL: control_unit port map ( OPCODE    => opcode,
                                    Z         => z_q,
                                    ACC_LOAD  => acc_load,
                                    Z_LOAD    => z_load,
                                    PC_LOAD   => pc_load,
                                    SEL_B     => sel_b,
                                    SEL_ARITH => sel_arith,
                                    SEL_AND   => sel_and,
                                    SEL_NOT   => sel_not );

    U_ALU: cpu_alu port map ( A         => acc_q,
                              B         => operand,
                              SEL_B     => sel_b,
                              SEL_ARITH => sel_arith,
                              SEL_AND   => sel_and,
                              SEL_NOT   => sel_not,
                              RESULT    => result,
                              ZERO      => zero_flag );

    -- ACC : 8-bit accumulator, also the CPU output Q
    U_ACC: register_8bit port map ( CLK   => CLK,
                                    RESET => RESET,
                                    LOAD  => acc_load,
                                    D     => result,
                                    Q     => acc_q );

    -- Z : 1-bit flag, set by RESET, updated with the zero-detect of every value written to ACC
    U_Z: register_1bit_set port map ( CLK   => CLK,
                                      RESET => RESET,
                                      LOAD  => z_load,
                                      D     => zero_flag,
                                      Q     => z_q );

    Q  <= acc_q;
    Z  <= z_q;
    PC <= pc_q;
end Structural;
