// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "soft_max.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic soft_max::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic soft_max::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<36> soft_max::ap_ST_fsm_state1 = "1";
const sc_lv<36> soft_max::ap_ST_fsm_state2 = "10";
const sc_lv<36> soft_max::ap_ST_fsm_state3 = "100";
const sc_lv<36> soft_max::ap_ST_fsm_state4 = "1000";
const sc_lv<36> soft_max::ap_ST_fsm_state5 = "10000";
const sc_lv<36> soft_max::ap_ST_fsm_state6 = "100000";
const sc_lv<36> soft_max::ap_ST_fsm_state7 = "1000000";
const sc_lv<36> soft_max::ap_ST_fsm_state8 = "10000000";
const sc_lv<36> soft_max::ap_ST_fsm_state9 = "100000000";
const sc_lv<36> soft_max::ap_ST_fsm_state10 = "1000000000";
const sc_lv<36> soft_max::ap_ST_fsm_state11 = "10000000000";
const sc_lv<36> soft_max::ap_ST_fsm_state12 = "100000000000";
const sc_lv<36> soft_max::ap_ST_fsm_state13 = "1000000000000";
const sc_lv<36> soft_max::ap_ST_fsm_state14 = "10000000000000";
const sc_lv<36> soft_max::ap_ST_fsm_state15 = "100000000000000";
const sc_lv<36> soft_max::ap_ST_fsm_state16 = "1000000000000000";
const sc_lv<36> soft_max::ap_ST_fsm_state17 = "10000000000000000";
const sc_lv<36> soft_max::ap_ST_fsm_state18 = "100000000000000000";
const sc_lv<36> soft_max::ap_ST_fsm_state19 = "1000000000000000000";
const sc_lv<36> soft_max::ap_ST_fsm_state20 = "10000000000000000000";
const sc_lv<36> soft_max::ap_ST_fsm_state21 = "100000000000000000000";
const sc_lv<36> soft_max::ap_ST_fsm_state22 = "1000000000000000000000";
const sc_lv<36> soft_max::ap_ST_fsm_state23 = "10000000000000000000000";
const sc_lv<36> soft_max::ap_ST_fsm_state24 = "100000000000000000000000";
const sc_lv<36> soft_max::ap_ST_fsm_state25 = "1000000000000000000000000";
const sc_lv<36> soft_max::ap_ST_fsm_state26 = "10000000000000000000000000";
const sc_lv<36> soft_max::ap_ST_fsm_state27 = "100000000000000000000000000";
const sc_lv<36> soft_max::ap_ST_fsm_state28 = "1000000000000000000000000000";
const sc_lv<36> soft_max::ap_ST_fsm_state29 = "10000000000000000000000000000";
const sc_lv<36> soft_max::ap_ST_fsm_state30 = "100000000000000000000000000000";
const sc_lv<36> soft_max::ap_ST_fsm_state31 = "1000000000000000000000000000000";
const sc_lv<36> soft_max::ap_ST_fsm_state32 = "10000000000000000000000000000000";
const sc_lv<36> soft_max::ap_ST_fsm_state33 = "100000000000000000000000000000000";
const sc_lv<36> soft_max::ap_ST_fsm_state34 = "1000000000000000000000000000000000";
const sc_lv<36> soft_max::ap_ST_fsm_state35 = "10000000000000000000000000000000000";
const sc_lv<36> soft_max::ap_ST_fsm_state36 = "100000000000000000000000000000000000";
const sc_lv<32> soft_max::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> soft_max::ap_const_lv32_2 = "10";
const sc_lv<32> soft_max::ap_const_lv32_F = "1111";
const sc_lv<32> soft_max::ap_const_lv32_9 = "1001";
const sc_lv<32> soft_max::ap_const_lv32_16 = "10110";
const sc_lv<32> soft_max::ap_const_lv32_1 = "1";
const sc_lv<1> soft_max::ap_const_lv1_0 = "0";
const sc_lv<32> soft_max::ap_const_lv32_D = "1101";
const sc_lv<32> soft_max::ap_const_lv32_E = "1110";
const sc_lv<32> soft_max::ap_const_lv32_20 = "100000";
const sc_lv<32> soft_max::ap_const_lv32_22 = "100010";
const sc_lv<4> soft_max::ap_const_lv4_0 = "0000";
const sc_lv<32> soft_max::ap_const_lv32_23 = "100011";
const sc_lv<1> soft_max::ap_const_lv1_1 = "1";
const sc_lv<32> soft_max::ap_const_lv32_A = "1010";
const sc_lv<32> soft_max::ap_const_lv32_17 = "10111";
const sc_lv<32> soft_max::ap_const_lv32_21 = "100001";
const sc_lv<4> soft_max::ap_const_lv4_A = "1010";
const sc_lv<4> soft_max::ap_const_lv4_1 = "1";
const sc_lv<32> soft_max::ap_const_lv32_3F = "111111";
const sc_lv<32> soft_max::ap_const_lv32_34 = "110100";
const sc_lv<32> soft_max::ap_const_lv32_3E = "111110";
const sc_lv<63> soft_max::ap_const_lv63_0 = "000000000000000000000000000000000000000000000000000000000000000";
const sc_lv<12> soft_max::ap_const_lv12_433 = "10000110011";
const sc_lv<12> soft_max::ap_const_lv12_8 = "1000";
const sc_lv<12> soft_max::ap_const_lv12_FF8 = "111111111000";
const sc_lv<54> soft_max::ap_const_lv54_0 = "000000000000000000000000000000000000000000000000000000";
const sc_lv<12> soft_max::ap_const_lv12_36 = "110110";
const sc_lv<12> soft_max::ap_const_lv12_E = "1110";
const sc_lv<32> soft_max::ap_const_lv32_1F = "11111";
const sc_lv<14> soft_max::ap_const_lv14_3FFF = "11111111111111";
const sc_lv<14> soft_max::ap_const_lv14_0 = "00000000000000";
const bool soft_max::ap_const_boolean_1 = true;

