library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity adder_8bit_tb is
end adder_8bit_tb;

architecture Behavioral of adder_8bit_tb is
    component adder_8bit
        Port ( A : in  STD_LOGIC_VECTOR (7 downto 0); B : in  STD_LOGIC_VECTOR (7 downto 0);
               CIN : in  STD_LOGIC; SUM : out STD_LOGIC_VECTOR (7 downto 0); COUT : out STD_LOGIC);
    end component;
    signal A_tb, B_tb, SUM_tb : STD_LOGIC_VECTOR (7 downto 0);
    signal CIN_tb, COUT_tb    : STD_LOGIC;
begin
    UUT: adder_8bit port map ( A => A_tb, B => B_tb, CIN => CIN_tb, SUM => SUM_tb, COUT => COUT_tb );

    stim_proc: process
    begin
        A_tb <= x"00"; B_tb <= x"00"; CIN_tb <= '0'; wait for 20 ns;
        assert (SUM_tb = x"00" and COUT_tb = '0') report "FAIL: 00+00" severity error;
        A_tb <= x"FF"; B_tb <= x"01"; CIN_tb <= '0'; wait for 20 ns;
        assert (SUM_tb = x"00" and COUT_tb = '1') report "FAIL: FF+01" severity error;
        A_tb <= x"0F"; B_tb <= x"01"; CIN_tb <= '0'; wait for 20 ns;
        assert (SUM_tb = x"10" and COUT_tb = '0') report "FAIL: 0F+01" severity error;
        A_tb <= x"55"; B_tb <= x"AA"; CIN_tb <= '0'; wait for 20 ns;
        assert (SUM_tb = x"FF" and COUT_tb = '0') report "FAIL: 55+AA" severity error;
        A_tb <= x"AA"; B_tb <= x"55"; CIN_tb <= '0'; wait for 20 ns;
        assert (SUM_tb = x"FF" and COUT_tb = '0') report "FAIL: AA+55" severity error;
        A_tb <= x"3C"; B_tb <= x"27"; CIN_tb <= '0'; wait for 20 ns;
        assert (SUM_tb = x"63" and COUT_tb = '0') report "FAIL: 3C+27" severity error;
        A_tb <= x"9D"; B_tb <= x"64"; CIN_tb <= '0'; wait for 20 ns;
        assert (SUM_tb = x"01" and COUT_tb = '1') report "FAIL: 9D+64" severity error;
        A_tb <= x"10"; B_tb <= x"20"; CIN_tb <= '1'; wait for 20 ns;
        assert (SUM_tb = x"31" and COUT_tb = '0') report "FAIL: 10+20+cin" severity error;
        report "PASS: adder_8bit testbench completed" severity note;
        wait;
    end process;
end Behavioral;
