library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- 4-bit register: four register_1bit cells sharing CLK / RESET / LOAD.
-- Used for the program counter.

entity register_4bit is
    Port (
        CLK   : in  STD_LOGIC;
        RESET : in  STD_LOGIC;   -- synchronous, active-high
        LOAD  : in  STD_LOGIC;
        D     : in  STD_LOGIC_VECTOR (3 downto 0);
        Q     : out STD_LOGIC_VECTOR (3 downto 0)
    );
end register_4bit;

architecture Structural of register_4bit is
    component register_1bit
        Port ( CLK : in  STD_LOGIC; RESET : in  STD_LOGIC; LOAD : in  STD_LOGIC;
               D : in  STD_LOGIC; Q : out STD_LOGIC);
    end component;
begin
    GEN_BITS: for i in 0 to 3 generate
        REGi: register_1bit port map ( CLK => CLK, RESET => RESET, LOAD => LOAD,
                                       D => D(i), Q => Q(i) );
    end generate GEN_BITS;
end Structural;
