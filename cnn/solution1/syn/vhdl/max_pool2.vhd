-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2019.1
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity max_pool2 is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    feature_0_V_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
    feature_0_V_ce0 : OUT STD_LOGIC;
    feature_0_V_q0 : IN STD_LOGIC_VECTOR (14 downto 0);
    feature_1_V_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
    feature_1_V_ce0 : OUT STD_LOGIC;
    feature_1_V_q0 : IN STD_LOGIC_VECTOR (14 downto 0);
    feature_2_V_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
    feature_2_V_ce0 : OUT STD_LOGIC;
    feature_2_V_q0 : IN STD_LOGIC_VECTOR (14 downto 0);
    feature_3_V_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
    feature_3_V_ce0 : OUT STD_LOGIC;
    feature_3_V_q0 : IN STD_LOGIC_VECTOR (14 downto 0);
    feature_4_V_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
    feature_4_V_ce0 : OUT STD_LOGIC;
    feature_4_V_q0 : IN STD_LOGIC_VECTOR (14 downto 0);
    feature_5_V_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
    feature_5_V_ce0 : OUT STD_LOGIC;
    feature_5_V_q0 : IN STD_LOGIC_VECTOR (14 downto 0);
    feature_6_V_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
    feature_6_V_ce0 : OUT STD_LOGIC;
    feature_6_V_q0 : IN STD_LOGIC_VECTOR (14 downto 0);
    feature_7_V_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
    feature_7_V_ce0 : OUT STD_LOGIC;
    feature_7_V_q0 : IN STD_LOGIC_VECTOR (14 downto 0);
    feature_8_V_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
    feature_8_V_ce0 : OUT STD_LOGIC;
    feature_8_V_q0 : IN STD_LOGIC_VECTOR (14 downto 0);
    feature_9_V_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
    feature_9_V_ce0 : OUT STD_LOGIC;
    feature_9_V_q0 : IN STD_LOGIC_VECTOR (14 downto 0);
    feature_V_offset : IN STD_LOGIC_VECTOR (3 downto 0);
    pool_feature_V_address0 : OUT STD_LOGIC_VECTOR (7 downto 0);
    pool_feature_V_ce0 : OUT STD_LOGIC;
    pool_feature_V_we0 : OUT STD_LOGIC;
    pool_feature_V_d0 : OUT STD_LOGIC_VECTOR (13 downto 0);
    b_V : IN STD_LOGIC_VECTOR (9 downto 0) );
end;


