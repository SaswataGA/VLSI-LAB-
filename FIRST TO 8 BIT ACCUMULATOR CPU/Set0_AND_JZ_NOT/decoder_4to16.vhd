library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- 4-to-16 decoder built from NOT and AND gates.
-- Exactly one output Y(k) is '1': the one whose index k equals the value of A.
-- The control unit uses it to turn the 4-bit opcode into one line per instruction.

entity decoder_4to16 is
    Port ( A : in  STD_LOGIC_VECTOR (3 downto 0);
           Y : out STD_LOGIC_VECTOR (15 downto 0));
end decoder_4to16;

architecture Structural of decoder_4to16 is
    component not_gate
        Port ( A : in  STD_LOGIC; Y : out STD_LOGIC);
    end component;
    component and_gate
        Port ( A : in  STD_LOGIC; B : in  STD_LOGIC; Y : out STD_LOGIC);
    end component;
    signal a_n    : STD_LOGIC_VECTOR (3 downto 0);   -- inverted inputs
    signal hi, lo : STD_LOGIC_VECTOR (3 downto 0);   -- two 2-to-4 pre-decoders
begin
    GEN_INV: for i in 0 to 3 generate
        U_INV: not_gate port map ( A => A(i), Y => a_n(i) );
    end generate GEN_INV;

    -- hi(k) = 1 when A(3 downto 2) = k
    U_H0: and_gate port map ( A => a_n(3), B => a_n(2), Y => hi(0) );
    U_H1: and_gate port map ( A => a_n(3), B => A(2),   Y => hi(1) );
    U_H2: and_gate port map ( A => A(3),   B => a_n(2), Y => hi(2) );
    U_H3: and_gate port map ( A => A(3),   B => A(2),   Y => hi(3) );

    -- lo(k) = 1 when A(1 downto 0) = k
    U_L0: and_gate port map ( A => a_n(1), B => a_n(0), Y => lo(0) );
    U_L1: and_gate port map ( A => a_n(1), B => A(0),   Y => lo(1) );
    U_L2: and_gate port map ( A => A(1),   B => a_n(0), Y => lo(2) );
    U_L3: and_gate port map ( A => A(1),   B => A(0),   Y => lo(3) );

    -- Y(4*h + l) = hi(h) AND lo(l)
    GEN_OUT: for k in 0 to 15 generate
        U_OUT: and_gate port map ( A => hi(k / 4), B => lo(k mod 4), Y => Y(k) );
    end generate GEN_OUT;
end Structural;
