library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- 4-bit program counter.
--   every rising edge :  PC <= PC + 1        (LOAD = 0)
--                        PC <= TARGET        (LOAD = 1, used by a taken JZ)
--   RESET = 1 (synchronous, active-high) clears PC to 0 and has priority.
-- Built from: adder_4bit (incrementer) + 4 x mux2 + register_4bit.

entity program_counter is
    Port ( CLK    : in  STD_LOGIC;
           RESET  : in  STD_LOGIC;
           LOAD   : in  STD_LOGIC;                          -- 1 = jump to TARGET
           TARGET : in  STD_LOGIC_VECTOR (3 downto 0);
           PC     : out STD_LOGIC_VECTOR (3 downto 0));
end program_counter;

architecture Structural of program_counter is
    component adder_4bit
        Port ( A : in  STD_LOGIC_VECTOR (3 downto 0); B : in  STD_LOGIC_VECTOR (3 downto 0);
               CIN : in  STD_LOGIC; SUM : out STD_LOGIC_VECTOR (3 downto 0); COUT : out STD_LOGIC);
    end component;
    component mux2
        Port ( D0 : in  STD_LOGIC; D1 : in  STD_LOGIC; SEL : in  STD_LOGIC; Y : out STD_LOGIC);
    end component;
    component register_4bit
        Port ( CLK : in  STD_LOGIC; RESET : in  STD_LOGIC; LOAD : in  STD_LOGIC;
               D : in  STD_LOGIC_VECTOR (3 downto 0); Q : out STD_LOGIC_VECTOR (3 downto 0));
    end component;

    signal pc_q    : STD_LOGIC_VECTOR (3 downto 0);   -- current PC
    signal pc_inc  : STD_LOGIC_VECTOR (3 downto 0);   -- PC + 1
    signal pc_next : STD_LOGIC_VECTOR (3 downto 0);   -- value written on the next edge
begin
    U_INC: adder_4bit port map ( A => pc_q, B => "0001", CIN => '0',
                                 SUM => pc_inc, COUT => open );

    GEN_SEL: for i in 0 to 3 generate
        U_MUX: mux2 port map ( D0 => pc_inc(i), D1 => TARGET(i), SEL => LOAD, Y => pc_next(i) );
    end generate GEN_SEL;

    U_REG: register_4bit port map ( CLK => CLK, RESET => RESET, LOAD => '1',
                                    D => pc_next, Q => pc_q );

    PC <= pc_q;
end Structural;
