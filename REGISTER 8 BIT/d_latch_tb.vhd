library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity d_latch_tb is
end d_latch_tb;

architecture Behavioral of d_latch_tb is

    component d_latch
        Port (
            D   : in  STD_LOGIC;
            EN  : in  STD_LOGIC;
            Q   : out STD_LOGIC;
            Q_N : out STD_LOGIC
        );
    end component;

    signal D   : STD_LOGIC := '0';
    signal EN  : STD_LOGIC := '0';
    signal Q   : STD_LOGIC;
    signal Q_N : STD_LOGIC;

begin

    uut: d_latch
        port map (
            D   => D,
            EN  => EN,
            Q   => Q,
            Q_N => Q_N
        );

    stimulus: process
    begin

        -- Disabled
        D  <= '0';
        EN <= '0';
        wait for 20 ns;

        -- Enable, D = 1
        D  <= '1';
        EN <= '1';
        wait for 20 ns;

        -- Disable, hold 1
        EN <= '0';
        D  <= '0';
        wait for 20 ns;

        -- Enable, D = 0
        EN <= '1';
        wait for 20 ns;

        -- Disable
        EN <= '0';
        wait for 20 ns;

        wait;
    end process;

end Behavioral;