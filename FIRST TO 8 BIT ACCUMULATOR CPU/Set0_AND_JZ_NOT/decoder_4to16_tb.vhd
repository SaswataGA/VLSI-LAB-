library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity decoder_4to16_tb is
end decoder_4to16_tb;

architecture Behavioral of decoder_4to16_tb is
    component decoder_4to16
        Port ( A : in  STD_LOGIC_VECTOR (3 downto 0);
               Y : out STD_LOGIC_VECTOR (15 downto 0));
    end component;
    signal A_tb : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    signal Y_tb : STD_LOGIC_VECTOR (15 downto 0);
begin
    UUT: decoder_4to16 port map ( A => A_tb, Y => Y_tb );

    stim_proc: process
        variable expected : STD_LOGIC_VECTOR (15 downto 0);
        variable errors   : integer := 0;
    begin
        for i in 0 to 15 loop
            A_tb <= std_logic_vector(to_unsigned(i, 4));
            wait for 10 ns;
            expected := (others => '0');
            expected(i) := '1';
            if Y_tb /= expected then
                errors := errors + 1;
                report "FAIL: decoder input " & integer'image(i) severity error;
            end if;
        end loop;

        if errors = 0 then
            report "PASS: decoder_4to16 testbench completed" severity note;
        else
            report "FAIL: decoder_4to16 testbench, errors = " & integer'image(errors) severity error;
        end if;
        wait;
    end process;
end Behavioral;
