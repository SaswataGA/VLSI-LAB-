library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity register_4bit_tb is
end register_4bit_tb;

architecture Behavioral of register_4bit_tb is
    component register_4bit
        Port ( CLK : in  STD_LOGIC; RESET : in  STD_LOGIC; LOAD : in  STD_LOGIC;
               D : in  STD_LOGIC_VECTOR (3 downto 0); Q : out STD_LOGIC_VECTOR (3 downto 0));
    end component;

    signal CLK_tb   : STD_LOGIC := '0';
    signal RESET_tb : STD_LOGIC := '1';
    signal LOAD_tb  : STD_LOGIC := '0';
    signal D_tb     : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    signal Q_tb     : STD_LOGIC_VECTOR (3 downto 0);
    signal done     : boolean := false;
begin
    UUT: register_4bit port map ( CLK => CLK_tb, RESET => RESET_tb, LOAD => LOAD_tb,
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
        -- Reset
        RESET_tb <= '1'; LOAD_tb <= '0'; D_tb <= "1111";
        wait until rising_edge(CLK_tb); wait for 2 ns;
        if Q_tb /= "0000" then errors := errors + 1; report "FAIL: reset did not clear register" severity error; end if;

        RESET_tb <= '0';

        -- LOAD=0: Q must not follow D
        D_tb <= "1010"; LOAD_tb <= '0';
        wait until rising_edge(CLK_tb); wait for 2 ns;
        if Q_tb /= "0000" then errors := errors + 1; report "FAIL: Q changed while LOAD=0" severity error; end if;

        -- LOAD=1: Q captures D
        D_tb <= "1010"; LOAD_tb <= '1';
        wait until rising_edge(CLK_tb); wait for 2 ns;
        if Q_tb /= "1010" then errors := errors + 1; report "FAIL: Q did not capture 1010" severity error; end if;

        D_tb <= "0101";
        wait until rising_edge(CLK_tb); wait for 2 ns;
        if Q_tb /= "0101" then errors := errors + 1; report "FAIL: Q did not capture 0101" severity error; end if;

        -- Hold
        D_tb <= "1111"; LOAD_tb <= '0';
        wait until rising_edge(CLK_tb); wait for 2 ns;
        if Q_tb /= "0101" then errors := errors + 1; report "FAIL: Q changed while LOAD=0 (after load)" severity error; end if;

        -- RESET overrides LOAD
        D_tb <= "1111"; LOAD_tb <= '1'; RESET_tb <= '1';
        wait until rising_edge(CLK_tb); wait for 2 ns;
        if Q_tb /= "0000" then errors := errors + 1; report "FAIL: reset did not override load" severity error; end if;

        if errors = 0 then
            report "PASS: register_4bit testbench completed" severity note;
        else
            report "FAIL: register_4bit testbench, errors = " & integer'image(errors) severity error;
        end if;
        done <= true;
        wait;
    end process;
end Behavioral;