soft_max::soft_max(sc_module_name name) : sc_module(name), mVcdFile(0) {
    cnn_fadd_32ns_32ndEe_U44 = new cnn_fadd_32ns_32ndEe<1,4,32,32,32>("cnn_fadd_32ns_32ndEe_U44");
    cnn_fadd_32ns_32ndEe_U44->clk(ap_clk);
    cnn_fadd_32ns_32ndEe_U44->reset(ap_rst);
    cnn_fadd_32ns_32ndEe_U44->din0(sum_0_reg_90);
    cnn_fadd_32ns_32ndEe_U44->din1(reg_148);
    cnn_fadd_32ns_32ndEe_U44->ce(ap_var_for_const0);
    cnn_fadd_32ns_32ndEe_U44->dout(grp_fu_124_p2);
    cnn_fdiv_32ns_32neOg_U45 = new cnn_fdiv_32ns_32neOg<1,10,32,32,32>("cnn_fdiv_32ns_32neOg_U45");
    cnn_fdiv_32ns_32neOg_U45->clk(ap_clk);
    cnn_fdiv_32ns_32neOg_U45->reset(ap_rst);
    cnn_fdiv_32ns_32neOg_U45->din0(reg_148);
    cnn_fdiv_32ns_32neOg_U45->din1(sum_0_reg_90);
    cnn_fdiv_32ns_32neOg_U45->ce(ap_var_for_const0);
    cnn_fdiv_32ns_32neOg_U45->dout(grp_fu_129_p2);
    cnn_fpext_32ns_64bkb_U46 = new cnn_fpext_32ns_64bkb<1,2,32,64>("cnn_fpext_32ns_64bkb_U46");
    cnn_fpext_32ns_64bkb_U46->clk(ap_clk);
    cnn_fpext_32ns_64bkb_U46->reset(ap_rst);
    cnn_fpext_32ns_64bkb_U46->din0(v_assign_reg_497);
    cnn_fpext_32ns_64bkb_U46->ce(ap_var_for_const0);
    cnn_fpext_32ns_64bkb_U46->dout(grp_fu_134_p1);
    cnn_fexp_32ns_32nfYi_U47 = new cnn_fexp_32ns_32nfYi<1,8,32,32,32>("cnn_fexp_32ns_32nfYi_U47");
    cnn_fexp_32ns_32nfYi_U47->clk(ap_clk);
    cnn_fexp_32ns_32nfYi_U47->reset(ap_rst);
    cnn_fexp_32ns_32nfYi_U47->din0(ap_var_for_const1);
    cnn_fexp_32ns_32nfYi_U47->din1(dense_array_q0);
    cnn_fexp_32ns_32nfYi_U47->ce(ap_var_for_const0);
    cnn_fexp_32ns_32nfYi_U47->dout(grp_fu_137_p2);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_F2_fu_228_p2);
    sensitive << ( zext_ln461_fu_214_p1 );

    SC_METHOD(thread_add_ln581_fu_240_p2);
    sensitive << ( F2_fu_228_p2 );

    SC_METHOD(thread_and_ln581_fu_370_p2);
    sensitive << ( icmp_ln581_reg_519 );
    sensitive << ( xor_ln582_fu_364_p2 );

    SC_METHOD(thread_and_ln582_fu_355_p2);
    sensitive << ( icmp_ln582_reg_532 );
    sensitive << ( xor_ln571_fu_350_p2 );

    SC_METHOD(thread_and_ln585_1_fu_387_p2);
    sensitive << ( icmp_ln585_fu_297_p2 );
    sensitive << ( and_ln581_fu_370_p2 );

    SC_METHOD(thread_and_ln585_fu_381_p2);
    sensitive << ( and_ln581_fu_370_p2 );
    sensitive << ( xor_ln585_fu_375_p2 );

    SC_METHOD(thread_and_ln603_fu_404_p2);
    sensitive << ( icmp_ln603_fu_302_p2 );
    sensitive << ( xor_ln581_fu_398_p2 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state10);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state11);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state14);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state15);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state16);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state23);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state24);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state33);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state34);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state35);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state36);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state15 );
    sensitive << ( icmp_ln20_fu_171_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state15 );
    sensitive << ( icmp_ln20_fu_171_p2 );

    SC_METHOD(thread_ashr_ln586_fu_311_p2);
    sensitive << ( man_V_2_fu_283_p3 );
    sensitive << ( zext_ln586_fu_307_p1 );

    SC_METHOD(thread_bitcast_ln696_fu_321_p1);
    sensitive << ( v_assign_reg_497 );

    SC_METHOD(thread_dense_array_address0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state15 );
    sensitive << ( zext_ln22_fu_183_p1 );
    sensitive << ( zext_ln17_fu_166_p1 );

    SC_METHOD(thread_dense_array_ce0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state15 );

    SC_METHOD(thread_exp_tmp_V_fu_204_p4);
    sensitive << ( ireg_V_fu_188_p1 );

    SC_METHOD(thread_i_fu_160_p2);
    sensitive << ( i_0_reg_102 );

    SC_METHOD(thread_icmp_ln15_fu_154_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i_0_reg_102 );

    SC_METHOD(thread_icmp_ln20_fu_171_p2);
    sensitive << ( ap_CS_fsm_state15 );
    sensitive << ( j_0_reg_113 );

    SC_METHOD(thread_icmp_ln571_fu_222_p2);
    sensitive << ( ap_CS_fsm_state35 );
    sensitive << ( trunc_ln556_fu_192_p1 );

    SC_METHOD(thread_icmp_ln581_fu_234_p2);
    sensitive << ( ap_CS_fsm_state35 );
    sensitive << ( F2_fu_228_p2 );

    SC_METHOD(thread_icmp_ln582_fu_260_p2);
    sensitive << ( ap_CS_fsm_state35 );
    sensitive << ( F2_fu_228_p2 );

    SC_METHOD(thread_icmp_ln585_fu_297_p2);
    sensitive << ( sh_amt_reg_525 );
    sensitive << ( ap_CS_fsm_state36 );

    SC_METHOD(thread_icmp_ln603_fu_302_p2);
    sensitive << ( sh_amt_reg_525 );
    sensitive << ( ap_CS_fsm_state36 );

    SC_METHOD(thread_ireg_V_fu_188_p1);
    sensitive << ( grp_fu_134_p1 );

    SC_METHOD(thread_j_fu_177_p2);
    sensitive << ( j_0_reg_113 );

    SC_METHOD(thread_man_V_1_fu_277_p2);
    sensitive << ( p_Result_1_fu_273_p1 );

    SC_METHOD(thread_man_V_2_fu_283_p3);
    sensitive << ( p_Result_s_reg_503 );
    sensitive << ( p_Result_1_fu_273_p1 );
    sensitive << ( man_V_1_fu_277_p2 );

    SC_METHOD(thread_or_ln581_fu_393_p2);
    sensitive << ( icmp_ln581_reg_519 );
    sensitive << ( or_ln582_fu_360_p2 );

    SC_METHOD(thread_or_ln582_fu_360_p2);
    sensitive << ( icmp_ln571_reg_513 );
    sensitive << ( icmp_ln582_reg_532 );

    SC_METHOD(thread_or_ln603_1_fu_432_p2);
    sensitive << ( and_ln585_fu_381_p2 );
    sensitive << ( and_ln582_fu_355_p2 );

    SC_METHOD(thread_or_ln603_2_fu_446_p2);
    sensitive << ( or_ln603_fu_418_p2 );
    sensitive << ( or_ln603_1_fu_432_p2 );

    SC_METHOD(thread_or_ln603_fu_418_p2);
    sensitive << ( and_ln603_fu_404_p2 );
    sensitive << ( and_ln585_1_fu_387_p2 );

    SC_METHOD(thread_p_Result_1_fu_273_p1);
    sensitive << ( tmp_1_fu_266_p3 );

    SC_METHOD(thread_pred_V_address0);
    sensitive << ( zext_ln22_reg_487 );
    sensitive << ( ap_CS_fsm_state36 );

    SC_METHOD(thread_pred_V_ce0);
    sensitive << ( ap_CS_fsm_state36 );

    SC_METHOD(thread_pred_V_d0);
    sensitive << ( ap_CS_fsm_state36 );
    sensitive << ( or_ln603_2_fu_446_p2 );
    sensitive << ( select_ln603_2_fu_438_p3 );

    SC_METHOD(thread_pred_V_we0);
    sensitive << ( ap_CS_fsm_state36 );

    SC_METHOD(thread_select_ln588_fu_332_p3);
    sensitive << ( tmp_4_fu_324_p3 );

    SC_METHOD(thread_select_ln603_1_fu_424_p3);
    sensitive << ( trunc_ln583_fu_293_p1 );
    sensitive << ( and_ln585_fu_381_p2 );
    sensitive << ( select_ln588_fu_332_p3 );

    SC_METHOD(thread_select_ln603_2_fu_438_p3);
    sensitive << ( or_ln603_fu_418_p2 );
    sensitive << ( select_ln603_fu_410_p3 );
    sensitive << ( select_ln603_1_fu_424_p3 );

    SC_METHOD(thread_select_ln603_fu_410_p3);
    sensitive << ( and_ln603_fu_404_p2 );
    sensitive << ( shl_ln604_fu_344_p2 );
    sensitive << ( trunc_ln586_fu_317_p1 );

    SC_METHOD(thread_sext_ln581_fu_290_p1);
    sensitive << ( sh_amt_reg_525 );

    SC_METHOD(thread_sext_ln581cast_fu_340_p1);
    sensitive << ( sext_ln581_fu_290_p1 );

    SC_METHOD(thread_sh_amt_fu_252_p3);
    sensitive << ( icmp_ln581_fu_234_p2 );
    sensitive << ( add_ln581_fu_240_p2 );
    sensitive << ( sub_ln581_fu_246_p2 );

    SC_METHOD(thread_shl_ln604_fu_344_p2);
    sensitive << ( trunc_ln583_fu_293_p1 );
    sensitive << ( sext_ln581cast_fu_340_p1 );

    SC_METHOD(thread_sub_ln581_fu_246_p2);
    sensitive << ( F2_fu_228_p2 );

    SC_METHOD(thread_tmp_1_fu_266_p3);
    sensitive << ( trunc_ln565_reg_508 );

    SC_METHOD(thread_tmp_4_fu_324_p3);
    sensitive << ( bitcast_ln696_fu_321_p1 );

    SC_METHOD(thread_trunc_ln556_fu_192_p1);
    sensitive << ( ireg_V_fu_188_p1 );

    SC_METHOD(thread_trunc_ln565_fu_218_p1);
    sensitive << ( ireg_V_fu_188_p1 );

    SC_METHOD(thread_trunc_ln583_fu_293_p1);
    sensitive << ( man_V_2_fu_283_p3 );

    SC_METHOD(thread_trunc_ln586_fu_317_p1);
    sensitive << ( ashr_ln586_fu_311_p2 );

    SC_METHOD(thread_xor_ln571_fu_350_p2);
    sensitive << ( icmp_ln571_reg_513 );

    SC_METHOD(thread_xor_ln581_fu_398_p2);
    sensitive << ( or_ln581_fu_393_p2 );

    SC_METHOD(thread_xor_ln582_fu_364_p2);
    sensitive << ( or_ln582_fu_360_p2 );

    SC_METHOD(thread_xor_ln585_fu_375_p2);
    sensitive << ( icmp_ln585_fu_297_p2 );

    SC_METHOD(thread_zext_ln17_fu_166_p1);
    sensitive << ( i_0_reg_102 );

    SC_METHOD(thread_zext_ln22_fu_183_p1);
    sensitive << ( j_0_reg_113 );

    SC_METHOD(thread_zext_ln461_fu_214_p1);
    sensitive << ( exp_tmp_V_fu_204_p4 );

    SC_METHOD(thread_zext_ln586_fu_307_p1);
    sensitive << ( sext_ln581_fu_290_p1 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln15_fu_154_p2 );
    sensitive << ( ap_CS_fsm_state15 );
    sensitive << ( icmp_ln20_fu_171_p2 );

    SC_THREAD(thread_ap_var_for_const0);

    SC_THREAD(thread_ap_var_for_const1);

    ap_CS_fsm = "000000000000000000000000000000000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "soft_max_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, dense_array_address0, "(port)dense_array_address0");
    sc_trace(mVcdFile, dense_array_ce0, "(port)dense_array_ce0");
    sc_trace(mVcdFile, dense_array_q0, "(port)dense_array_q0");
    sc_trace(mVcdFile, pred_V_address0, "(port)pred_V_address0");
    sc_trace(mVcdFile, pred_V_ce0, "(port)pred_V_ce0");
    sc_trace(mVcdFile, pred_V_we0, "(port)pred_V_we0");
    sc_trace(mVcdFile, pred_V_d0, "(port)pred_V_d0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, ap_CS_fsm_state16, "ap_CS_fsm_state16");
    sc_trace(mVcdFile, grp_fu_137_p2, "grp_fu_137_p2");
    sc_trace(mVcdFile, reg_148, "reg_148");
    sc_trace(mVcdFile, ap_CS_fsm_state10, "ap_CS_fsm_state10");
    sc_trace(mVcdFile, ap_CS_fsm_state23, "ap_CS_fsm_state23");
    sc_trace(mVcdFile, i_fu_160_p2, "i_fu_160_p2");
    sc_trace(mVcdFile, i_reg_464, "i_reg_464");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, icmp_ln15_fu_154_p2, "icmp_ln15_fu_154_p2");
    sc_trace(mVcdFile, grp_fu_124_p2, "grp_fu_124_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state14, "ap_CS_fsm_state14");
    sc_trace(mVcdFile, j_fu_177_p2, "j_fu_177_p2");
    sc_trace(mVcdFile, j_reg_482, "j_reg_482");
    sc_trace(mVcdFile, ap_CS_fsm_state15, "ap_CS_fsm_state15");
    sc_trace(mVcdFile, zext_ln22_fu_183_p1, "zext_ln22_fu_183_p1");
    sc_trace(mVcdFile, zext_ln22_reg_487, "zext_ln22_reg_487");
    sc_trace(mVcdFile, icmp_ln20_fu_171_p2, "icmp_ln20_fu_171_p2");
    sc_trace(mVcdFile, grp_fu_129_p2, "grp_fu_129_p2");
    sc_trace(mVcdFile, v_assign_reg_497, "v_assign_reg_497");
    sc_trace(mVcdFile, ap_CS_fsm_state33, "ap_CS_fsm_state33");
    sc_trace(mVcdFile, p_Result_s_reg_503, "p_Result_s_reg_503");
    sc_trace(mVcdFile, ap_CS_fsm_state35, "ap_CS_fsm_state35");
    sc_trace(mVcdFile, trunc_ln565_fu_218_p1, "trunc_ln565_fu_218_p1");
    sc_trace(mVcdFile, trunc_ln565_reg_508, "trunc_ln565_reg_508");
    sc_trace(mVcdFile, icmp_ln571_fu_222_p2, "icmp_ln571_fu_222_p2");
    sc_trace(mVcdFile, icmp_ln571_reg_513, "icmp_ln571_reg_513");
    sc_trace(mVcdFile, icmp_ln581_fu_234_p2, "icmp_ln581_fu_234_p2");
    sc_trace(mVcdFile, icmp_ln581_reg_519, "icmp_ln581_reg_519");
    sc_trace(mVcdFile, sh_amt_fu_252_p3, "sh_amt_fu_252_p3");
    sc_trace(mVcdFile, sh_amt_reg_525, "sh_amt_reg_525");
    sc_trace(mVcdFile, icmp_ln582_fu_260_p2, "icmp_ln582_fu_260_p2");
    sc_trace(mVcdFile, icmp_ln582_reg_532, "icmp_ln582_reg_532");
    sc_trace(mVcdFile, sum_0_reg_90, "sum_0_reg_90");
    sc_trace(mVcdFile, i_0_reg_102, "i_0_reg_102");
    sc_trace(mVcdFile, j_0_reg_113, "j_0_reg_113");
    sc_trace(mVcdFile, ap_CS_fsm_state36, "ap_CS_fsm_state36");
    sc_trace(mVcdFile, zext_ln17_fu_166_p1, "zext_ln17_fu_166_p1");
    sc_trace(mVcdFile, ap_CS_fsm_state11, "ap_CS_fsm_state11");
    sc_trace(mVcdFile, ap_CS_fsm_state24, "ap_CS_fsm_state24");
    sc_trace(mVcdFile, ap_CS_fsm_state34, "ap_CS_fsm_state34");
    sc_trace(mVcdFile, grp_fu_134_p1, "grp_fu_134_p1");
    sc_trace(mVcdFile, ireg_V_fu_188_p1, "ireg_V_fu_188_p1");
    sc_trace(mVcdFile, exp_tmp_V_fu_204_p4, "exp_tmp_V_fu_204_p4");
    sc_trace(mVcdFile, trunc_ln556_fu_192_p1, "trunc_ln556_fu_192_p1");
    sc_trace(mVcdFile, zext_ln461_fu_214_p1, "zext_ln461_fu_214_p1");
    sc_trace(mVcdFile, F2_fu_228_p2, "F2_fu_228_p2");
    sc_trace(mVcdFile, add_ln581_fu_240_p2, "add_ln581_fu_240_p2");
    sc_trace(mVcdFile, sub_ln581_fu_246_p2, "sub_ln581_fu_246_p2");
    sc_trace(mVcdFile, tmp_1_fu_266_p3, "tmp_1_fu_266_p3");
    sc_trace(mVcdFile, p_Result_1_fu_273_p1, "p_Result_1_fu_273_p1");
    sc_trace(mVcdFile, man_V_1_fu_277_p2, "man_V_1_fu_277_p2");
    sc_trace(mVcdFile, man_V_2_fu_283_p3, "man_V_2_fu_283_p3");
    sc_trace(mVcdFile, sext_ln581_fu_290_p1, "sext_ln581_fu_290_p1");
    sc_trace(mVcdFile, zext_ln586_fu_307_p1, "zext_ln586_fu_307_p1");
    sc_trace(mVcdFile, ashr_ln586_fu_311_p2, "ashr_ln586_fu_311_p2");
    sc_trace(mVcdFile, bitcast_ln696_fu_321_p1, "bitcast_ln696_fu_321_p1");
    sc_trace(mVcdFile, tmp_4_fu_324_p3, "tmp_4_fu_324_p3");
    sc_trace(mVcdFile, trunc_ln583_fu_293_p1, "trunc_ln583_fu_293_p1");
    sc_trace(mVcdFile, sext_ln581cast_fu_340_p1, "sext_ln581cast_fu_340_p1");
    sc_trace(mVcdFile, xor_ln571_fu_350_p2, "xor_ln571_fu_350_p2");
    sc_trace(mVcdFile, or_ln582_fu_360_p2, "or_ln582_fu_360_p2");
    sc_trace(mVcdFile, xor_ln582_fu_364_p2, "xor_ln582_fu_364_p2");
    sc_trace(mVcdFile, icmp_ln585_fu_297_p2, "icmp_ln585_fu_297_p2");
    sc_trace(mVcdFile, and_ln581_fu_370_p2, "and_ln581_fu_370_p2");
    sc_trace(mVcdFile, xor_ln585_fu_375_p2, "xor_ln585_fu_375_p2");
    sc_trace(mVcdFile, or_ln581_fu_393_p2, "or_ln581_fu_393_p2");
    sc_trace(mVcdFile, icmp_ln603_fu_302_p2, "icmp_ln603_fu_302_p2");
    sc_trace(mVcdFile, xor_ln581_fu_398_p2, "xor_ln581_fu_398_p2");
    sc_trace(mVcdFile, and_ln603_fu_404_p2, "and_ln603_fu_404_p2");
    sc_trace(mVcdFile, shl_ln604_fu_344_p2, "shl_ln604_fu_344_p2");
    sc_trace(mVcdFile, trunc_ln586_fu_317_p1, "trunc_ln586_fu_317_p1");
    sc_trace(mVcdFile, and_ln585_1_fu_387_p2, "and_ln585_1_fu_387_p2");
    sc_trace(mVcdFile, and_ln585_fu_381_p2, "and_ln585_fu_381_p2");
    sc_trace(mVcdFile, select_ln588_fu_332_p3, "select_ln588_fu_332_p3");
    sc_trace(mVcdFile, and_ln582_fu_355_p2, "and_ln582_fu_355_p2");
    sc_trace(mVcdFile, or_ln603_fu_418_p2, "or_ln603_fu_418_p2");
    sc_trace(mVcdFile, select_ln603_fu_410_p3, "select_ln603_fu_410_p3");
    sc_trace(mVcdFile, select_ln603_1_fu_424_p3, "select_ln603_1_fu_424_p3");
    sc_trace(mVcdFile, or_ln603_1_fu_432_p2, "or_ln603_1_fu_432_p2");
    sc_trace(mVcdFile, or_ln603_2_fu_446_p2, "or_ln603_2_fu_446_p2");
    sc_trace(mVcdFile, select_ln603_2_fu_438_p3, "select_ln603_2_fu_438_p3");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

soft_max::~soft_max() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete cnn_fadd_32ns_32ndEe_U44;
    delete cnn_fdiv_32ns_32neOg_U45;
    delete cnn_fpext_32ns_64bkb_U46;
    delete cnn_fexp_32ns_32nfYi_U47;
}

