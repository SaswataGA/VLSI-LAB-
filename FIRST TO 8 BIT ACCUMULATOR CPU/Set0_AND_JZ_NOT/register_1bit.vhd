library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- 1-bit register: master-slave flip-flop + load-enable mux + synchronous reset.
--   RESET = 1          -> D_next = 0               (reset has priority)
--   RESET = 0, LOAD=1  -> D_next = D
--   RESET = 0, LOAD=0  -> D_next = Q (hold)

entity register_1bit is
    Port (
        CLK   : in  STD_LOGIC;
        RESET : in  STD_LOGIC;   -- synchronous, active-high
        LOAD  : in  STD_LOGIC;   -- load enable
        D     : in  STD_LOGIC;
        Q     : out STD_LOGIC
    );
end register_1bit;

architecture Structural of register_1bit is
    component master_slave_ff
        Port ( D : in  STD_LOGIC; CLK : in  STD_LOGIC;
               Q : out STD_LOGIC; Q_n : out STD_LOGIC);
    end component;
    component mux2
        Port ( D0 : in  STD_LOGIC; D1 : in  STD_LOGIC; SEL : in  STD_LOGIC; Y : out STD_LOGIC);
    end component;
    component not_gate
        Port ( A : in  STD_LOGIC; Y : out STD_LOGIC);
    end component;
    component and_gate
        Port ( A : in  STD_LOGIC; B : in  STD_LOGIC; Y : out STD_LOGIC);
    end component;

    signal d_sel   : STD_LOGIC;   -- LOAD ? D : Q
    signal reset_n : STD_LOGIC;
    signal D_next  : STD_LOGIC;
    signal Q_int   : STD_LOGIC;
    signal Q_n_int : STD_LOGIC;
begin
    U_HOLD:  mux2     port map ( D0 => Q_int, D1 => D, SEL => LOAD, Y => d_sel );
    U_RSTN:  not_gate port map ( A => RESET, Y => reset_n );
    U_RST:   and_gate port map ( A => d_sel, B => reset_n, Y => D_next );

    FF: master_slave_ff port map ( D => D_next, CLK => CLK, Q => Q_int, Q_n => Q_n_int );

    Q <= Q_int;
end Structural;
