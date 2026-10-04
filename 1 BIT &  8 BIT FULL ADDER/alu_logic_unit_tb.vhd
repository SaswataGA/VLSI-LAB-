library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity alu_logic_unit_tb is
end alu_logic_unit_tb;

architecture Behavioral of alu_logic_unit_tb is
    component alu_logic_unit
        Port ( A : in  STD_LOGIC_VECTOR (7 downto 0); B : in  STD_LOGIC_VECTOR (7 downto 0);
               AND_OUT : out STD_LOGIC_VECTOR (7 downto 0); OR_OUT : out STD_LOGIC_VECTOR (7 downto 0);
               XOR_OUT : out STD_LOGIC_VECTOR (7 downto 0); NOT_OUT : out STD_LOGIC_VECTOR (7 downto 0));
    end component;
    signal A_tb, B_tb, AND_tb, OR_tb, XOR_tb, NOT_tb : STD_LOGIC_VECTOR (7 downto 0);
begin
    UUT: alu_logic_unit port map ( A => A_tb, B => B_tb, AND_OUT => AND_tb,
                                   OR_OUT => OR_tb, XOR_OUT => XOR_tb, NOT_OUT => NOT_tb );

    stim_proc: process
    begin
        A_tb <= x"F0"; B_tb <= x"3C"; wait for 10 ns;
        assert AND_tb = x"30" report "FAIL: AND F0&3C" severity error;
        assert OR_tb  = x"FC" report "FAIL: OR  F0|3C" severity error;
        assert XOR_tb = x"CC" report "FAIL: XOR F0^3C" severity error;
        assert NOT_tb = x"0F" report "FAIL: NOT F0" severity error;

        A_tb <= x"AA"; B_tb <= x"55"; wait for 10 ns;
        assert AND_tb = x"00" report "FAIL: AND AA&55" severity error;
        assert OR_tb  = x"FF" report "FAIL: OR  AA|55" severity error;
        assert XOR_tb = x"FF" report "FAIL: XOR AA^55" severity error;
        assert NOT_tb = x"55" report "FAIL: NOT AA" severity error;

        A_tb <= x"00"; B_tb <= x"00"; wait for 10 ns;
        assert AND_tb = x"00" report "FAIL: AND 00&00" severity error;
        assert OR_tb  = x"00" report "FAIL: OR  00|00" severity error;
        assert XOR_tb = x"00" report "FAIL: XOR 00^00" severity error;
        assert NOT_tb = x"FF" report "FAIL: NOT 00" severity error;

        report "PASS: alu_logic_unit testbench completed" severity note;
        wait;
    end process;
end Behavioral;
