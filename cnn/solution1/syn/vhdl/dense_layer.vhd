-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2019.1
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity dense_layer is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    prediction_address0 : OUT STD_LOGIC_VECTOR (3 downto 0);
    prediction_ce0 : OUT STD_LOGIC;
    prediction_we0 : OUT STD_LOGIC;
    prediction_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    flat_array_address0 : OUT STD_LOGIC_VECTOR (7 downto 0);
    flat_array_ce0 : OUT STD_LOGIC;
    flat_array_q0 : IN STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of dense_layer is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (13 downto 0) := "00000000000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (13 downto 0) := "00000000000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (13 downto 0) := "00000000000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (13 downto 0) := "00000000001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (13 downto 0) := "00000000010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (13 downto 0) := "00000000100000";
    constant ap_ST_fsm_state7 : STD_LOGIC_VECTOR (13 downto 0) := "00000001000000";
    constant ap_ST_fsm_state8 : STD_LOGIC_VECTOR (13 downto 0) := "00000010000000";
    constant ap_ST_fsm_state9 : STD_LOGIC_VECTOR (13 downto 0) := "00000100000000";
    constant ap_ST_fsm_state10 : STD_LOGIC_VECTOR (13 downto 0) := "00001000000000";
    constant ap_ST_fsm_state11 : STD_LOGIC_VECTOR (13 downto 0) := "00010000000000";
    constant ap_ST_fsm_state12 : STD_LOGIC_VECTOR (13 downto 0) := "00100000000000";
    constant ap_ST_fsm_state13 : STD_LOGIC_VECTOR (13 downto 0) := "01000000000000";
    constant ap_ST_fsm_state14 : STD_LOGIC_VECTOR (13 downto 0) := "10000000000000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv32_A : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001010";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv32_9 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001001";
    constant ap_const_lv32_B : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001011";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv8_0 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    constant ap_const_lv32_D : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001101";
    constant ap_const_lv32_C : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001100";
    constant ap_const_lv4_1 : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    constant ap_const_lv4_9 : STD_LOGIC_VECTOR (3 downto 0) := "1001";
    constant ap_const_lv4_A : STD_LOGIC_VECTOR (3 downto 0) := "1010";
    constant ap_const_lv8_A0 : STD_LOGIC_VECTOR (7 downto 0) := "10100000";
    constant ap_const_lv8_1 : STD_LOGIC_VECTOR (7 downto 0) := "00000001";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (13 downto 0) := "00000000000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal dense_weights_address0 : STD_LOGIC_VECTOR (10 downto 0);
    signal dense_weights_ce0 : STD_LOGIC;
    signal dense_weights_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal dense_biases_address0 : STD_LOGIC_VECTOR (3 downto 0);
    signal dense_biases_ce0 : STD_LOGIC;
    signal dense_biases_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal dense_array_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state8 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state8 : signal is "none";
    signal ap_CS_fsm_state11 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state11 : signal is "none";
    signal add_ln12_fu_250_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal d_fu_273_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal d_reg_389 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal zext_ln20_fu_279_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln20_reg_394 : STD_LOGIC_VECTOR (63 downto 0);
    signal icmp_ln14_fu_267_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal zext_ln18_fu_283_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal zext_ln18_reg_400 : STD_LOGIC_VECTOR (11 downto 0);
    signal f_fu_293_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal f_reg_408 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal icmp_ln18_fu_287_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal grp_fu_217_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal i_fu_350_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal i_reg_436 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state7 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state7 : signal is "none";
    signal icmp_ln15_fu_344_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_state9 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state9 : signal is "none";
    signal j_fu_367_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal j_reg_454 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state10 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state10 : signal is "none";
    signal zext_ln22_fu_373_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln22_reg_459 : STD_LOGIC_VECTOR (63 downto 0);
    signal icmp_ln20_fu_361_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal grp_fu_238_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_2_i_reg_469 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state12 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state12 : signal is "none";
    signal dense_array_address0 : STD_LOGIC_VECTOR (3 downto 0);
    signal dense_array_ce0 : STD_LOGIC;
    signal dense_array_we0 : STD_LOGIC;
    signal dense_array_d0 : STD_LOGIC_VECTOR (31 downto 0);
    signal phi_ln12_reg_138 : STD_LOGIC_VECTOR (3 downto 0);
    signal icmp_ln12_fu_261_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal d_0_reg_149 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal w_sum_0_reg_160 : STD_LOGIC_VECTOR (31 downto 0);
    signal f_0_reg_172 : STD_LOGIC_VECTOR (7 downto 0);
    signal sum_0_i_reg_183 : STD_LOGIC_VECTOR (31 downto 0);
    signal i_0_i_reg_195 : STD_LOGIC_VECTOR (3 downto 0);
    signal j_0_i_reg_206 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state14 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state14 : signal is "none";
    signal zext_ln12_fu_256_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln20_4_fu_339_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln20_1_fu_299_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln17_fu_356_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal grp_fu_232_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_217_p0 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_217_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_9_fu_225_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state13 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state13 : signal is "none";
    signal tmp_s_fu_304_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_2_fu_316_p3 : STD_LOGIC_VECTOR (8 downto 0);
    signal zext_ln20_3_fu_324_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal zext_ln20_2_fu_312_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal add_ln20_fu_328_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal add_ln20_1_fu_334_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (13 downto 0);

    component cnn_fadd_32ns_32ncud IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        din0 : IN STD_LOGIC_VECTOR (31 downto 0);
        din1 : IN STD_LOGIC_VECTOR (31 downto 0);
        dout : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;


    component cnn_fmul_32ns_32ng8j IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        din0 : IN STD_LOGIC_VECTOR (31 downto 0);
        din1 : IN STD_LOGIC_VECTOR (31 downto 0);
        dout : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;


    component cnn_fdiv_32ns_32nhbi IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        din0 : IN STD_LOGIC_VECTOR (31 downto 0);
        din1 : IN STD_LOGIC_VECTOR (31 downto 0);
        ce : IN STD_LOGIC;
        dout : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;


    component cnn_fexp_32ns_32nibs IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        din0 : IN STD_LOGIC_VECTOR (31 downto 0);
        din1 : IN STD_LOGIC_VECTOR (31 downto 0);
        ce : IN STD_LOGIC;
        dout : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;


    component dense_layer_densedEe IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (10 downto 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;


    component dense_layer_denseeOg IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (3 downto 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;


    component dense_layer_densefYi IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (3 downto 0);
        ce0 : IN STD_LOGIC;
        we0 : IN STD_LOGIC;
        d0 : IN STD_LOGIC_VECTOR (31 downto 0);
        q0 : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;



begin
    dense_weights_U : component dense_layer_densedEe
    generic map (
        DataWidth => 32,
        AddressRange => 1600,
        AddressWidth => 11)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => dense_weights_address0,
        ce0 => dense_weights_ce0,
        q0 => dense_weights_q0);

    dense_biases_U : component dense_layer_denseeOg
    generic map (
        DataWidth => 32,
        AddressRange => 10,
        AddressWidth => 4)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => dense_biases_address0,
        ce0 => dense_biases_ce0,
        q0 => dense_biases_q0);

    dense_array_U : component dense_layer_densefYi
    generic map (
        DataWidth => 32,
        AddressRange => 10,
        AddressWidth => 4)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => dense_array_address0,
        ce0 => dense_array_ce0,
        we0 => dense_array_we0,
        d0 => dense_array_d0,
        q0 => dense_array_q0);

    cnn_fadd_32ns_32ncud_U33 : component cnn_fadd_32ns_32ncud
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        dout_WIDTH => 32)
    port map (
        din0 => grp_fu_217_p0,
        din1 => grp_fu_217_p1,
        dout => grp_fu_217_p2);

    cnn_fmul_32ns_32ng8j_U34 : component cnn_fmul_32ns_32ng8j
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        dout_WIDTH => 32)
    port map (
        din0 => dense_weights_q0,
        din1 => flat_array_q0,
        dout => tmp_9_fu_225_p2);

    cnn_fdiv_32ns_32nhbi_U35 : component cnn_fdiv_32ns_32nhbi
    generic map (
        ID => 1,
        NUM_STAGE => 2,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        dout_WIDTH => 32)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => tmp_2_i_reg_469,
        din1 => sum_0_i_reg_183,
        ce => ap_const_logic_1,
        dout => grp_fu_232_p2);

    cnn_fexp_32ns_32nibs_U36 : component cnn_fexp_32ns_32nibs
    generic map (
        ID => 1,
        NUM_STAGE => 2,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        dout_WIDTH => 32)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => ap_const_lv32_0,
        din1 => dense_array_q0,
        ce => ap_const_logic_1,
        dout => grp_fu_238_p2);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    d_0_reg_149_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state2) and (icmp_ln12_fu_261_p2 = ap_const_lv1_1))) then 
                d_0_reg_149 <= ap_const_lv4_0;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
                d_0_reg_149 <= d_reg_389;
            end if; 
        end if;
    end process;

    f_0_reg_172_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln14_fu_267_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                f_0_reg_172 <= ap_const_lv8_0;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
                f_0_reg_172 <= f_reg_408;
            end if; 
        end if;
    end process;

    i_0_i_reg_195_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln14_fu_267_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                i_0_i_reg_195 <= ap_const_lv4_0;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
                i_0_i_reg_195 <= i_reg_436;
            end if; 
        end if;
    end process;

    j_0_i_reg_206_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state7) and (icmp_ln15_fu_344_p2 = ap_const_lv1_1))) then 
                j_0_i_reg_206 <= ap_const_lv4_0;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state14)) then 
                j_0_i_reg_206 <= j_reg_454;
            end if; 
        end if;
    end process;

    phi_ln12_reg_138_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln12_fu_261_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                phi_ln12_reg_138 <= add_ln12_fu_250_p2;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                phi_ln12_reg_138 <= ap_const_lv4_0;
            end if; 
        end if;
    end process;

    sum_0_i_reg_183_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln14_fu_267_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                sum_0_i_reg_183 <= ap_const_lv32_0;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
                sum_0_i_reg_183 <= grp_fu_217_p2;
            end if; 
        end if;
    end process;

    w_sum_0_reg_160_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln14_fu_267_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                w_sum_0_reg_160 <= ap_const_lv32_0;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
                w_sum_0_reg_160 <= grp_fu_217_p2;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                d_reg_389 <= d_fu_273_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then
                f_reg_408 <= f_fu_293_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state7)) then
                i_reg_436 <= i_fu_350_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state10)) then
                j_reg_454 <= j_fu_367_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state12)) then
                tmp_2_i_reg_469 <= grp_fu_238_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln14_fu_267_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                    zext_ln18_reg_400(3 downto 0) <= zext_ln18_fu_283_p1(3 downto 0);
                    zext_ln20_reg_394(3 downto 0) <= zext_ln20_fu_279_p1(3 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln20_fu_361_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state10))) then
                    zext_ln22_reg_459(3 downto 0) <= zext_ln22_fu_373_p1(3 downto 0);
            end if;
        end if;
    end process;
    zext_ln20_reg_394(63 downto 4) <= "000000000000000000000000000000000000000000000000000000000000";
    zext_ln18_reg_400(11 downto 4) <= "00000000";
    zext_ln22_reg_459(63 downto 4) <= "000000000000000000000000000000000000000000000000000000000000";

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, ap_CS_fsm_state3, icmp_ln14_fu_267_p2, ap_CS_fsm_state4, icmp_ln18_fu_287_p2, ap_CS_fsm_state7, icmp_ln15_fu_344_p2, ap_CS_fsm_state10, icmp_ln20_fu_361_p2, icmp_ln12_fu_261_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state2) and (icmp_ln12_fu_261_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state3;
                else
                    ap_NS_fsm <= ap_ST_fsm_state2;
                end if;
            when ap_ST_fsm_state3 => 
                if (((icmp_ln14_fu_267_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                    ap_NS_fsm <= ap_ST_fsm_state7;
                else
                    ap_NS_fsm <= ap_ST_fsm_state4;
                end if;
            when ap_ST_fsm_state4 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state4) and (icmp_ln18_fu_287_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state6;
                else
                    ap_NS_fsm <= ap_ST_fsm_state5;
                end if;
            when ap_ST_fsm_state5 => 
                ap_NS_fsm <= ap_ST_fsm_state4;
            when ap_ST_fsm_state6 => 
                ap_NS_fsm <= ap_ST_fsm_state3;
            when ap_ST_fsm_state7 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state7) and (icmp_ln15_fu_344_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state10;
                else
                    ap_NS_fsm <= ap_ST_fsm_state8;
                end if;
            when ap_ST_fsm_state8 => 
                ap_NS_fsm <= ap_ST_fsm_state9;
            when ap_ST_fsm_state9 => 
                ap_NS_fsm <= ap_ST_fsm_state7;
            when ap_ST_fsm_state10 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state10) and (icmp_ln20_fu_361_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state11;
                end if;
            when ap_ST_fsm_state11 => 
                ap_NS_fsm <= ap_ST_fsm_state12;
            when ap_ST_fsm_state12 => 
                ap_NS_fsm <= ap_ST_fsm_state13;
            when ap_ST_fsm_state13 => 
                ap_NS_fsm <= ap_ST_fsm_state14;
            when ap_ST_fsm_state14 => 
                ap_NS_fsm <= ap_ST_fsm_state10;
            when others =>  
                ap_NS_fsm <= "XXXXXXXXXXXXXX";
        end case;
    end process;
    add_ln12_fu_250_p2 <= std_logic_vector(unsigned(phi_ln12_reg_138) + unsigned(ap_const_lv4_1));
    add_ln20_1_fu_334_p2 <= std_logic_vector(unsigned(add_ln20_fu_328_p2) + unsigned(zext_ln18_reg_400));
    add_ln20_fu_328_p2 <= std_logic_vector(unsigned(zext_ln20_3_fu_324_p1) + unsigned(zext_ln20_2_fu_312_p1));
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state10 <= ap_CS_fsm(9);
    ap_CS_fsm_state11 <= ap_CS_fsm(10);
    ap_CS_fsm_state12 <= ap_CS_fsm(11);
    ap_CS_fsm_state13 <= ap_CS_fsm(12);
    ap_CS_fsm_state14 <= ap_CS_fsm(13);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);
    ap_CS_fsm_state6 <= ap_CS_fsm(5);
    ap_CS_fsm_state7 <= ap_CS_fsm(6);
    ap_CS_fsm_state8 <= ap_CS_fsm(7);
    ap_CS_fsm_state9 <= ap_CS_fsm(8);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state10, icmp_ln20_fu_361_p2)
    begin
        if ((((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)) or ((ap_const_logic_1 = ap_CS_fsm_state10) and (icmp_ln20_fu_361_p2 = ap_const_lv1_1)))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state10, icmp_ln20_fu_361_p2)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state10) and (icmp_ln20_fu_361_p2 = ap_const_lv1_1))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    d_fu_273_p2 <= std_logic_vector(unsigned(d_0_reg_149) + unsigned(ap_const_lv4_1));

    dense_array_address0_assign_proc : process(ap_CS_fsm_state2, zext_ln20_reg_394, ap_CS_fsm_state7, ap_CS_fsm_state10, zext_ln22_fu_373_p1, ap_CS_fsm_state6, zext_ln12_fu_256_p1, zext_ln17_fu_356_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state10)) then 
            dense_array_address0 <= zext_ln22_fu_373_p1(4 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            dense_array_address0 <= zext_ln17_fu_356_p1(4 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            dense_array_address0 <= zext_ln20_reg_394(4 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            dense_array_address0 <= zext_ln12_fu_256_p1(4 - 1 downto 0);
        else 
            dense_array_address0 <= "XXXX";
        end if; 
    end process;


    dense_array_ce0_assign_proc : process(ap_CS_fsm_state2, ap_CS_fsm_state7, ap_CS_fsm_state10, ap_CS_fsm_state6)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state2) or (ap_const_logic_1 = ap_CS_fsm_state6) or (ap_const_logic_1 = ap_CS_fsm_state10) or (ap_const_logic_1 = ap_CS_fsm_state7))) then 
            dense_array_ce0 <= ap_const_logic_1;
        else 
            dense_array_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    dense_array_d0_assign_proc : process(ap_CS_fsm_state2, grp_fu_217_p2, ap_CS_fsm_state6)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            dense_array_d0 <= grp_fu_217_p2;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            dense_array_d0 <= ap_const_lv32_0;
        else 
            dense_array_d0 <= "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        end if; 
    end process;


    dense_array_we0_assign_proc : process(ap_CS_fsm_state2, ap_CS_fsm_state6)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state2) or (ap_const_logic_1 = ap_CS_fsm_state6))) then 
            dense_array_we0 <= ap_const_logic_1;
        else 
            dense_array_we0 <= ap_const_logic_0;
        end if; 
    end process;

    dense_biases_address0 <= zext_ln20_reg_394(4 - 1 downto 0);

    dense_biases_ce0_assign_proc : process(ap_CS_fsm_state4)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            dense_biases_ce0 <= ap_const_logic_1;
        else 
            dense_biases_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    dense_weights_address0 <= zext_ln20_4_fu_339_p1(11 - 1 downto 0);

    dense_weights_ce0_assign_proc : process(ap_CS_fsm_state4)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            dense_weights_ce0 <= ap_const_logic_1;
        else 
            dense_weights_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    f_fu_293_p2 <= std_logic_vector(unsigned(f_0_reg_172) + unsigned(ap_const_lv8_1));
    flat_array_address0 <= zext_ln20_1_fu_299_p1(8 - 1 downto 0);

    flat_array_ce0_assign_proc : process(ap_CS_fsm_state4)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            flat_array_ce0 <= ap_const_logic_1;
        else 
            flat_array_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    grp_fu_217_p0_assign_proc : process(ap_CS_fsm_state5, ap_CS_fsm_state9, ap_CS_fsm_state6, w_sum_0_reg_160, sum_0_i_reg_183)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
            grp_fu_217_p0 <= sum_0_i_reg_183;
        elsif (((ap_const_logic_1 = ap_CS_fsm_state6) or (ap_const_logic_1 = ap_CS_fsm_state5))) then 
            grp_fu_217_p0 <= w_sum_0_reg_160;
        else 
            grp_fu_217_p0 <= "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        end if; 
    end process;


    grp_fu_217_p1_assign_proc : process(dense_biases_q0, ap_CS_fsm_state5, ap_CS_fsm_state9, grp_fu_238_p2, ap_CS_fsm_state6, tmp_9_fu_225_p2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
            grp_fu_217_p1 <= grp_fu_238_p2;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            grp_fu_217_p1 <= dense_biases_q0;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            grp_fu_217_p1 <= tmp_9_fu_225_p2;
        else 
            grp_fu_217_p1 <= "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        end if; 
    end process;

    i_fu_350_p2 <= std_logic_vector(unsigned(i_0_i_reg_195) + unsigned(ap_const_lv4_1));
    icmp_ln12_fu_261_p2 <= "1" when (phi_ln12_reg_138 = ap_const_lv4_9) else "0";
    icmp_ln14_fu_267_p2 <= "1" when (d_0_reg_149 = ap_const_lv4_A) else "0";
    icmp_ln15_fu_344_p2 <= "1" when (i_0_i_reg_195 = ap_const_lv4_A) else "0";
    icmp_ln18_fu_287_p2 <= "1" when (f_0_reg_172 = ap_const_lv8_A0) else "0";
    icmp_ln20_fu_361_p2 <= "1" when (j_0_i_reg_206 = ap_const_lv4_A) else "0";
    j_fu_367_p2 <= std_logic_vector(unsigned(j_0_i_reg_206) + unsigned(ap_const_lv4_1));
    prediction_address0 <= zext_ln22_reg_459(4 - 1 downto 0);

    prediction_ce0_assign_proc : process(ap_CS_fsm_state14)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state14)) then 
            prediction_ce0 <= ap_const_logic_1;
        else 
            prediction_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    prediction_d0 <= grp_fu_232_p2;

    prediction_we0_assign_proc : process(ap_CS_fsm_state14)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state14)) then 
            prediction_we0 <= ap_const_logic_1;
        else 
            prediction_we0 <= ap_const_logic_0;
        end if; 
    end process;

    tmp_2_fu_316_p3 <= (f_0_reg_172 & ap_const_lv1_0);
    tmp_s_fu_304_p3 <= (f_0_reg_172 & ap_const_lv3_0);
    zext_ln12_fu_256_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(phi_ln12_reg_138),64));
    zext_ln17_fu_356_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_0_i_reg_195),64));
    zext_ln18_fu_283_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(d_0_reg_149),12));
    zext_ln20_1_fu_299_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(f_0_reg_172),64));
    zext_ln20_2_fu_312_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_s_fu_304_p3),12));
    zext_ln20_3_fu_324_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_2_fu_316_p3),12));
    zext_ln20_4_fu_339_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln20_1_fu_334_p2),64));
    zext_ln20_fu_279_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(d_0_reg_149),64));
    zext_ln22_fu_373_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(j_0_i_reg_206),64));
end behav;