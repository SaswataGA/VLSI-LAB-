library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

-- Tests every ALU operation of Set 0: LDI, ADD, AND, JZ, NOT with 256 operand pairs plus corner cases.
-- The expected values are computed here with IEEE.NUMERIC_STD, independent of the gate-level design.

entity cpu_alu_tb is
end cpu_alu_tb;

architecture Behavioral of cpu_alu_tb is
    component cpu_alu
        Port ( A : in  STD_LOGIC_VECTOR (7 downto 0);
               B : in  STD_LOGIC_VECTOR (7 downto 0);
               SEL_B : in  STD_LOGIC;
               SEL_ARITH : in  STD_LOGIC;
               SEL_AND : in  STD_LOGIC;
               SEL_NOT : in  STD_LOGIC;
               RESULT : out STD_LOGIC_VECTOR (7 downto 0);
               ZERO : out STD_LOGIC );
    end component;

    signal A_tb      : STD_LOGIC_VECTOR (7 downto 0) := x"00";
    signal B_tb      : STD_LOGIC_VECTOR (7 downto 0) := x"00";
    signal SEL_B_tb : STD_LOGIC := '0';
    signal SEL_ARITH_tb : STD_LOGIC := '0';
    signal SEL_AND_tb : STD_LOGIC := '0';
    signal SEL_NOT_tb : STD_LOGIC := '0';
    signal RESULT_tb : STD_LOGIC_VECTOR (7 downto 0);
    signal ZERO_tb   : STD_LOGIC;

    constant NCORNER : integer := 10;
    type vec_array is array (0 to NCORNER - 1) of STD_LOGIC_VECTOR (7 downto 0);
    constant CORNER_A : vec_array := (x"00", x"FF", x"FF", x"80", x"7F", x"01", x"55", x"AA", x"80", x"00");
    constant CORNER_B : vec_array := (x"00", x"FF", x"01", x"80", x"01", x"FF", x"AA", x"55", x"01", x"01");
begin
    UUT: cpu_alu port map ( A => A_tb,
                              B => B_tb,
                              SEL_B => SEL_B_tb,
                              SEL_ARITH => SEL_ARITH_tb,
                              SEL_AND => SEL_AND_tb,
                              SEL_NOT => SEL_NOT_tb,
                              RESULT => RESULT_tb,
                              ZERO => ZERO_tb );

    stim_proc: process
        variable expected : STD_LOGIC_VECTOR (7 downto 0);
        variable errors   : integer := 0;

        procedure apply_operands (i : in integer) is
        begin
            A_tb <= std_logic_vector(to_unsigned(i, 8));
            B_tb <= std_logic_vector(to_unsigned((i * 37 + 11) mod 256, 8));
        end procedure;

        procedure check (name : in string) is
            variable z_exp : STD_LOGIC;
        begin
            if expected = x"00" then z_exp := '1'; else z_exp := '0'; end if;
            if RESULT_tb /= expected then
                errors := errors + 1;
                report "FAIL: " & name & " result, A=" & integer'image(to_integer(unsigned(A_tb))) &
                       " B=" & integer'image(to_integer(unsigned(B_tb))) severity error;
            end if;
            if ZERO_tb /= z_exp then
                errors := errors + 1;
                report "FAIL: " & name & " ZERO flag, A=" & integer'image(to_integer(unsigned(A_tb))) &
                       " B=" & integer'image(to_integer(unsigned(B_tb))) severity error;
            end if;
        end procedure;
    begin
        -- No select line active: the AND-OR plane must output 0x00
        A_tb <= x"A5"; B_tb <= x"3C"; 
        wait for 10 ns;
        expected := x"00";
        check("no select");

        -- ---------------------------------------------------------------- LDI
        SEL_B_tb <= '1';
        for i in 0 to 255 loop
            apply_operands(i);
            wait for 10 ns;
            expected := B_tb;
            check("LDI");
        end loop;
        for i in 0 to NCORNER - 1 loop
            A_tb <= CORNER_A(i); B_tb <= CORNER_B(i); 
            wait for 10 ns;
            expected := B_tb;
            check("LDI (corner)");
        end loop;
        SEL_B_tb <= '0'; SEL_ARITH_tb <= '0'; SEL_AND_tb <= '0'; SEL_NOT_tb <= '0';
        -- ---------------------------------------------------------------- ADD
        SEL_ARITH_tb <= '1';
        for i in 0 to 255 loop
            apply_operands(i);
            wait for 10 ns;
            expected := std_logic_vector(unsigned(A_tb) + unsigned(B_tb));
            check("ADD");
        end loop;
        for i in 0 to NCORNER - 1 loop
            A_tb <= CORNER_A(i); B_tb <= CORNER_B(i); 
            wait for 10 ns;
            expected := std_logic_vector(unsigned(A_tb) + unsigned(B_tb));
            check("ADD (corner)");
        end loop;
        SEL_B_tb <= '0'; SEL_ARITH_tb <= '0'; SEL_AND_tb <= '0'; SEL_NOT_tb <= '0';
        -- ---------------------------------------------------------------- AND
        SEL_AND_tb <= '1';
        for i in 0 to 255 loop
            apply_operands(i);
            wait for 10 ns;
            expected := A_tb and B_tb;
            check("AND");
        end loop;
        for i in 0 to NCORNER - 1 loop
            A_tb <= CORNER_A(i); B_tb <= CORNER_B(i); 
            wait for 10 ns;
            expected := A_tb and B_tb;
            check("AND (corner)");
        end loop;
        SEL_B_tb <= '0'; SEL_ARITH_tb <= '0'; SEL_AND_tb <= '0'; SEL_NOT_tb <= '0';
        -- ---------------------------------------------------------------- NOT
        SEL_NOT_tb <= '1';
        for i in 0 to 255 loop
            apply_operands(i);
            wait for 10 ns;
            expected := not A_tb;
            check("NOT");
        end loop;
        for i in 0 to NCORNER - 1 loop
            A_tb <= CORNER_A(i); B_tb <= CORNER_B(i); 
            wait for 10 ns;
            expected := not A_tb;
            check("NOT (corner)");
        end loop;
        SEL_B_tb <= '0'; SEL_ARITH_tb <= '0'; SEL_AND_tb <= '0'; SEL_NOT_tb <= '0';

        if errors = 0 then
            report "PASS: cpu_alu testbench completed" severity note;
        else
            report "FAIL: cpu_alu testbench, errors = " & integer'image(errors) severity error;
        end if;
        wait;
    end process;
end Behavioral;
