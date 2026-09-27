library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity tb_adder_4bit is
end tb_adder_4bit;

architecture Behavioral of tb_adder_4bit is

    -- Component Declaration
    component adder_4bit
        Port (
            A    : in  STD_LOGIC_VECTOR (3 downto 0);
            B    : in  STD_LOGIC_VECTOR (3 downto 0);
            CIN  : in  STD_LOGIC;
            SUM  : out STD_LOGIC_VECTOR (3 downto 0);
            COUT : out STD_LOGIC
        );
    end component;

    -- Signals
    signal A    : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    signal B    : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    signal CIN  : STD_LOGIC := '0';
    signal SUM  : STD_LOGIC_VECTOR (3 downto 0);
    signal COUT : STD_LOGIC;

begin

    -- DUT Instantiation
    DUT: adder_4bit
        port map (
            A    => A,
            B    => B,
            CIN  => CIN,
            SUM  => SUM,
            COUT => COUT
        );

    -- Test Process
    stimulus: process
    begin

        -- Test 1: 0000 + 0000 + 0 = 0000
        A <= "0000";
        B <= "0000";
        CIN <= '0';
        wait for 10 ns;

        -- Test 2: 0001 + 0010 + 0 = 0011
        A <= "0001";
        B <= "0010";
        CIN <= '0';
        wait for 10 ns;

        -- Test 3: 0101 + 0011 + 0 = 1000
        A <= "0101";
        B <= "0011";
        CIN <= '0';
        wait for 10 ns;

        -- Test 4: 1111 + 0001 + 0 = 1 0000
        A <= "1111";
        B <= "0001";
        CIN <= '0';
        wait for 10 ns;

        -- Test 5: 1010 + 0101 + 0 = 1111
        A <= "1010";
        B <= "0101";
        CIN <= '0';
        wait for 10 ns;

        -- Test 6: 1010 + 0101 + 1 = 1 0000
        A <= "1010";
        B <= "0101";
        CIN <= '1';
        wait for 10 ns;

        -- Test 7: 1111 + 1111 + 1 = 1 1111
        A <= "1111";
        B <= "1111";
        CIN <= '1';
        wait for 10 ns;

        wait;

    end process stimulus;

end Behavioral;