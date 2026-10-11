library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- 4-to-1 multiplexer built from three mux2 cells (which are pure gates).
--     SEL = 00 -> D0    01 -> D1    10 -> D2    11 -> D3

entity mux4 is
    Port ( D0  : in  STD_LOGIC;
           D1  : in  STD_LOGIC;
           D2  : in  STD_LOGIC;
           D3  : in  STD_LOGIC;
           SEL : in  STD_LOGIC_VECTOR (1 downto 0);
           Y   : out STD_LOGIC);
end mux4;

architecture Structural of mux4 is
    component mux2
        Port ( D0 : in  STD_LOGIC; D1 : in  STD_LOGIC; SEL : in  STD_LOGIC; Y : out STD_LOGIC);
    end component;
    signal m_lo, m_hi : STD_LOGIC;
begin
    U_LO:  mux2 port map ( D0 => D0,   D1 => D1,   SEL => SEL(0), Y => m_lo );
    U_HI:  mux2 port map ( D0 => D2,   D1 => D3,   SEL => SEL(0), Y => m_hi );
    U_OUT: mux2 port map ( D0 => m_lo, D1 => m_hi, SEL => SEL(1), Y => Y );
end Structural;
