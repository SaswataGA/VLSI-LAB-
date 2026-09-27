library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity d_latch is
    Port (
        D  : in  STD_LOGIC;
        EN : in  STD_LOGIC;
        Q  : out STD_LOGIC;
        Q_N : out STD_LOGIC
    );
end d_latch;

architecture Structural of d_latch is

    component nand_gate
        Port (
            A : in  STD_LOGIC;
            B : in  STD_LOGIC;
            Y : out STD_LOGIC
        );
    end component;

    component not_gate
        Port (
            A : in  STD_LOGIC;
            Y : out STD_LOGIC
        );
    end component;

    component sr_latch
        Port (
            S_N : in  STD_LOGIC;
            R_N : in  STD_LOGIC;
            Q   : out STD_LOGIC;
            Q_N : out STD_LOGIC
        );
    end component;

    signal D_N : STD_LOGIC;
    signal S_N : STD_LOGIC;
    signal R_N : STD_LOGIC;

begin

    -- NOT D
    NOT1: not_gate
        port map (
            A => D,
            Y => D_N
        );

    -- S_N = NAND(D, EN)
    NAND1: nand_gate
        port map (
            A => D,
            B => EN,
            Y => S_N
        );

    -- R_N = NAND(NOT D, EN)
    NAND2: nand_gate
        port map (
            A => D_N,
            B => EN,
            Y => R_N
        );

    -- SR Latch
    SR1: sr_latch
        port map (
            S_N => S_N,
            R_N => R_N,
            Q   => Q,
            Q_N => Q_N
        );

end Structural;