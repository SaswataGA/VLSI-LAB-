library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity master_slave_ff_tb is
end master_slave_ff_tb;

architecture Behavioral of master_slave_ff_tb is

    component master_slave_ff
        Port (
            D   : in  STD_LOGIC;
            CLK : in  STD_LOGIC;
            Q   : out STD_LOGIC;
            Q_N : out STD_LOGIC
        );
    end component;

    signal D   : STD_LOGIC := '0';
    signal CLK : STD_LOGIC := '0';
    signal Q   : STD_LOGIC;
    signal Q_N : STD_LOGIC;

begin

    uut: master_slave_ff
        port map (
            D   => D,
            CLK => CLK,
            Q   => Q,
            Q_N => Q_N
        );

    -- Clock
    clock_process: process
    begin
        while true loop
            CLK <= '0';
            wait for 10 ns;

            CLK <= '1';
            wait for 10 ns;
        end loop;
    end process;

    stimulus: process
    begin

        D <= '0';
        wait for 15 ns;

        D <= '1';
        wait for 20 ns;

        D <= '0';
        wait for 20 ns;

        D <= '1';
        wait for 20 ns;

        D <= '0';
        wait for 20 ns;

        wait;
    end process;

end Behavioral;