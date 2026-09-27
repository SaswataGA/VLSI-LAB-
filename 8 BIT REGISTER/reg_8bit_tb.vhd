library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity tb_register_8bit is
end tb_register_8bit;

architecture Behavioral of tb_register_8bit is

    -- Component declaration
    component register_8bit
        Port (
            CLK   : in  STD_LOGIC;
            RESET : in  STD_LOGIC;
            LOAD  : in  STD_LOGIC;
            D     : in  STD_LOGIC_VECTOR(7 downto 0);
            Q     : out STD_LOGIC_VECTOR(7 downto 0)
        );
    end component;

    -- Testbench signals
    signal CLK   : STD_LOGIC := '0';
    signal RESET : STD_LOGIC := '0';
    signal LOAD  : STD_LOGIC := '0';
    signal D     : STD_LOGIC_VECTOR(7 downto 0) := (others => '0');
    signal Q     : STD_LOGIC_VECTOR(7 downto 0);

begin

    -- Unit Under Test
    UUT: register_8bit
        port map (
            CLK   => CLK,
            RESET => RESET,
            LOAD  => LOAD,
            D     => D,
            Q     => Q
        );

    -- Clock generation
    CLK <= not CLK after 5 ns;

    -- Test process
    stimulus: process
    begin

        -- Test 1: RESET
        RESET <= '1';
        LOAD  <= '0';
        D     <= "10101010";

        wait for 10 ns;

        -- After reset, Q should be 00000000


        -- Test 2: LOAD data
        RESET <= '0';
        LOAD  <= '1';
        D     <= "10101010";

        wait for 10 ns;

        -- Q should become 10101010


        -- Test 3: LOAD another data
        D <= "11001100";

        wait for 10 ns;

        -- Q should become 11001100


        -- Test 4: HOLD
        LOAD <= '0';
        D    <= "11110000";

        wait for 10 ns;

        -- Q should remain 11001100


        -- Test 5: LOAD again
        LOAD <= '1';
        D    <= "01010101";

        wait for 10 ns;

        -- Q should become 01010101


        -- Test 6: RESET again
        RESET <= '1';
        LOAD  <= '0';

        wait for 10 ns;

        -- Q should become 00000000


        wait;

    end process;

end Behavioral;