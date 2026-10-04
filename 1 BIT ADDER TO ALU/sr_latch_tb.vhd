library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity sr_latch_tb is
end sr_latch_tb;

architecture Behavioral of sr_latch_tb is
    component sr_latch
        Port ( S_n : in  STD_LOGIC; R_n : in  STD_LOGIC;
               Q : out STD_LOGIC; Q_n : out STD_LOGIC);
    end component;
    signal S_n_tb, R_n_tb, Q_tb, Qn_tb : STD_LOGIC;
begin
    UUT: sr_latch port map ( S_n => S_n_tb, R_n => R_n_tb, Q => Q_tb, Q_n => Qn_tb );

    stim_proc: process
    begin
        -- Set: S_n=0, R_n=1 -> Q=1
        S_n_tb <= '0'; R_n_tb <= '1'; wait for 10 ns;
        assert (Q_tb = '1' and Qn_tb = '0') report "FAIL: SET" severity error;

        -- Hold: S_n=1, R_n=1 -> Q keeps 1
        S_n_tb <= '1'; R_n_tb <= '1'; wait for 10 ns;
        assert (Q_tb = '1' and Qn_tb = '0') report "FAIL: HOLD after SET" severity error;

        -- Reset: S_n=1, R_n=0 -> Q=0
        S_n_tb <= '1'; R_n_tb <= '0'; wait for 10 ns;
        assert (Q_tb = '0' and Qn_tb = '1') report "FAIL: RESET" severity error;

        -- Hold: S_n=1, R_n=1 -> Q keeps 0
        S_n_tb <= '1'; R_n_tb <= '1'; wait for 10 ns;
        assert (Q_tb = '0' and Qn_tb = '1') report "FAIL: HOLD after RESET" severity error;

        report "PASS: sr_latch testbench completed" severity note;
        wait;
    end process;
end Behavioral;