void soft_max::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_logic_1;
}

void soft_max::thread_ap_var_for_const1() {
    ap_var_for_const1 = ap_const_lv32_0;
}

void soft_max::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        i_0_reg_102 = i_reg_464.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_0_reg_102 = ap_const_lv4_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln15_fu_154_p2.read(), ap_const_lv1_1))) {
        j_0_reg_113 = ap_const_lv4_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
        j_0_reg_113 = j_reg_482.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        sum_0_reg_90 = grp_fu_124_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        sum_0_reg_90 = ap_const_lv32_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        i_reg_464 = i_fu_160_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        icmp_ln571_reg_513 = icmp_ln571_fu_222_p2.read();
        icmp_ln581_reg_519 = icmp_ln581_fu_234_p2.read();
        icmp_ln582_reg_532 = icmp_ln582_fu_260_p2.read();
        p_Result_s_reg_503 = ireg_V_fu_188_p1.read().range(63, 63);
        sh_amt_reg_525 = sh_amt_fu_252_p3.read();
        trunc_ln565_reg_508 = trunc_ln565_fu_218_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        j_reg_482 = j_fu_177_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        reg_148 = grp_fu_137_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        v_assign_reg_497 = grp_fu_129_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln20_fu_171_p2.read()))) {
        zext_ln22_reg_487 = zext_ln22_fu_183_p1.read();
    }
}

