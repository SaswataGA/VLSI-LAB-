library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity program_counter_tb is
end program_counter_tb;

architecture Behavioral of program_counter_tb is
    component program_counter
        Port ( CLK    : in  STD_LOGIC;
               RESET  : in  STD_LOGIC;
               LOAD   : in  STD_LOGIC;
               TARGET : in  STD_LOGIC_VECTOR (3 downto 0);
               PC     : out STD_LOGIC_VECTOR (3 downto 0));
    end component;

    signal CLK_tb    : STD_LOGIC := '0';
    signal RESET_tb  : STD_LOGIC := '1';
    signal LOAD_tb   : STD_LOGIC := '0';
    signal TARGET_tb : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    signal PC_tb     : STD_LOGIC_VECTOR (3 downto 0);
    signal done      : boolean := false;
begin
    UUT: program_counter port map ( CLK => CLK_tb, RESET => RESET_tb, LOAD => LOAD_tb,
                                    TARGET => TARGET_tb, PC => PC_tb );

    clk_proc: process
    begin
        while not done loop
            CLK_tb <= '0'; wait for 10 ns;
            CLK_tb <= '1'; wait for 10 ns;
        end loop;
        wait;
    end process;

    stim_proc: process
        variable errors : integer := 0;

        procedure tick (expected : in STD_LOGIC_VECTOR (3 downto 0); msg : in string) is
        begin
            wait until rising_edge(CLK_tb); wait for 2 ns;
            if PC_tb /= expected then
                errors := errors + 1;
                report "FAIL: " & msg severity error;
            end if;
        end procedure;
    begin
        -- Reset
        RESET_tb <= '1'; LOAD_tb <= '0'; TARGET_tb <= "0000";
        tick("0000", "reset did not clear PC");
        RESET_tb <= '0';

        -- Count up 1, 2, 3 ... 15, then wrap to 0
        tick("0001", "count 1");
        tick("0010", "count 2");
        tick("0011", "count 3");
        tick("0100", "count 4");
        tick("0101", "count 5");
        tick("0110", "count 6");
        tick("0111", "count 7");
        tick("1000", "count 8");
        tick("1001", "count 9");
        tick("1010", "count 10");
        tick("1011", "count 11");
        tick("1100", "count 12");
        tick("1101", "count 13");
        tick("1110", "count 14");
        tick("1111", "count 15");
        tick("0000", "wrap 15 -> 0");

        -- Jump (LOAD = 1) to 0x5, then continue counting
        LOAD_tb <= '1'; TARGET_tb <= "0101";
        tick("0101", "jump to 5");
        LOAD_tb <= '0';
        tick("0110", "count after jump");

        -- Jump to the same address it is on (target = 6) and to 0x0
        LOAD_tb <= '1'; TARGET_tb <= "0110";
        tick("0110", "jump to 6 (self)");
        TARGET_tb <= "0000";
        tick("0000", "jump to 0");
        LOAD_tb <= '0';
        tick("0001", "count after jump to 0");

        -- RESET beats LOAD
        LOAD_tb <= '1'; TARGET_tb <= "1111"; RESET_tb <= '1';
        tick("0000", "reset did not override load");

        if errors = 0 then
            report "PASS: program_counter testbench completed" severity note;
        else
            report "FAIL: program_counter testbench, errors = " & integer'image(errors) severity error;
        end if;
        done <= true;
        wait;
    end process;
end Behavioral;
