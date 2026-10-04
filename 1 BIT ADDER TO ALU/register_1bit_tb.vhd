library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity register_1bit_tb is
end register_1bit_tb;

architecture Behavioral of register_1bit_tb is
    component register_1bit
        Port ( CLK : in  STD_LOGIC; RESET : in  STD_LOGIC; LOAD : in  STD_LOGIC;
               D : in  STD_LOGIC; Q : out STD_LOGIC);
    end component;

    signal CLK_tb   : STD_LOGIC := '0';
    signal RESET_tb : STD_LOGIC := '1';   -- start in reset, like the 8-bit version
    signal LOAD_tb  : STD_LOGIC := '0';
    signal D_tb     : STD_LOGIC := '0';
    signal Q_tb     : STD_LOGIC;
begin
    UUT: register_1bit port map ( CLK => CLK_tb, RESET => RESET_tb, LOAD => LOAD_tb,
                                  D => D_tb, Q => Q_tb );

    clk_proc: process
    begin
        CLK_tb <= '0'; wait for 10 ns;
        CLK_tb <= '1'; wait for 10 ns;
    end process;

    stim_proc: process
    begin
        -- Reset behavior
        RESET_tb <= '1'; LOAD_tb <= '0'; D_tb <= '1';
        wait until rising_edge(CLK_tb); wait for 2 ns;
        assert (Q_tb = '0') report "FAIL: reset did not clear register" severity error;

        RESET_tb <= '0';

        -- LOAD=0: Q must not follow D
        D_tb <= '1'; LOAD_tb <= '0';
        wait until rising_edge(CLK_tb); wait for 2 ns;
        assert (Q_tb = '0') report "FAIL: Q changed while LOAD=0" severity error;

        -- LOAD=1: Q captures D
        D_tb <= '1'; LOAD_tb <= '1';
        wait until rising_edge(CLK_tb); wait for 2 ns;
        assert (Q_tb = '1') report "FAIL: Q did not capture D=1" severity error;

        -- Hold again with LOAD=0
        D_tb <= '0'; LOAD_tb <= '0';
        wait until rising_edge(CLK_tb); wait for 2 ns;
        assert (Q_tb = '1') report "FAIL: Q changed while LOAD=0 (after load)" severity error;

        -- RESET overrides LOAD
        D_tb <= '1'; LOAD_tb <= '1'; RESET_tb <= '1';
        wait until rising_edge(CLK_tb); wait for 2 ns;
        assert (Q_tb = '0') report "FAIL: reset did not override load" severity error;

        report "PASS: register_1bit testbench completed" severity note;
        wait;
    end process;
end Behavioral;