architecture behav of max_pool2 is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (5 downto 0) := "000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (5 downto 0) := "000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (5 downto 0) := "000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (5 downto 0) := "001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (5 downto 0) := "010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (5 downto 0) := "100000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv15_0 : STD_LOGIC_VECTOR (14 downto 0) := "000000000000000";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv4_2 : STD_LOGIC_VECTOR (3 downto 0) := "0010";
    constant ap_const_lv2_2 : STD_LOGIC_VECTOR (1 downto 0) := "10";
    constant ap_const_lv2_1 : STD_LOGIC_VECTOR (1 downto 0) := "01";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv14_0 : STD_LOGIC_VECTOR (13 downto 0) := "00000000000000";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (5 downto 0) := "000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal b_V_cast_fu_295_p1 : STD_LOGIC_VECTOR (14 downto 0);
    signal b_V_cast_reg_517 : STD_LOGIC_VECTOR (14 downto 0);
    signal sext_ln703_fu_299_p1 : STD_LOGIC_VECTOR (13 downto 0);
    signal sext_ln703_reg_522 : STD_LOGIC_VECTOR (13 downto 0);
    signal trunc_ln26_1_reg_530 : STD_LOGIC_VECTOR (1 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal tmp_5_fu_303_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal r_fu_329_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal tmp_6_fu_321_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal pr_fu_345_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal pr_reg_546 : STD_LOGIC_VECTOR (1 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal zext_ln20_1_fu_365_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal zext_ln20_1_reg_551 : STD_LOGIC_VECTOR (7 downto 0);
    signal icmp_ln19_fu_339_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal c_fu_421_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal pc_fu_437_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal pc_reg_564 : STD_LOGIC_VECTOR (1 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal icmp_ln20_fu_431_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln22_fu_503_p3 : STD_LOGIC_VECTOR (14 downto 0);
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal r_0_reg_225 : STD_LOGIC_VECTOR (3 downto 0);
    signal c_0_reg_237 : STD_LOGIC_VECTOR (3 downto 0);
    signal p_Val2_s_reg_249 : STD_LOGIC_VECTOR (14 downto 0);
    signal pr_0_reg_261 : STD_LOGIC_VECTOR (1 downto 0);
    signal pool_1_reg_272 : STD_LOGIC_VECTOR (14 downto 0);
    signal pc_0_reg_284 : STD_LOGIC_VECTOR (1 downto 0);
    signal zext_ln203_fu_387_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln1494_1_fu_458_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal b_V_cast_fu_295_p0 : STD_LOGIC_VECTOR (9 downto 0);
    signal sext_ln703_fu_299_p0 : STD_LOGIC_VECTOR (9 downto 0);
    signal zext_ln19_fu_335_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal add_ln22_fu_351_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_1_fu_357_p3 : STD_LOGIC_VECTOR (6 downto 0);
    signal trunc_ln26_3_fu_369_p4 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_fu_379_p4 : STD_LOGIC_VECTOR (7 downto 0);
    signal trunc_ln703_fu_392_p1 : STD_LOGIC_VECTOR (13 downto 0);
    signal add_ln703_fu_396_p2 : STD_LOGIC_VECTOR (14 downto 0);
    signal icmp_ln1494_1_fu_406_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal add_ln1494_fu_401_p2 : STD_LOGIC_VECTOR (13 downto 0);
    signal zext_ln20_fu_427_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal add_ln22_1_fu_443_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal zext_ln1494_fu_449_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal add_ln1494_1_fu_453_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal pool_V_fu_472_p12 : STD_LOGIC_VECTOR (14 downto 0);
    signal icmp_ln1494_fu_497_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (5 downto 0);

    component cnn_mux_104_15_1_1 IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        din2_WIDTH : INTEGER;
        din3_WIDTH : INTEGER;
        din4_WIDTH : INTEGER;
        din5_WIDTH : INTEGER;
        din6_WIDTH : INTEGER;
        din7_WIDTH : INTEGER;
        din8_WIDTH : INTEGER;
        din9_WIDTH : INTEGER;
        din10_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        din0 : IN STD_LOGIC_VECTOR (14 downto 0);
        din1 : IN STD_LOGIC_VECTOR (14 downto 0);
        din2 : IN STD_LOGIC_VECTOR (14 downto 0);
        din3 : IN STD_LOGIC_VECTOR (14 downto 0);
        din4 : IN STD_LOGIC_VECTOR (14 downto 0);
        din5 : IN STD_LOGIC_VECTOR (14 downto 0);
        din6 : IN STD_LOGIC_VECTOR (14 downto 0);
        din7 : IN STD_LOGIC_VECTOR (14 downto 0);
        din8 : IN STD_LOGIC_VECTOR (14 downto 0);
        din9 : IN STD_LOGIC_VECTOR (14 downto 0);
        din10 : IN STD_LOGIC_VECTOR (3 downto 0);
        dout : OUT STD_LOGIC_VECTOR (14 downto 0) );
    end component;



begin
    cnn_mux_104_15_1_1_U21 : component cnn_mux_104_15_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 15,
        din1_WIDTH => 15,
        din2_WIDTH => 15,
        din3_WIDTH => 15,
        din4_WIDTH => 15,
        din5_WIDTH => 15,
        din6_WIDTH => 15,
        din7_WIDTH => 15,
        din8_WIDTH => 15,
        din9_WIDTH => 15,
        din10_WIDTH => 4,
        dout_WIDTH => 15)
    port map (
        din0 => feature_0_V_q0,
        din1 => feature_1_V_q0,
        din2 => feature_2_V_q0,
        din3 => feature_3_V_q0,
        din4 => feature_4_V_q0,
        din5 => feature_5_V_q0,
        din6 => feature_6_V_q0,
        din7 => feature_7_V_q0,
        din8 => feature_8_V_q0,
        din9 => feature_9_V_q0,
        din10 => feature_V_offset,
        dout => pool_V_fu_472_p12);





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


    c_0_reg_237_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state2) and (tmp_5_fu_303_p3 = ap_const_lv1_0))) then 
                c_0_reg_237 <= ap_const_lv4_0;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state4) and (icmp_ln19_fu_339_p2 = ap_const_lv1_1))) then 
                c_0_reg_237 <= c_fu_421_p2;
            end if; 
        end if;
    end process;

    p_Val2_s_reg_249_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state3) and (tmp_6_fu_321_p3 = ap_const_lv1_0))) then 
                p_Val2_s_reg_249 <= ap_const_lv15_0;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state5) and (icmp_ln20_fu_431_p2 = ap_const_lv1_1))) then 
                p_Val2_s_reg_249 <= pool_1_reg_272;
            end if; 
        end if;
    end process;

    pc_0_reg_284_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
                pc_0_reg_284 <= pc_reg_564;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state4) and (icmp_ln19_fu_339_p2 = ap_const_lv1_0))) then 
                pc_0_reg_284 <= ap_const_lv2_0;
            end if; 
        end if;
    end process;

    pool_1_reg_272_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
                pool_1_reg_272 <= select_ln22_fu_503_p3;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state4) and (icmp_ln19_fu_339_p2 = ap_const_lv1_0))) then 
                pool_1_reg_272 <= p_Val2_s_reg_249;
            end if; 
        end if;
    end process;

    pr_0_reg_261_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state3) and (tmp_6_fu_321_p3 = ap_const_lv1_0))) then 
                pr_0_reg_261 <= ap_const_lv2_0;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state5) and (icmp_ln20_fu_431_p2 = ap_const_lv1_1))) then 
                pr_0_reg_261 <= pr_reg_546;
            end if; 
        end if;
    end process;

    r_0_reg_225_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state3) and (tmp_6_fu_321_p3 = ap_const_lv1_1))) then 
                r_0_reg_225 <= r_fu_329_p2;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                r_0_reg_225 <= ap_const_lv4_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                b_V_cast_reg_517 <= b_V_cast_fu_295_p1;
                sext_ln703_reg_522 <= sext_ln703_fu_299_p1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state5)) then
                pc_reg_564 <= pc_fu_437_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then
                pr_reg_546 <= pr_fu_345_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state2) and (tmp_5_fu_303_p3 = ap_const_lv1_0))) then
                trunc_ln26_1_reg_530 <= r_0_reg_225(2 downto 1);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state4) and (icmp_ln19_fu_339_p2 = ap_const_lv1_0))) then
                    zext_ln20_1_reg_551(6 downto 3) <= zext_ln20_1_fu_365_p1(6 downto 3);
            end if;
        end if;
    end process;
    zext_ln20_1_reg_551(2 downto 0) <= "000";
    zext_ln20_1_reg_551(7) <= '0';

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, tmp_5_fu_303_p3, ap_CS_fsm_state3, tmp_6_fu_321_p3, ap_CS_fsm_state4, icmp_ln19_fu_339_p2, ap_CS_fsm_state5, icmp_ln20_fu_431_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state2) and (tmp_5_fu_303_p3 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state3) and (tmp_6_fu_321_p3 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state4;
                end if;
            when ap_ST_fsm_state4 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state4) and (icmp_ln19_fu_339_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state3;
                else
                    ap_NS_fsm <= ap_ST_fsm_state5;
                end if;
            when ap_ST_fsm_state5 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state5) and (icmp_ln20_fu_431_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state4;
                else
                    ap_NS_fsm <= ap_ST_fsm_state6;
                end if;
            when ap_ST_fsm_state6 => 
                ap_NS_fsm <= ap_ST_fsm_state5;
            when others =>  
                ap_NS_fsm <= "XXXXXX";
        end case;
    end process;
    add_ln1494_1_fu_453_p2 <= std_logic_vector(unsigned(zext_ln20_1_reg_551) + unsigned(zext_ln1494_fu_449_p1));
    add_ln1494_fu_401_p2 <= std_logic_vector(signed(sext_ln703_reg_522) + signed(trunc_ln703_fu_392_p1));
    add_ln22_1_fu_443_p2 <= std_logic_vector(unsigned(zext_ln20_fu_427_p1) + unsigned(c_0_reg_237));
    add_ln22_fu_351_p2 <= std_logic_vector(unsigned(r_0_reg_225) + unsigned(zext_ln19_fu_335_p1));
    add_ln703_fu_396_p2 <= std_logic_vector(unsigned(p_Val2_s_reg_249) + unsigned(b_V_cast_reg_517));
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);
    ap_CS_fsm_state6 <= ap_CS_fsm(5);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state2, tmp_5_fu_303_p3)
    begin
        if ((((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)) or ((ap_const_logic_1 = ap_CS_fsm_state2) and (tmp_5_fu_303_p3 = ap_const_lv1_1)))) then 
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


    ap_ready_assign_proc : process(ap_CS_fsm_state2, tmp_5_fu_303_p3)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state2) and (tmp_5_fu_303_p3 = ap_const_lv1_1))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    b_V_cast_fu_295_p0 <= b_V;
        b_V_cast_fu_295_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(b_V_cast_fu_295_p0),15));

    c_fu_421_p2 <= std_logic_vector(unsigned(ap_const_lv4_2) + unsigned(c_0_reg_237));
    feature_0_V_address0 <= zext_ln1494_1_fu_458_p1(6 - 1 downto 0);

    feature_0_V_ce0_assign_proc : process(ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            feature_0_V_ce0 <= ap_const_logic_1;
        else 
            feature_0_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    feature_1_V_address0 <= zext_ln1494_1_fu_458_p1(6 - 1 downto 0);

    feature_1_V_ce0_assign_proc : process(ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            feature_1_V_ce0 <= ap_const_logic_1;
        else 
            feature_1_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    feature_2_V_address0 <= zext_ln1494_1_fu_458_p1(6 - 1 downto 0);

    feature_2_V_ce0_assign_proc : process(ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            feature_2_V_ce0 <= ap_const_logic_1;
        else 
            feature_2_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    feature_3_V_address0 <= zext_ln1494_1_fu_458_p1(6 - 1 downto 0);

    feature_3_V_ce0_assign_proc : process(ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            feature_3_V_ce0 <= ap_const_logic_1;
        else 
            feature_3_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    feature_4_V_address0 <= zext_ln1494_1_fu_458_p1(6 - 1 downto 0);

    feature_4_V_ce0_assign_proc : process(ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            feature_4_V_ce0 <= ap_const_logic_1;
        else 
            feature_4_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    feature_5_V_address0 <= zext_ln1494_1_fu_458_p1(6 - 1 downto 0);

    feature_5_V_ce0_assign_proc : process(ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            feature_5_V_ce0 <= ap_const_logic_1;
        else 
            feature_5_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    feature_6_V_address0 <= zext_ln1494_1_fu_458_p1(6 - 1 downto 0);

    feature_6_V_ce0_assign_proc : process(ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            feature_6_V_ce0 <= ap_const_logic_1;
        else 
            feature_6_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    feature_7_V_address0 <= zext_ln1494_1_fu_458_p1(6 - 1 downto 0);

    feature_7_V_ce0_assign_proc : process(ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            feature_7_V_ce0 <= ap_const_logic_1;
        else 
            feature_7_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    feature_8_V_address0 <= zext_ln1494_1_fu_458_p1(6 - 1 downto 0);

    feature_8_V_ce0_assign_proc : process(ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            feature_8_V_ce0 <= ap_const_logic_1;
        else 
            feature_8_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    feature_9_V_address0 <= zext_ln1494_1_fu_458_p1(6 - 1 downto 0);

    feature_9_V_ce0_assign_proc : process(ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            feature_9_V_ce0 <= ap_const_logic_1;
        else 
            feature_9_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    icmp_ln1494_1_fu_406_p2 <= "1" when (signed(add_ln703_fu_396_p2) > signed(ap_const_lv15_0)) else "0";
    icmp_ln1494_fu_497_p2 <= "1" when (signed(pool_V_fu_472_p12) > signed(pool_1_reg_272)) else "0";
    icmp_ln19_fu_339_p2 <= "1" when (pr_0_reg_261 = ap_const_lv2_2) else "0";
    icmp_ln20_fu_431_p2 <= "1" when (pc_0_reg_284 = ap_const_lv2_2) else "0";
    pc_fu_437_p2 <= std_logic_vector(unsigned(pc_0_reg_284) + unsigned(ap_const_lv2_1));
    pool_feature_V_address0 <= zext_ln203_fu_387_p1(8 - 1 downto 0);

    pool_feature_V_ce0_assign_proc : process(ap_CS_fsm_state4)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            pool_feature_V_ce0 <= ap_const_logic_1;
        else 
            pool_feature_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    pool_feature_V_d0 <= 
        add_ln1494_fu_401_p2 when (icmp_ln1494_1_fu_406_p2(0) = '1') else 
        ap_const_lv14_0;

    pool_feature_V_we0_assign_proc : process(ap_CS_fsm_state4, icmp_ln19_fu_339_p2)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state4) and (icmp_ln19_fu_339_p2 = ap_const_lv1_1))) then 
            pool_feature_V_we0 <= ap_const_logic_1;
        else 
            pool_feature_V_we0 <= ap_const_logic_0;
        end if; 
    end process;

    pr_fu_345_p2 <= std_logic_vector(unsigned(pr_0_reg_261) + unsigned(ap_const_lv2_1));
    r_fu_329_p2 <= std_logic_vector(unsigned(r_0_reg_225) + unsigned(ap_const_lv4_2));
    select_ln22_fu_503_p3 <= 
        pool_V_fu_472_p12 when (icmp_ln1494_fu_497_p2(0) = '1') else 
        pool_1_reg_272;
    sext_ln703_fu_299_p0 <= b_V;
        sext_ln703_fu_299_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(sext_ln703_fu_299_p0),14));

    tmp_1_fu_357_p3 <= (add_ln22_fu_351_p2 & ap_const_lv3_0);
    tmp_5_fu_303_p3 <= r_0_reg_225(3 downto 3);
    tmp_6_fu_321_p3 <= c_0_reg_237(3 downto 3);
    tmp_fu_379_p4 <= ((feature_V_offset & trunc_ln26_1_reg_530) & trunc_ln26_3_fu_369_p4);
    trunc_ln26_3_fu_369_p4 <= c_0_reg_237(2 downto 1);
    trunc_ln703_fu_392_p1 <= p_Val2_s_reg_249(14 - 1 downto 0);
    zext_ln1494_1_fu_458_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln1494_1_fu_453_p2),64));
    zext_ln1494_fu_449_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln22_1_fu_443_p2),8));
    zext_ln19_fu_335_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(pr_0_reg_261),4));
    zext_ln203_fu_387_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_fu_379_p4),64));
    zext_ln20_1_fu_365_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_1_fu_357_p3),8));
    zext_ln20_fu_427_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(pc_0_reg_284),4));
end behav;
