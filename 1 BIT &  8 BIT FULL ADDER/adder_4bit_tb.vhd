library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity adder_4bit_tb is
end adder_4bit_tb;

architecture Behavioral of adder_4bit_tb is
    component adder_4bit
        Port ( A : in  STD_LOGIC_VECTOR (3 downto 0); B : in  STD_LOGIC_VECTOR (3 downto 0);
               CIN : in  STD_LOGIC; SUM : out STD_LOGIC_VECTOR (3 downto 0); COUT : out STD_LOGIC);
    end component;
    signal A_tb, B_tb, SUM_tb : STD_LOGIC_VECTOR (3 downto 0);
    signal CIN_tb, COUT_tb : STD_LOGIC;
begin
    UUT: adder_4bit port map ( A => A_tb, B => B_tb, CIN => CIN_tb, SUM => SUM_tb, COUT => COUT_tb );

    stim_proc: process
    begin
        A_tb<=x"0"; B_tb<=x"0"; CIN_tb<='0'; wait for 10 ns;
        assert (SUM_tb=x"0" and COUT_tb='0') report "FAIL: 0+0" severity error;
        A_tb<=x"7"; B_tb<=x"1"; CIN_tb<='0'; wait for 10 ns;
        assert (SUM_tb=x"8" and COUT_tb='0') report "FAIL: 7+1" severity error;
        A_tb<=x"F"; B_tb<=x"1"; CIN_tb<='0'; wait for 10 ns;
        assert (SUM_tb=x"0" and COUT_tb='1') report "FAIL: F+1" severity error;
        A_tb<=x"A"; B_tb<=x"5"; CIN_tb<='0'; wait for 10 ns;
        assert (SUM_tb=x"F" and COUT_tb='0') report "FAIL: A+5" severity error;
        A_tb<=x"8"; B_tb<=x"8"; CIN_tb<='0'; wait for 10 ns;
        assert (SUM_tb=x"0" and COUT_tb='1') report "FAIL: 8+8" severity error;
        A_tb<=x"3"; B_tb<=x"4"; CIN_tb<='1'; wait for 10 ns;
        assert (SUM_tb=x"8" and COUT_tb='0') report "FAIL: 3+4+cin" severity error;
        A_tb<=x"F"; B_tb<=x"F"; CIN_tb<='1'; wait for 10 ns;
        assert (SUM_tb=x"F" and COUT_tb='1') report "FAIL: F+F+cin" severity error;
        report "PASS: adder_4bit testbench completed" severity note;
        wait;
    end process;
end Behavioral;
