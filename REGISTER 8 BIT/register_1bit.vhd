library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity register_1bit is
    Port (
        CLK   : in  STD_LOGIC;
        RESET : in  STD_LOGIC;
        LOAD  : in  STD_LOGIC;
        D     : in  STD_LOGIC;
        Q     : out STD_LOGIC
    );
end register_1bit;

architecture Structural of register_1bit is

    component master_slave_ff
        Port (
            D   : in  STD_LOGIC;
            CLK : in  STD_LOGIC;
            Q   : out STD_LOGIC;
            Q_N : out STD_LOGIC
        );
    end component;

    signal D_next : STD_LOGIC;
    signal Q_int  : STD_LOGIC;
    signal Q_N_int : STD_LOGIC;

begin

    -- Synchronous control:
    -- RESET has priority over LOAD.
    process(RESET, LOAD, D, Q_int)
    begin
        if RESET = '1' then
            D_next <= '0';
        elsif LOAD = '1' then
            D_next <= D;
        else
            D_next <= Q_int;
        end if;
    end process;

    -- Master-Slave D Flip-Flop
    FF1: master_slave_ff
        port map (
            D   => D_next,
            CLK => CLK,
            Q   => Q_int,
            Q_N => Q_N_int
        );

    Q <= Q_int;

end Structural;