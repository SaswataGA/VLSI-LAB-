library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Master-slave D flip-flop made of two D latches and one NOT gate.
-- Output Q changes only on the rising edge of CLK.

entity master_slave_ff is
    Port ( D     : in  STD_LOGIC;
           CLK   : in  STD_LOGIC;
           Q     : out STD_LOGIC;
           Q_n   : out STD_LOGIC);
end master_slave_ff;

architecture Structural of master_slave_ff is
    component d_latch
        Port ( D : in  STD_LOGIC; ENABLE : in  STD_LOGIC;
               Q : out STD_LOGIC; Q_n : out STD_LOGIC);
    end component;
    component not_gate
        Port ( A : in  STD_LOGIC; Y : out STD_LOGIC);
    end component;
    signal CLK_n : STD_LOGIC;
    signal Q_M, Q_M_n : STD_LOGIC;
begin
    U_INV: not_gate port map ( A => CLK, Y => CLK_n );

    -- Master latch: transparent when CLK=0
    MASTER: d_latch port map ( D => D, ENABLE => CLK_n, Q => Q_M, Q_n => Q_M_n );

    -- Slave latch: transparent when CLK=1  (so output updates on the rising edge)
    SLAVE: d_latch port map ( D => Q_M, ENABLE => CLK, Q => Q, Q_n => Q_n );
end Structural;
