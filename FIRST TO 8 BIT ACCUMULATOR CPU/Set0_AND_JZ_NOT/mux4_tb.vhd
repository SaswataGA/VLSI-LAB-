library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity mux4_tb is
end mux4_tb;

architecture Behavioral of mux4_tb is
    component mux4
        Port ( D0 : in  STD_LOGIC; D1 : in  STD_LOGIC; D2 : in  STD_LOGIC; D3 : in  STD_LOGIC;
               SEL : in  STD_LOGIC_VECTOR (1 downto 0); Y : out STD_LOGIC);
    end component;
    signal D0_tb, D1_tb, D2_tb, D3_tb, Y_tb : STD_LOGIC;
    signal SEL_tb : STD_LOGIC_VECTOR (1 downto 0);
begin
    UUT: mux4 port map ( D0 => D0_tb, D1 => D1_tb, D2 => D2_tb, D3 => D3_tb, SEL => SEL_tb, Y => Y_tb );

    stim_proc: process
    begin
        -- Pattern 1: D = 0,1,1,0 for D0..D3
        D0_tb<='0'; D1_tb<='1'; D2_tb<='1'; D3_tb<='0';
        SEL_tb<="00"; wait for 10 ns; assert Y_tb='0' report "FAIL: SEL=00 (pat1)" severity error;
        SEL_tb<="01"; wait for 10 ns; assert Y_tb='1' report "FAIL: SEL=01 (pat1)" severity error;
        SEL_tb<="10"; wait for 10 ns; assert Y_tb='1' report "FAIL: SEL=10 (pat1)" severity error;
        SEL_tb<="11"; wait for 10 ns; assert Y_tb='0' report "FAIL: SEL=11 (pat1)" severity error;

        -- Pattern 2: D = 1,0,0,1 for D0..D3 (swapped, to catch wiring mistakes)
        D0_tb<='1'; D1_tb<='0'; D2_tb<='0'; D3_tb<='1';
        SEL_tb<="00"; wait for 10 ns; assert Y_tb='1' report "FAIL: SEL=00 (pat2)" severity error;
        SEL_tb<="01"; wait for 10 ns; assert Y_tb='0' report "FAIL: SEL=01 (pat2)" severity error;
        SEL_tb<="10"; wait for 10 ns; assert Y_tb='0' report "FAIL: SEL=10 (pat2)" severity error;
        SEL_tb<="11"; wait for 10 ns; assert Y_tb='1' report "FAIL: SEL=11 (pat2)" severity error;

        report "PASS: mux4 testbench completed" severity note;
        wait;
    end process;
end Behavioral;
