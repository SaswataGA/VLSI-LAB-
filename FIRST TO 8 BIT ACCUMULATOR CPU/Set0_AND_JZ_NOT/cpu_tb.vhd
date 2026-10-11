library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

-- Self-checking testbench for the CPU: Set 0: LDI, ADD, AND, JZ, NOT
-- Runs the Appendix B program.  Cycle 0 = the RESET edge, cycle k = k-th executed instruction.
-- After every rising edge it compares ACC, Z, and the next PC with the Appendix B table.
-- Waveform signals to look at:  CLK, RESET, PC, ACC, Z  (exp_* are the expected values).

entity cpu_tb is
end cpu_tb;

architecture Behavioral of cpu_tb is
    component cpu
        Port ( CLK : in  STD_LOGIC;
               RESET : in  STD_LOGIC;
               Q : out STD_LOGIC_VECTOR (7 downto 0);
               Z : out STD_LOGIC;
               PC : out STD_LOGIC_VECTOR (3 downto 0) );
    end component;

    constant CLK_PERIOD : time := 10 ns;
    constant N_CYCLES   : integer := 8;     -- cycle 0 (RESET) + 7 instructions

    type byte_array is array (0 to N_CYCLES - 1) of STD_LOGIC_VECTOR (7 downto 0);
    type nib_array  is array (0 to N_CYCLES - 1) of STD_LOGIC_VECTOR (3 downto 0);
    type text_array is array (0 to N_CYCLES - 1) of string (1 to 21);

    -- Appendix B, Set 0: LDI, ADD, AND, JZ, NOT  (values AFTER each rising edge)
    constant T_ACC : byte_array := (
        x"00", x"A5", x"00", x"00",
        x"FF", x"0F", x"0F", x"10"
    );
    constant T_Z   : STD_LOGIC_VECTOR (0 to N_CYCLES - 1) := "10110000";
    constant T_PC  : nib_array := (
        x"0", x"1", x"2", x"5",
        x"6", x"7", x"8", x"9"
    );
    constant INSTR_TXT : text_array := (
        "RESET = 1            ", "LDI 0xA5             ",
        "AND 0x5A             ", "JZ 0x05  (taken)     ",
        "NOT                  ", "AND 0x0F             ",
        "JZ 0x00  (not taken) ", "ADD 0x01             "
    );

    signal CLK      : STD_LOGIC := '0';
    signal RESET    : STD_LOGIC := '1';
    signal ACC      : STD_LOGIC_VECTOR (7 downto 0);
    signal Z        : STD_LOGIC;
    signal PC       : STD_LOGIC_VECTOR (3 downto 0);
    signal exp_acc  : STD_LOGIC_VECTOR (7 downto 0) := x"00";
    signal exp_z    : STD_LOGIC := '1';
    signal exp_pc   : STD_LOGIC_VECTOR (3 downto 0) := x"0";
    signal cycle    : integer := 0;
    signal errors   : integer := 0;
    signal finished : boolean := false;

    function hex4 (v : STD_LOGIC_VECTOR (3 downto 0)) return character is
    begin
        case v is
            when "0000" => return '0';  when "0001" => return '1';
            when "0010" => return '2';  when "0011" => return '3';
            when "0100" => return '4';  when "0101" => return '5';
            when "0110" => return '6';  when "0111" => return '7';
            when "1000" => return '8';  when "1001" => return '9';
            when "1010" => return 'A';  when "1011" => return 'B';
            when "1100" => return 'C';  when "1101" => return 'D';
            when "1110" => return 'E';  when "1111" => return 'F';
            when others => return 'X';
        end case;
    end function;

    function hex8 (v : STD_LOGIC_VECTOR (7 downto 0)) return string is
    begin
        return hex4(v(7 downto 4)) & hex4(v(3 downto 0));
    end function;

    function bitc (b : STD_LOGIC) return character is
    begin
        if b = '1' then return '1';
        elsif b = '0' then return '0';
        else return 'X';
        end if;
    end function;
begin
    UUT: cpu port map ( CLK => CLK, RESET => RESET, Q => ACC, Z => Z, PC => PC );

    -- Clock: 10 ns period.  The first rising edge (the RESET edge) comes at 1 ns, so the
    -- undefined start-up values last only 1 ns.  Stops when the test is finished.
    clk_proc: process
    begin
        CLK <= '0'; wait for 1 ns;
        while not finished loop
            CLK <= '1'; wait for CLK_PERIOD / 2;
            CLK <= '0'; wait for CLK_PERIOD / 2;
        end loop;
        wait;
    end process;

    stim_proc: process
        variable ok  : boolean;
        variable bad : integer := 0;
    begin
        RESET <= '1';                                   -- RESET is applied for exactly one rising edge
        for c in 0 to N_CYCLES - 1 loop
            wait until rising_edge(CLK);
            wait for 2 ns;                              -- let the registers settle
            cycle   <= c;
            exp_acc <= T_ACC(c);
            exp_z   <= T_Z(c);
            exp_pc  <= T_PC(c);
            ok := true;
            if ACC /= T_ACC(c) then ok := false; end if;
            if Z   /= T_Z(c)   then ok := false; end if;
            if PC  /= T_PC(c)  then ok := false; end if;
            if not ok then bad := bad + 1; errors <= bad; end if;

            if ok then
                report "cycle " & integer'image(c) & " | " & INSTR_TXT(c) & " | ACC=0x" & hex8(ACC) &
                       " Z=" & bitc(Z) & " next PC=" & integer'image(to_integer(unsigned(PC))) & " | OK";
            else
                report "FAIL: cycle " & integer'image(c) & " | " & INSTR_TXT(c) & " | ACC=0x" & hex8(ACC) &
                       " Z=" & bitc(Z) & " next PC=" & integer'image(to_integer(unsigned(PC))) & " | expected ACC=0x" & hex8(T_ACC(c)) &
                       " Z=" & bitc(T_Z(c)) & " next PC=" & integer'image(to_integer(unsigned(T_PC(c)))) severity error;
            end if;

            if c = 0 then RESET <= '0'; end if;         -- release RESET after the first edge
        end loop;

        if bad = 0 then
            report "PASS: cpu testbench completed - all " & integer'image(N_CYCLES) & " cycles match Appendix B (Set 0: LDI, ADD, AND, JZ, NOT)" severity note;
        else
            report "FAIL: cpu testbench, mismatching cycles = " & integer'image(bad) severity error;
        end if;
        finished <= true;
        wait;
    end process;
end Behavioral;