void soft_max::thread_F2_fu_228_p2() {
    F2_fu_228_p2 = (!ap_const_lv12_433.is_01() || !zext_ln461_fu_214_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_433) - sc_biguint<12>(zext_ln461_fu_214_p1.read()));
}

void soft_max::thread_add_ln581_fu_240_p2() {
    add_ln581_fu_240_p2 = (!ap_const_lv12_FF8.is_01() || !F2_fu_228_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_FF8) + sc_biguint<12>(F2_fu_228_p2.read()));
}

void soft_max::thread_and_ln581_fu_370_p2() {
    and_ln581_fu_370_p2 = (icmp_ln581_reg_519.read() & xor_ln582_fu_364_p2.read());
}

void soft_max::thread_and_ln582_fu_355_p2() {
    and_ln582_fu_355_p2 = (icmp_ln582_reg_532.read() & xor_ln571_fu_350_p2.read());
}

void soft_max::thread_and_ln585_1_fu_387_p2() {
    and_ln585_1_fu_387_p2 = (and_ln581_fu_370_p2.read() & icmp_ln585_fu_297_p2.read());
}

void soft_max::thread_and_ln585_fu_381_p2() {
    and_ln585_fu_381_p2 = (and_ln581_fu_370_p2.read() & xor_ln585_fu_375_p2.read());
}

