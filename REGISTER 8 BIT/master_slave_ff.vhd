library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity master_slave_ff is
    Port (
        D   : in  STD_LOGIC;
        CLK : in  STD_LOGIC;
        Q   : out STD_LOGIC;
        Q_N : out STD_LOGIC
    );
end master_slave_ff;

architecture Structural of master_slave_ff is

    component d_latch
        Port (
            D   : in  STD_LOGIC;
            EN  : in  STD_LOGIC;
            Q   : out STD_LOGIC;
            Q_N : out STD_LOGIC
        );
    end component;

    component not_gate
        Port (
            A : in  STD_LOGIC;
            Y : out STD_LOGIC
        );
    end component;

    signal CLK_N : STD_LOGIC;

    signal master_Q   : STD_LOGIC;
    signal master_Q_N : STD_LOGIC;

begin

    -- Inverted clock
    NOT_CLK: not_gate
        port map (
            A => CLK,
            Y => CLK_N
        );

    -- Master latch
    MASTER: d_latch
        port map (
            D   => D,
            EN  => CLK_N,
            Q   => master_Q,
            Q_N => master_Q_N
        );

    -- Slave latch
    SLAVE: d_latch
        port map (
            D   => master_Q,
            EN  => CLK,
            Q   => Q,
            Q_N => Q_N
        );

end Structural;