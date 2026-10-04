library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity zero_detect_8_tb is
end zero_detect_8_tb;

architecture Behavioral of zero_detect_8_tb is
    component zero_detect_8
        Port ( D : in  STD_LOGIC_VECTOR (7 downto 0); Z : out STD_LOGIC);
    end component;
    signal D_tb : STD_LOGIC_VECTOR (7 downto 0);
    signal Z_tb : STD_LOGIC;
begin
    UUT: zero_detect_8 port map ( D => D_tb, Z => Z_tb );

    stim_proc: process
    begin
        D_tb <= x"00"; wait for 10 ns;
        assert Z_tb = '1' report "FAIL: 00 should give Z=1" severity error;
        D_tb <= x"01"; wait for 10 ns;
        assert Z_tb = '0' report "FAIL: 01 should give Z=0" severity error;
        D_tb <= x"80"; wait for 10 ns;
        assert Z_tb = '0' report "FAIL: 80 should give Z=0" severity error;
        D_tb <= x"FF"; wait for 10 ns;
        assert Z_tb = '0' report "FAIL: FF should give Z=0" severity error;
        D_tb <= x"55"; wait for 10 ns;
        assert Z_tb = '0' report "FAIL: 55 should give Z=0" severity error;
        D_tb <= x"00"; wait for 10 ns;
        assert Z_tb = '1' report "FAIL: back to 00 should give Z=1" severity error;
        report "PASS: zero_detect_8 testbench completed" severity note;
        wait;
    end process;
end Behavioral;