void soft_max::thread_and_ln603_fu_404_p2() {
    and_ln603_fu_404_p2 = (icmp_ln603_fu_302_p2.read() & xor_ln581_fu_398_p2.read());
}

void soft_max::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void soft_max::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
}

void soft_max::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[10];
}

void soft_max::thread_ap_CS_fsm_state14() {
    ap_CS_fsm_state14 = ap_CS_fsm.read()[13];
}

void soft_max::thread_ap_CS_fsm_state15() {
    ap_CS_fsm_state15 = ap_CS_fsm.read()[14];
}

void soft_max::thread_ap_CS_fsm_state16() {
    ap_CS_fsm_state16 = ap_CS_fsm.read()[15];
}

void soft_max::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void soft_max::thread_ap_CS_fsm_state23() {
    ap_CS_fsm_state23 = ap_CS_fsm.read()[22];
}

void soft_max::thread_ap_CS_fsm_state24() {
    ap_CS_fsm_state24 = ap_CS_fsm.read()[23];
}

void soft_max::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void soft_max::thread_ap_CS_fsm_state33() {
    ap_CS_fsm_state33 = ap_CS_fsm.read()[32];
}

void soft_max::thread_ap_CS_fsm_state34() {
    ap_CS_fsm_state34 = ap_CS_fsm.read()[33];
}

