library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity sr_latch_tb is
end sr_latch_tb;

architecture Behavioral of sr_latch_tb is

    component sr_latch
        Port (
            S_N : in  STD_LOGIC;
            R_N : in  STD_LOGIC;
            Q   : out STD_LOGIC;
            Q_N : out STD_LOGIC
        );
    end component;

    signal S_N : STD_LOGIC := '1';
    signal R_N : STD_LOGIC := '1';
    signal Q   : STD_LOGIC;
    signal Q_N : STD_LOGIC;

begin

    uut: sr_latch
        port map (
            S_N => S_N,
            R_N => R_N,
            Q   => Q,
            Q_N => Q_N
        );

    stimulus: process
    begin

        -- RESET
        S_N <= '1';
        R_N <= '0';
        wait for 20 ns;

        -- HOLD
        S_N <= '1';
        R_N <= '1';
        wait for 20 ns;

        -- SET
        S_N <= '0';
        R_N <= '1';
        wait for 20 ns;

        -- HOLD
        S_N <= '1';
        R_N <= '1';
        wait for 20 ns;

        wait;
    end process;

end Behavioral;