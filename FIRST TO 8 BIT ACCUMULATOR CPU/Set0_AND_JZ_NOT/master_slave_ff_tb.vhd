library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity master_slave_ff_tb is
end master_slave_ff_tb;

architecture Behavioral of master_slave_ff_tb is
    component master_slave_ff
        Port ( D : in  STD_LOGIC; CLK : in  STD_LOGIC;
               Q : out STD_LOGIC; Q_n : out STD_LOGIC);
    end component;
    signal D_tb, CLK_tb, Q_tb, Qn_tb : STD_LOGIC := '0';
begin
    UUT: master_slave_ff port map ( D => D_tb, CLK => CLK_tb, Q => Q_tb, Q_n => Qn_tb );

    stim_proc: process
    begin
        -- Priming pulse: before the first clock edge, Q is unknown (just like
        -- a real flip-flop at power-up). One clock pulse with D=0 establishes
        -- a known starting state before the real checks begin.
        CLK_tb <= '0'; D_tb <= '0'; wait for 10 ns;
        CLK_tb <= '1'; wait for 10 ns;
        assert (Q_tb = '0') report "FAIL: priming pulse did not give a known Q=0" severity error;
        CLK_tb <= '0'; wait for 10 ns;

        -- Master captures D=1 while CLK=0; output must not change yet
        D_tb <= '1'; wait for 10 ns;
        assert (Q_tb = '0') report "FAIL: output changed before rising edge" severity error;

        -- Rising edge: slave copies master -> Q becomes 1
        CLK_tb <= '1'; wait for 10 ns;
        assert (Q_tb = '1') report "FAIL: Q did not capture D on rising edge" severity error;

        -- While CLK=1, master is held; changing D must not affect Q
        D_tb <= '0'; wait for 10 ns;
        assert (Q_tb = '1') report "FAIL: Q changed while CLK=1 (master not held)" severity error;

        -- Falling edge: master becomes transparent and captures D=0; slave holds -> Q still 1
        CLK_tb <= '0'; wait for 10 ns;
        assert (Q_tb = '1') report "FAIL: Q changed on falling edge (slave not held)" severity error;

        -- Next rising edge: slave copies the new master value -> Q becomes 0
        CLK_tb <= '1'; wait for 10 ns;
        assert (Q_tb = '0') report "FAIL: Q did not capture D=0 on 2nd rising edge" severity error;

        report "PASS: master_slave_ff testbench completed" severity note;
        wait;
    end process;
end Behavioral;