void soft_max::thread_ap_CS_fsm_state35() {
    ap_CS_fsm_state35 = ap_CS_fsm.read()[34];
}

void soft_max::thread_ap_CS_fsm_state36() {
    ap_CS_fsm_state36 = ap_CS_fsm.read()[35];
}

void soft_max::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(icmp_ln20_fu_171_p2.read(), ap_const_lv1_1)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void soft_max::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void soft_max::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
         esl_seteq<1,1,1>(icmp_ln20_fu_171_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void soft_max::thread_ashr_ln586_fu_311_p2() {
    ashr_ln586_fu_311_p2 = (!man_V_2_fu_283_p3.read().is_01() || !zext_ln586_fu_307_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_2_fu_283_p3.read()) >> (unsigned short)zext_ln586_fu_307_p1.read().to_uint();
}

void soft_max::thread_bitcast_ln696_fu_321_p1() {
    bitcast_ln696_fu_321_p1 = v_assign_reg_497.read();
}

void soft_max::thread_dense_array_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        dense_array_address0 =  (sc_lv<4>) (zext_ln22_fu_183_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        dense_array_address0 =  (sc_lv<4>) (zext_ln17_fu_166_p1.read());
    } else {
        dense_array_address0 = "XXXX";
    }
}

void soft_max::thread_dense_array_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()))) {
        dense_array_ce0 = ap_const_logic_1;
    } else {
        dense_array_ce0 = ap_const_logic_0;
    }
}

void soft_max::thread_exp_tmp_V_fu_204_p4() {
    exp_tmp_V_fu_204_p4 = ireg_V_fu_188_p1.read().range(62, 52);
}

