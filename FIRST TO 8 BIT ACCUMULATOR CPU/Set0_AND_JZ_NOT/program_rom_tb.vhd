library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity program_rom_tb is
end program_rom_tb;

architecture Behavioral of program_rom_tb is
    component program_rom
        Port ( ADDR : in  STD_LOGIC_VECTOR (3 downto 0);
               DATA : out STD_LOGIC_VECTOR (11 downto 0));
    end component;

    type word_array is array (0 to 15) of STD_LOGIC_VECTOR (11 downto 0);
    -- Expected contents: the Appendix B program of Set 0: LDI, ADD, AND, JZ, NOT
    constant EXPECTED : word_array := (
        x"1A5", x"45A", x"C05", x"201",
        x"201", x"700", x"40F", x"C00",
        x"201", x"000", x"000", x"000",
        x"000", x"000", x"000", x"000"
    );

    signal ADDR_tb : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    signal DATA_tb : STD_LOGIC_VECTOR (11 downto 0);
begin
    UUT: program_rom port map ( ADDR => ADDR_tb, DATA => DATA_tb );

    stim_proc: process
        variable errors : integer := 0;
    begin
        for i in 0 to 15 loop
            ADDR_tb <= std_logic_vector(to_unsigned(i, 4));
            wait for 10 ns;
            if DATA_tb /= EXPECTED(i) then
                errors := errors + 1;
                report "FAIL: ROM address " & integer'image(i) severity error;
            end if;
        end loop;

        if errors = 0 then
            report "PASS: program_rom testbench completed" severity note;
        else
            report "FAIL: program_rom testbench, errors = " & integer'image(errors) severity error;
        end if;
        wait;
    end process;
end Behavioral;
