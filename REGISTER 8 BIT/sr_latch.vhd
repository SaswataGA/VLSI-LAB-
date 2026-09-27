library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity sr_latch is
    Port (
        S_N : in  STD_LOGIC;
        R_N : in  STD_LOGIC;
        Q   : out STD_LOGIC;
        Q_N : out STD_LOGIC
    );
end sr_latch;

architecture Structural of sr_latch is

    component nand_gate
        Port (
            A : in  STD_LOGIC;
            B : in  STD_LOGIC;
            Y : out STD_LOGIC
        );
    end component;

    signal q_int  : STD_LOGIC;
    signal qn_int : STD_LOGIC;

begin

    NAND1: nand_gate
        port map (
            A => S_N,
            B => qn_int,
            Y => q_int
        );

    NAND2: nand_gate
        port map (
            A => R_N,
            B => q_int,
            Y => qn_int
        );

    Q   <= q_int;
    Q_N <= qn_int;

end Structural;