void soft_max::thread_i_fu_160_p2() {
    i_fu_160_p2 = (!i_0_reg_102.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i_0_reg_102.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void soft_max::thread_icmp_ln15_fu_154_p2() {
    icmp_ln15_fu_154_p2 = (!i_0_reg_102.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(i_0_reg_102.read() == ap_const_lv4_A);
}

void soft_max::thread_icmp_ln20_fu_171_p2() {
    icmp_ln20_fu_171_p2 = (!j_0_reg_113.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(j_0_reg_113.read() == ap_const_lv4_A);
}

void soft_max::thread_icmp_ln571_fu_222_p2() {
    icmp_ln571_fu_222_p2 = (!trunc_ln556_fu_192_p1.read().is_01() || !ap_const_lv63_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln556_fu_192_p1.read() == ap_const_lv63_0);
}

void soft_max::thread_icmp_ln581_fu_234_p2() {
    icmp_ln581_fu_234_p2 = (!F2_fu_228_p2.read().is_01() || !ap_const_lv12_8.is_01())? sc_lv<1>(): (sc_bigint<12>(F2_fu_228_p2.read()) > sc_bigint<12>(ap_const_lv12_8));
}

void soft_max::thread_icmp_ln582_fu_260_p2() {
    icmp_ln582_fu_260_p2 = (!F2_fu_228_p2.read().is_01() || !ap_const_lv12_8.is_01())? sc_lv<1>(): sc_lv<1>(F2_fu_228_p2.read() == ap_const_lv12_8);
}

void soft_max::thread_icmp_ln585_fu_297_p2() {
    icmp_ln585_fu_297_p2 = (!sh_amt_reg_525.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_reg_525.read()) < sc_biguint<12>(ap_const_lv12_36));
}

void soft_max::thread_icmp_ln603_fu_302_p2() {
    icmp_ln603_fu_302_p2 = (!sh_amt_reg_525.read().is_01() || !ap_const_lv12_E.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_reg_525.read()) < sc_biguint<12>(ap_const_lv12_E));
}

void soft_max::thread_ireg_V_fu_188_p1() {
    ireg_V_fu_188_p1 = grp_fu_134_p1.read();
}

void soft_max::thread_j_fu_177_p2() {
    j_fu_177_p2 = (!j_0_reg_113.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(j_0_reg_113.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void soft_max::thread_man_V_1_fu_277_p2() {
    man_V_1_fu_277_p2 = (!ap_const_lv54_0.is_01() || !p_Result_1_fu_273_p1.read().is_01())? sc_lv<54>(): (sc_biguint<54>(ap_const_lv54_0) - sc_biguint<54>(p_Result_1_fu_273_p1.read()));
}

void soft_max::thread_man_V_2_fu_283_p3() {
    man_V_2_fu_283_p3 = (!p_Result_s_reg_503.read()[0].is_01())? sc_lv<54>(): ((p_Result_s_reg_503.read()[0].to_bool())? man_V_1_fu_277_p2.read(): p_Result_1_fu_273_p1.read());
}

void soft_max::thread_or_ln581_fu_393_p2() {
    or_ln581_fu_393_p2 = (or_ln582_fu_360_p2.read() | icmp_ln581_reg_519.read());
}

void soft_max::thread_or_ln582_fu_360_p2() {
    or_ln582_fu_360_p2 = (icmp_ln571_reg_513.read() | icmp_ln582_reg_532.read());
}

void soft_max::thread_or_ln603_1_fu_432_p2() {
    or_ln603_1_fu_432_p2 = (and_ln585_fu_381_p2.read() | and_ln582_fu_355_p2.read());
}

void soft_max::thread_or_ln603_2_fu_446_p2() {
    or_ln603_2_fu_446_p2 = (or_ln603_fu_418_p2.read() | or_ln603_1_fu_432_p2.read());
}

void soft_max::thread_or_ln603_fu_418_p2() {
    or_ln603_fu_418_p2 = (and_ln603_fu_404_p2.read() | and_ln585_1_fu_387_p2.read());
}

void soft_max::thread_p_Result_1_fu_273_p1() {
    p_Result_1_fu_273_p1 = esl_zext<54,53>(tmp_1_fu_266_p3.read());
}

void soft_max::thread_pred_V_address0() {
    pred_V_address0 =  (sc_lv<4>) (zext_ln22_reg_487.read());
}

void soft_max::thread_pred_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
        pred_V_ce0 = ap_const_logic_1;
    } else {
        pred_V_ce0 = ap_const_logic_0;
    }
}

void soft_max::thread_pred_V_d0() {
    pred_V_d0 = (!or_ln603_2_fu_446_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln603_2_fu_446_p2.read()[0].to_bool())? select_ln603_2_fu_438_p3.read(): ap_const_lv14_0);
}

void soft_max::thread_pred_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
        pred_V_we0 = ap_const_logic_1;
    } else {
        pred_V_we0 = ap_const_logic_0;
    }
}

void soft_max::thread_select_ln588_fu_332_p3() {
    select_ln588_fu_332_p3 = (!tmp_4_fu_324_p3.read()[0].is_01())? sc_lv<14>(): ((tmp_4_fu_324_p3.read()[0].to_bool())? ap_const_lv14_3FFF: ap_const_lv14_0);
}

void soft_max::thread_select_ln603_1_fu_424_p3() {
    select_ln603_1_fu_424_p3 = (!and_ln585_fu_381_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln585_fu_381_p2.read()[0].to_bool())? select_ln588_fu_332_p3.read(): trunc_ln583_fu_293_p1.read());
}

void soft_max::thread_select_ln603_2_fu_438_p3() {
    select_ln603_2_fu_438_p3 = (!or_ln603_fu_418_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln603_fu_418_p2.read()[0].to_bool())? select_ln603_fu_410_p3.read(): select_ln603_1_fu_424_p3.read());
}

void soft_max::thread_select_ln603_fu_410_p3() {
    select_ln603_fu_410_p3 = (!and_ln603_fu_404_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln603_fu_404_p2.read()[0].to_bool())? shl_ln604_fu_344_p2.read(): trunc_ln586_fu_317_p1.read());
}

void soft_max::thread_sext_ln581_fu_290_p1() {
    sext_ln581_fu_290_p1 = esl_sext<32,12>(sh_amt_reg_525.read());
}

void soft_max::thread_sext_ln581cast_fu_340_p1() {
    sext_ln581cast_fu_340_p1 = sext_ln581_fu_290_p1.read().range(14-1, 0);
}

void soft_max::thread_sh_amt_fu_252_p3() {
    sh_amt_fu_252_p3 = (!icmp_ln581_fu_234_p2.read()[0].is_01())? sc_lv<12>(): ((icmp_ln581_fu_234_p2.read()[0].to_bool())? add_ln581_fu_240_p2.read(): sub_ln581_fu_246_p2.read());
}

void soft_max::thread_shl_ln604_fu_344_p2() {
    shl_ln604_fu_344_p2 = (!sext_ln581cast_fu_340_p1.read().is_01())? sc_lv<14>(): trunc_ln583_fu_293_p1.read() << (unsigned short)sext_ln581cast_fu_340_p1.read().to_uint();
}

