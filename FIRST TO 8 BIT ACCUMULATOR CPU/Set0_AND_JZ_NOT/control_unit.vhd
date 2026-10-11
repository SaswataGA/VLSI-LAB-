library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Control unit for Set 0: LDI, ADD, AND, JZ, NOT.
-- Decodes OPCODE (= instr(11 downto 8)) and drives the load / select lines.
-- Opcodes that are not in this set (including 0000) produce no active line, so
-- they behave as NOP: only the PC advances.
--
--   ACC_LOAD / Z_LOAD : write ACC and update Z
--   PC_LOAD           : JZ taken (opcode JZ and Z = 1)
--   SEL_*             : one-hot select of the ALU result source

entity control_unit is
    Port ( OPCODE    : in  STD_LOGIC_VECTOR (3 downto 0);
           Z         : in  STD_LOGIC;
           ACC_LOAD  : out STD_LOGIC;
           Z_LOAD    : out STD_LOGIC;
           PC_LOAD   : out STD_LOGIC;
           SEL_B     : out STD_LOGIC;
           SEL_ARITH : out STD_LOGIC;
           SEL_AND   : out STD_LOGIC;
           SEL_NOT   : out STD_LOGIC );
end control_unit;

architecture Structural of control_unit is
    component decoder_4to16
        Port ( A : in  STD_LOGIC_VECTOR (3 downto 0);
               Y : out STD_LOGIC_VECTOR (15 downto 0));
    end component;
    component or_gate
        Port ( A : in  STD_LOGIC; B : in  STD_LOGIC; Y : out STD_LOGIC);
    end component;
    component and_gate
        Port ( A : in  STD_LOGIC; B : in  STD_LOGIC; Y : out STD_LOGIC);
    end component;
    signal dec          : STD_LOGIC_VECTOR (15 downto 0);   -- dec(k) = 1 when OPCODE = k
    signal acc_load_int : STD_LOGIC;
    signal acc_or       : STD_LOGIC_VECTOR (1 to 2);
begin
    U_DEC: decoder_4to16 port map ( A => OPCODE, Y => dec );

    -- dec(k) is the decoded line of opcode k;  the instruction name is in the comment
    SEL_B <= dec(1);         -- LDI
    SEL_ARITH <= dec(2);     -- ADD
    SEL_AND <= dec(4);       -- AND
    SEL_NOT <= dec(7);       -- NOT

    -- ACC is written by every instruction that produces a result (all but STA and JZ)
    U_ACC1: or_gate port map ( A => dec(1), B => dec(2), Y => acc_or(1) );   -- + ADD
    U_ACC2: or_gate port map ( A => acc_or(1), B => dec(4), Y => acc_or(2) );   -- + AND
    U_ACC3: or_gate port map ( A => acc_or(2), B => dec(7), Y => acc_load_int );   -- + NOT
    ACC_LOAD <= acc_load_int;
    Z_LOAD   <= acc_load_int;          -- Z follows every write of ACC; STA / JZ / NOP leave it alone

    -- JZ taken only when Z = 1
    U_JZ: and_gate port map ( A => dec(12), B => Z, Y => PC_LOAD );
end Structural;
