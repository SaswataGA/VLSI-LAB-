library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

-- Checks every opcode 0..15 (with Z = 0 and Z = 1) against the instruction table of Set 0: LDI, ADD, AND, JZ, NOT.
-- Vector order of the expected table:  ACC_LOAD & Z_LOAD & PC_LOAD & SEL_B & SEL_ARITH & SEL_AND & SEL_NOT

entity control_unit_tb is
end control_unit_tb;

architecture Behavioral of control_unit_tb is
    component control_unit
        Port ( OPCODE : in  STD_LOGIC_VECTOR (3 downto 0);
               Z : in  STD_LOGIC;
               ACC_LOAD : out STD_LOGIC;
               Z_LOAD : out STD_LOGIC;
               PC_LOAD : out STD_LOGIC;
               SEL_B : out STD_LOGIC;
               SEL_ARITH : out STD_LOGIC;
               SEL_AND : out STD_LOGIC;
               SEL_NOT : out STD_LOGIC );
    end component;

    type ctl_table is array (0 to 31) of STD_LOGIC_VECTOR (6 downto 0);
    -- index = 2 * opcode + Z
    constant EXPECTED : ctl_table := (
        "0000000", "0000000", "1101000", "1101000",
        "1100100", "1100100", "0000000", "0000000",
        "1100010", "1100010", "0000000", "0000000",
        "0000000", "0000000", "1100001", "1100001",
        "0000000", "0000000", "0000000", "0000000",
        "0000000", "0000000", "0000000", "0000000",
        "0000000", "0010000", "0000000", "0000000",
        "0000000", "0000000", "0000000", "0000000"
    );

    signal OPCODE_tb : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    signal Z_tb      : STD_LOGIC := '0';
    signal ACC_LOAD_tb : STD_LOGIC;
    signal Z_LOAD_tb : STD_LOGIC;
    signal PC_LOAD_tb : STD_LOGIC;
    signal SEL_B_tb : STD_LOGIC;
    signal SEL_ARITH_tb : STD_LOGIC;
    signal SEL_AND_tb : STD_LOGIC;
    signal SEL_NOT_tb : STD_LOGIC;
    signal observed  : STD_LOGIC_VECTOR (6 downto 0);
begin
    UUT: control_unit port map ( OPCODE => OPCODE_tb,
                                 Z => Z_tb,
                                 ACC_LOAD => ACC_LOAD_tb,
                                 Z_LOAD => Z_LOAD_tb,
                                 PC_LOAD => PC_LOAD_tb,
                                 SEL_B => SEL_B_tb,
                                 SEL_ARITH => SEL_ARITH_tb,
                                 SEL_AND => SEL_AND_tb,
                                 SEL_NOT => SEL_NOT_tb );

    observed <= ACC_LOAD_tb & Z_LOAD_tb & PC_LOAD_tb & SEL_B_tb & SEL_ARITH_tb & SEL_AND_tb & SEL_NOT_tb;

    stim_proc: process
        variable errors : integer := 0;
    begin
        for op in 0 to 15 loop
            for z in 0 to 1 loop
                OPCODE_tb <= std_logic_vector(to_unsigned(op, 4));
                if z = 1 then Z_tb <= '1'; else Z_tb <= '0'; end if;
                wait for 10 ns;
                if observed /= EXPECTED(2 * op + z) then
                    errors := errors + 1;
                    report "FAIL: control lines for opcode " & integer'image(op) &
                           " Z=" & integer'image(z) severity error;
                end if;
            end loop;
        end loop;

        if errors = 0 then
            report "PASS: control_unit testbench completed" severity note;
        else
            report "FAIL: control_unit testbench, errors = " & integer'image(errors) severity error;
        end if;
        wait;
    end process;
end Behavioral;
