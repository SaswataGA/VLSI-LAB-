library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity register_1bit_set_tb is
end register_1bit_set_tb;

architecture Behavioral of register_1bit_set_tb is
    component register_1bit_set
        Port ( CLK : in  STD_LOGIC; RESET : in  STD_LOGIC; LOAD : in  STD_LOGIC;
               D : in  STD_LOGIC; Q : out STD_LOGIC);
    end component;

    signal CLK_tb   : STD_LOGIC := '0';
    signal RESET_tb : STD_LOGIC := '1';
    signal LOAD_tb  : STD_LOGIC := '0';
    signal D_tb     : STD_LOGIC := '0';
    signal Q_tb     : STD_LOGIC;
    signal done     : boolean := false;
begin
    UUT: register_1bit_set port map ( CLK => CLK_tb, RESET => RESET_tb, LOAD => LOAD_tb,
                                      D => D_tb, Q => Q_tb );

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
    begin
        -- Reset must SET the bit to 1
        RESET_tb <= '1'; LOAD_tb <= '0'; D_tb <= '0';
        wait until rising_edge(CLK_tb); wait for 2 ns;
        if Q_tb /= '1' then errors := errors + 1; report "FAIL: reset did not set register to 1" severity error; end if;

        RESET_tb <= '0';

        -- LOAD=0: hold the 1
        D_tb <= '0'; LOAD_tb <= '0';
        wait until rising_edge(CLK_tb); wait for 2 ns;
        if Q_tb /= '1' then errors := errors + 1; report "FAIL: Q changed while LOAD=0" severity error; end if;

        -- LOAD=1: capture 0
        D_tb <= '0'; LOAD_tb <= '1';
        wait until rising_edge(CLK_tb); wait for 2 ns;
        if Q_tb /= '0' then errors := errors + 1; report "FAIL: Q did not capture D=0" severity error; end if;

        -- Hold the 0
        D_tb <= '1'; LOAD_tb <= '0';
        wait until rising_edge(CLK_tb); wait for 2 ns;
        if Q_tb /= '0' then errors := errors + 1; report "FAIL: Q changed while LOAD=0 (after load)" severity error; end if;

        -- LOAD=1: capture 1
        D_tb <= '1'; LOAD_tb <= '1';
        wait until rising_edge(CLK_tb); wait for 2 ns;
        if Q_tb /= '1' then errors := errors + 1; report "FAIL: Q did not capture D=1" severity error; end if;

        -- capture 0 again, then RESET overrides LOAD and D
        D_tb <= '0'; LOAD_tb <= '1';
        wait until rising_edge(CLK_tb); wait for 2 ns;
        D_tb <= '0'; LOAD_tb <= '1'; RESET_tb <= '1';
        wait until rising_edge(CLK_tb); wait for 2 ns;
        if Q_tb /= '1' then errors := errors + 1; report "FAIL: reset did not override load" severity error; end if;

        if errors = 0 then
            report "PASS: register_1bit_set testbench completed" severity note;
        else
            report "FAIL: register_1bit_set testbench, errors = " & integer'image(errors) severity error;
        end if;
        done <= true;
        wait;
    end process;
end Behavioral;