void soft_max::thread_sub_ln581_fu_246_p2() {
    sub_ln581_fu_246_p2 = (!ap_const_lv12_8.is_01() || !F2_fu_228_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_8) - sc_biguint<12>(F2_fu_228_p2.read()));
}

void soft_max::thread_tmp_1_fu_266_p3() {
    tmp_1_fu_266_p3 = esl_concat<1,52>(ap_const_lv1_1, trunc_ln565_reg_508.read());
}

void soft_max::thread_tmp_4_fu_324_p3() {
    tmp_4_fu_324_p3 = bitcast_ln696_fu_321_p1.read().range(31, 31);
}

void soft_max::thread_trunc_ln556_fu_192_p1() {
    trunc_ln556_fu_192_p1 = ireg_V_fu_188_p1.read().range(63-1, 0);
}

void soft_max::thread_trunc_ln565_fu_218_p1() {
    trunc_ln565_fu_218_p1 = ireg_V_fu_188_p1.read().range(52-1, 0);
}

void soft_max::thread_trunc_ln583_fu_293_p1() {
    trunc_ln583_fu_293_p1 = man_V_2_fu_283_p3.read().range(14-1, 0);
}

void soft_max::thread_trunc_ln586_fu_317_p1() {
    trunc_ln586_fu_317_p1 = ashr_ln586_fu_311_p2.read().range(14-1, 0);
}

void soft_max::thread_xor_ln571_fu_350_p2() {
    xor_ln571_fu_350_p2 = (icmp_ln571_reg_513.read() ^ ap_const_lv1_1);
}

void soft_max::thread_xor_ln581_fu_398_p2() {
    xor_ln581_fu_398_p2 = (or_ln581_fu_393_p2.read() ^ ap_const_lv1_1);
}

void soft_max::thread_xor_ln582_fu_364_p2() {
    xor_ln582_fu_364_p2 = (or_ln582_fu_360_p2.read() ^ ap_const_lv1_1);
}

void soft_max::thread_xor_ln585_fu_375_p2() {
    xor_ln585_fu_375_p2 = (icmp_ln585_fu_297_p2.read() ^ ap_const_lv1_1);
}

void soft_max::thread_zext_ln17_fu_166_p1() {
    zext_ln17_fu_166_p1 = esl_zext<64,4>(i_0_reg_102.read());
}

void soft_max::thread_zext_ln22_fu_183_p1() {
    zext_ln22_fu_183_p1 = esl_zext<64,4>(j_0_reg_113.read());
}

void soft_max::thread_zext_ln461_fu_214_p1() {
    zext_ln461_fu_214_p1 = esl_zext<12,11>(exp_tmp_V_fu_204_p4.read());
}

void soft_max::thread_zext_ln586_fu_307_p1() {
    zext_ln586_fu_307_p1 = esl_zext<54,32>(sext_ln581_fu_290_p1.read());
}

void soft_max::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln15_fu_154_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state15;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state9;
            break;
        case 256 : 
            ap_NS_fsm = ap_ST_fsm_state10;
            break;
        case 512 : 
            ap_NS_fsm = ap_ST_fsm_state11;
            break;
        case 1024 : 
            ap_NS_fsm = ap_ST_fsm_state12;
            break;
        case 2048 : 
            ap_NS_fsm = ap_ST_fsm_state13;
            break;
        case 4096 : 
            ap_NS_fsm = ap_ST_fsm_state14;
            break;
        case 8192 : 
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        case 16384 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && esl_seteq<1,1,1>(icmp_ln20_fu_171_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state16;
            }
            break;
        case 32768 : 
            ap_NS_fsm = ap_ST_fsm_state17;
            break;
        case 65536 : 
            ap_NS_fsm = ap_ST_fsm_state18;
            break;
        case 131072 : 
            ap_NS_fsm = ap_ST_fsm_state19;
            break;
        case 262144 : 
            ap_NS_fsm = ap_ST_fsm_state20;
            break;
        case 524288 : 
            ap_NS_fsm = ap_ST_fsm_state21;
            break;
        case 1048576 : 
            ap_NS_fsm = ap_ST_fsm_state22;
            break;
        case 2097152 : 
            ap_NS_fsm = ap_ST_fsm_state23;
            break;
        case 4194304 : 
            ap_NS_fsm = ap_ST_fsm_state24;
            break;
        case 8388608 : 
            ap_NS_fsm = ap_ST_fsm_state25;
            break;
        case 16777216 : 
            ap_NS_fsm = ap_ST_fsm_state26;
            break;
        case 33554432 : 
            ap_NS_fsm = ap_ST_fsm_state27;
            break;
        case 67108864 : 
            ap_NS_fsm = ap_ST_fsm_state28;
            break;
        case 134217728 : 
            ap_NS_fsm = ap_ST_fsm_state29;
            break;
        case 268435456 : 
            ap_NS_fsm = ap_ST_fsm_state30;
            break;
        case 536870912 : 
            ap_NS_fsm = ap_ST_fsm_state31;
            break;
        case 1073741824 : 
            ap_NS_fsm = ap_ST_fsm_state32;
            break;
        case 2147483648 : 
            ap_NS_fsm = ap_ST_fsm_state33;
            break;
        case 4294967296 : 
            ap_NS_fsm = ap_ST_fsm_state34;
            break;
        case 8589934592 : 
            ap_NS_fsm = ap_ST_fsm_state35;
            break;
        case 17179869184 : 
            ap_NS_fsm = ap_ST_fsm_state36;
            break;
        case 34359738368 : 
            ap_NS_fsm = ap_ST_fsm_state15;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<36>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
            break;
    }
}

}
