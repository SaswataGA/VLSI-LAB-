library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Program ROM: 16 locations x 12 bits, written as a constant array and read
-- combinationally with the program counter (no clock).
-- Word format:  DATA(11 downto 8) = opcode,  DATA(7 downto 0) = operand.
-- Unused locations hold 0x000 (NOP).
--
-- Set 0: LDI, ADD, AND, JZ, NOT  -  Appendix B test program

entity program_rom is
    Port ( ADDR : in  STD_LOGIC_VECTOR (3 downto 0);
           DATA : out STD_LOGIC_VECTOR (11 downto 0));
end program_rom;

architecture Behavioral of program_rom is
    type rom_type is array (0 to 15) of STD_LOGIC_VECTOR (11 downto 0);

    constant ROM : rom_type := (
         0 => x"1A5",   --  0: LDI 0xA5
         1 => x"45A",   --  1: AND 0x5A
         2 => x"C05",   --  2: JZ 0x05
         3 => x"201",   --  3: ADD 0x01
         4 => x"201",   --  4: ADD 0x01
         5 => x"700",   --  5: NOT
         6 => x"40F",   --  6: AND 0x0F
         7 => x"C00",   --  7: JZ 0x00
         8 => x"201",   --  8: ADD 0x01
        others => x"000"      -- unused locations: NOP
    );

    -- 4-bit std_logic_vector -> integer (an undefined bit counts as 0)
    function to_index (v : STD_LOGIC_VECTOR (3 downto 0)) return integer is
        variable r : integer := 0;
    begin
        for i in 3 downto 0 loop
            r := r * 2;
            if v(i) = '1' then
                r := r + 1;
            end if;
        end loop;
        return r;
    end function;
begin
    DATA <= ROM(to_index(ADDR));
end Behavioral;
