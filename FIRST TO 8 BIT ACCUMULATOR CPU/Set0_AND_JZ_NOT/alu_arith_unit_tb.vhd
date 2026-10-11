library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity alu_arith_unit_tb is
end alu_arith_unit_tb;

architecture Behavioral of alu_arith_unit_tb is
    component alu_arith_unit
        Port ( A : in  STD_LOGIC_VECTOR (7 downto 0); B : in  STD_LOGIC_VECTOR (7 downto 0);
               MODE : in  STD_LOGIC_VECTOR (1 downto 0);
               SUM : out STD_LOGIC_VECTOR (7 downto 0); COUT : out STD_LOGIC; OVF : out STD_LOGIC);
    end component;
    signal A_tb, B_tb, SUM_tb : STD_LOGIC_VECTOR (7 downto 0);
    signal MODE_tb : STD_LOGIC_VECTOR (1 downto 0);
    signal COUT_tb, OVF_tb : STD_LOGIC;

    -- Reference model: returns COUT & OVF & SUM as a 10-bit vector
    function ref (a, b : STD_LOGIC_VECTOR (7 downto 0); mode : STD_LOGIC_VECTOR (1 downto 0))
        return STD_LOGIC_VECTOR is
        variable full, sfull : integer;
        variable r : STD_LOGIC_VECTOR (7 downto 0);
        variable c, v : STD_LOGIC := '0';
        variable res10 : STD_LOGIC_VECTOR (9 downto 0);
    begin
        case mode is
            when "00"  => full := to_integer(unsigned(a)) + to_integer(unsigned(b));
                          sfull := to_integer(signed(a)) + to_integer(signed(b));
            when "01"  => full := to_integer(unsigned(a)) - to_integer(unsigned(b));
                          sfull := to_integer(signed(a)) - to_integer(signed(b));
            when "10"  => full := to_integer(unsigned(a)) + 1;
                          sfull := to_integer(signed(a)) + 1;
            when others=> full := to_integer(unsigned(a)) - 1;
                          sfull := to_integer(signed(a)) - 1;
        end case;
        r := std_logic_vector(to_unsigned(((full mod 256) + 256) mod 256, 8));
        if mode = "00" or mode = "10" then
            if full > 255 then c := '1'; else c := '0'; end if;
        else
            if full >= 0 then c := '1'; else c := '0'; end if;
        end if;
        if sfull > 127 or sfull < -128 then v := '1'; else v := '0'; end if;
        res10 := c & v & r;
        return res10;
    end function;

begin
    UUT: alu_arith_unit port map ( A => A_tb, B => B_tb, MODE => MODE_tb,
                                   SUM => SUM_tb, COUT => COUT_tb, OVF => OVF_tb );

    stim_proc: process
        variable errors : integer := 0;
        variable exp    : STD_LOGIC_VECTOR (9 downto 0);
        variable a_v, b_v : STD_LOGIC_VECTOR (7 downto 0);

        procedure check (a, b : in STD_LOGIC_VECTOR (7 downto 0); mode : in STD_LOGIC_VECTOR (1 downto 0)) is
        begin
            A_tb <= a; B_tb <= b; MODE_tb <= mode;
            wait for 10 ns;
            exp := ref(a, b, mode);
            if not (SUM_tb = exp(7 downto 0) and COUT_tb = exp(9) and OVF_tb = exp(8)) then
                report "FAIL: arith mode=" & integer'image(to_integer(unsigned(mode))) severity error;
                errors := errors + 1;
            end if;
        end procedure;
    begin
        -- Directed cases
        check(x"00", x"00", "00");   -- ADD 0+0
        check(x"7F", x"01", "00");   -- ADD signed overflow
        check(x"FF", x"01", "00");   -- ADD carry
        check(x"05", x"03", "01");   -- SUB no borrow
        check(x"03", x"05", "01");   -- SUB borrow
        check(x"80", x"01", "01");   -- SUB signed overflow
        check(x"FF", x"00", "10");   -- INC wrap
        check(x"7F", x"00", "10");   -- INC signed overflow
        check(x"00", x"00", "11");   -- DEC wrap
        check(x"80", x"00", "11");   -- DEC signed overflow

        -- Pseudo-random sweep across all 4 modes
        for m in 0 to 3 loop
            for k in 0 to 60 loop
                a_v := std_logic_vector(to_unsigned((k * 17 + 5) mod 256, 8));
                b_v := std_logic_vector(to_unsigned((k * 53 + 31 + 7*m) mod 256, 8));
                check(a_v, b_v, std_logic_vector(to_unsigned(m, 2)));
            end loop;
        end loop;

        if errors = 0 then
            report "PASS: alu_arith_unit testbench completed" severity note;
        else
            report "FAIL: alu_arith_unit testbench, errors=" & integer'image(errors) severity error;
        end if;
        wait;
    end process;
end Behavioral;
