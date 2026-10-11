library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- 2-to-1 multiplexer built only from NOT / AND / OR gates:
--     Y = (D0 AND NOT SEL) OR (D1 AND SEL)

entity mux2 is
    Port ( D0  : in  STD_LOGIC;
           D1  : in  STD_LOGIC;
           SEL : in  STD_LOGIC;
           Y   : out STD_LOGIC);
end mux2;

architecture Structural of mux2 is
    component not_gate
        Port ( A : in  STD_LOGIC; Y : out STD_LOGIC);
    end component;
    component and_gate
        Port ( A : in  STD_LOGIC; B : in  STD_LOGIC; Y : out STD_LOGIC);
    end component;
    component or_gate
        Port ( A : in  STD_LOGIC; B : in  STD_LOGIC; Y : out STD_LOGIC);
    end component;
    signal sel_n, t0, t1 : STD_LOGIC;
begin
    U1: not_gate port map ( A => SEL, Y => sel_n );
    U2: and_gate port map ( A => D0,  B => sel_n, Y => t0 );
    U3: and_gate port map ( A => D1,  B => SEL,   Y => t1 );
    U4: or_gate  port map ( A => t0,  B => t1,    Y => Y );
end Structural;
