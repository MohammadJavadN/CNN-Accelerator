// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _dense_layer_HH_
#define _dense_layer_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "soft_max.h"
#include "cnn_fadd_32ns_32nbkb.h"
#include "cnn_mul_mul_14ns_ibs.h"
#include "dense_layer_densefYi.h"
#include "dense_layer_denseg8j.h"
#include "dense_layer_densehbi.h"

namespace ap_rtl {

struct dense_layer : public sc_module {
    // Port declarations 12
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<8> > flat_array_V_address0;
    sc_out< sc_logic > flat_array_V_ce0;
    sc_in< sc_lv<14> > flat_array_V_q0;
    sc_out< sc_lv<16> > prediction_V_V_TDATA;
    sc_out< sc_logic > prediction_V_V_TVALID;
    sc_in< sc_logic > prediction_V_V_TREADY;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    dense_layer(sc_module_name name);
    SC_HAS_PROCESS(dense_layer);

    ~dense_layer();

    sc_trace_file* mVcdFile;

    dense_layer_densefYi* dense_weights_V_U;
    dense_layer_denseg8j* dense_biases_V_U;
    dense_layer_densehbi* dense_array_U;
    soft_max* grp_soft_max_fu_252;
    cnn_fadd_32ns_32nbkb<1,4,32,32,32>* cnn_fadd_32ns_32nbkb_U48;
    cnn_mul_mul_14ns_ibs<1,1,14,11,25>* cnn_mul_mul_14ns_ibs_U49;
    sc_signal< sc_lv<21> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<11> > dense_weights_V_address0;
    sc_signal< sc_logic > dense_weights_V_ce0;
    sc_signal< sc_lv<11> > dense_weights_V_q0;
    sc_signal< sc_lv<4> > dense_biases_V_address0;
    sc_signal< sc_logic > dense_biases_V_ce0;
    sc_signal< sc_lv<9> > dense_biases_V_q0;
    sc_signal< sc_lv<4> > add_ln13_fu_264_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<10> > zext_ln15_fu_281_p1;
    sc_signal< sc_lv<10> > zext_ln15_reg_947;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<4> > d_fu_291_p2;
    sc_signal< sc_lv<4> > d_reg_955;
    sc_signal< sc_lv<64> > zext_ln936_fu_297_p1;
    sc_signal< sc_lv<64> > zext_ln936_reg_960;
    sc_signal< sc_lv<1> > icmp_ln15_fu_285_p2;
    sc_signal< sc_lv<12> > zext_ln19_fu_301_p1;
    sc_signal< sc_lv<12> > zext_ln19_reg_966;
    sc_signal< sc_lv<8> > f_fu_311_p2;
    sc_signal< sc_lv<8> > f_reg_974;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > icmp_ln19_fu_305_p2;
    sc_signal< sc_lv<1> > p_Result_16_fu_367_p1;
    sc_signal< sc_lv<1> > p_Result_16_reg_994;
    sc_signal< sc_lv<25> > mul_ln941_fu_932_p2;
    sc_signal< sc_lv<25> > mul_ln941_reg_1000;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<1> > p_Result_13_reg_1007;
    sc_signal< sc_lv<1> > icmp_ln935_fu_386_p2;
    sc_signal< sc_lv<1> > icmp_ln935_reg_1013;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<30> > sext_ln938_1_fu_402_p1;
    sc_signal< sc_lv<30> > sext_ln938_1_reg_1018;
    sc_signal< sc_lv<32> > sub_ln944_fu_432_p2;
    sc_signal< sc_lv<32> > sub_ln944_reg_1025;
    sc_signal< sc_lv<30> > trunc_ln944_1_fu_438_p1;
    sc_signal< sc_lv<30> > trunc_ln944_1_reg_1032;
    sc_signal< sc_lv<5> > trunc_ln947_1_fu_442_p1;
    sc_signal< sc_lv<5> > trunc_ln947_1_reg_1037;
    sc_signal< sc_lv<8> > trunc_ln943_1_fu_446_p1;
    sc_signal< sc_lv<8> > trunc_ln943_1_reg_1042;
    sc_signal< sc_lv<31> > m_4_reg_1047;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<1> > tmp_17_reg_1052;
    sc_signal< sc_lv<32> > select_ln935_fu_656_p3;
    sc_signal< sc_lv<32> > select_ln935_reg_1057;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<32> > grp_fu_259_p2;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<15> > sext_ln938_fu_676_p1;
    sc_signal< sc_lv<15> > sext_ln938_reg_1067;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<32> > l_1_fu_698_p3;
    sc_signal< sc_lv<32> > l_1_reg_1074;
    sc_signal< sc_lv<8> > trunc_ln943_fu_706_p1;
    sc_signal< sc_lv<8> > trunc_ln943_reg_1079;
    sc_signal< sc_lv<32> > sub_ln944_1_fu_710_p2;
    sc_signal< sc_lv<32> > sub_ln944_1_reg_1084;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<32> > or_ln949_1_fu_817_p3;
    sc_signal< sc_lv<32> > or_ln949_1_reg_1090;
    sc_signal< sc_lv<1> > icmp_ln958_1_fu_825_p2;
    sc_signal< sc_lv<1> > icmp_ln958_1_reg_1095;
    sc_signal< sc_lv<32> > p_Result_18_fu_916_p5;
    sc_signal< sc_lv<32> > p_Result_18_reg_1100;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<32> > bitcast_ln739_1_fu_928_p1;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<32> > tmp_reg_1110;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_lv<4> > dense_array_address0;
    sc_signal< sc_logic > dense_array_ce0;
    sc_signal< sc_logic > dense_array_we0;
    sc_signal< sc_lv<32> > dense_array_d0;
    sc_signal< sc_lv<32> > dense_array_q0;
    sc_signal< sc_logic > grp_soft_max_fu_252_ap_start;
    sc_signal< sc_logic > grp_soft_max_fu_252_ap_done;
    sc_signal< sc_logic > grp_soft_max_fu_252_ap_idle;
    sc_signal< sc_logic > grp_soft_max_fu_252_ap_ready;
    sc_signal< sc_lv<4> > grp_soft_max_fu_252_dense_array_address0;
    sc_signal< sc_logic > grp_soft_max_fu_252_dense_array_ce0;
    sc_signal< sc_lv<16> > grp_soft_max_fu_252_pred_V_V_TDATA;
    sc_signal< sc_logic > grp_soft_max_fu_252_pred_V_V_TVALID;
    sc_signal< sc_logic > grp_soft_max_fu_252_pred_V_V_TREADY;
    sc_signal< sc_lv<4> > phi_ln13_reg_207;
    sc_signal< sc_lv<1> > icmp_ln13_fu_275_p2;
    sc_signal< sc_lv<4> > d_0_reg_218;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_lv<32> > w_sum_0_reg_229;
    sc_signal< sc_lv<8> > f_0_reg_241;
    sc_signal< sc_logic > grp_soft_max_fu_252_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_lv<64> > zext_ln13_fu_270_p1;
    sc_signal< sc_lv<64> > zext_ln1116_2_fu_357_p1;
    sc_signal< sc_lv<64> > zext_ln21_fu_317_p1;
    sc_signal< sc_lv<32> > grp_fu_259_p1;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<11> > tmp_9_fu_322_p3;
    sc_signal< sc_lv<9> > tmp_s_fu_334_p3;
    sc_signal< sc_lv<12> > zext_ln1116_fu_330_p1;
    sc_signal< sc_lv<12> > zext_ln1116_1_fu_342_p1;
    sc_signal< sc_lv<12> > add_ln1116_fu_346_p2;
    sc_signal< sc_lv<12> > add_ln1116_1_fu_352_p2;
    sc_signal< sc_lv<10> > lshr_ln936_fu_362_p2;
    sc_signal< sc_lv<25> > tmp_V_3_fu_391_p2;
    sc_signal< sc_lv<25> > tmp_V_5_fu_396_p3;
    sc_signal< sc_lv<30> > p_Result_s_fu_406_p4;
    sc_signal< sc_lv<32> > p_Result_14_fu_416_p3;
    sc_signal< sc_lv<32> > l_fu_424_p3;
    sc_signal< sc_lv<32> > lsb_index_fu_450_p2;
    sc_signal< sc_lv<31> > tmp_15_fu_455_p4;
    sc_signal< sc_lv<5> > sub_ln947_1_fu_471_p2;
    sc_signal< sc_lv<30> > zext_ln947_1_fu_476_p1;
    sc_signal< sc_lv<30> > lshr_ln947_1_fu_480_p2;
    sc_signal< sc_lv<30> > p_Result_10_fu_486_p2;
    sc_signal< sc_lv<1> > icmp_ln947_3_fu_465_p2;
    sc_signal< sc_lv<1> > icmp_ln947_2_fu_491_p2;
    sc_signal< sc_lv<1> > tmp_16_fu_503_p3;
    sc_signal< sc_lv<30> > add_ln949_1_fu_517_p2;
    sc_signal< sc_lv<1> > p_Result_11_fu_522_p3;
    sc_signal< sc_lv<1> > xor_ln949_1_fu_511_p2;
    sc_signal< sc_lv<1> > and_ln949_1_fu_529_p2;
    sc_signal< sc_lv<1> > a_fu_497_p2;
    sc_signal< sc_lv<1> > or_ln949_2_fu_535_p2;
    sc_signal< sc_lv<32> > m_fu_549_p1;
    sc_signal< sc_lv<32> > add_ln958_fu_558_p2;
    sc_signal< sc_lv<32> > sub_ln958_fu_569_p2;
    sc_signal< sc_lv<1> > icmp_ln958_fu_552_p2;
    sc_signal< sc_lv<32> > lshr_ln958_fu_563_p2;
    sc_signal< sc_lv<32> > shl_ln958_fu_574_p2;
    sc_signal< sc_lv<32> > or_ln_fu_541_p3;
    sc_signal< sc_lv<32> > m_9_fu_580_p3;
    sc_signal< sc_lv<32> > m_11_fu_588_p2;
    sc_signal< sc_lv<8> > sub_ln964_1_fu_622_p2;
    sc_signal< sc_lv<8> > select_ln964_1_fu_615_p3;
    sc_signal< sc_lv<8> > add_ln964_1_fu_627_p2;
    sc_signal< sc_lv<32> > m_14_fu_612_p1;
    sc_signal< sc_lv<9> > tmp_5_fu_633_p3;
    sc_signal< sc_lv<32> > p_Result_15_fu_640_p5;
    sc_signal< sc_lv<32> > bitcast_ln739_fu_652_p1;
    sc_signal< sc_lv<9> > tmp_V_fu_663_p2;
    sc_signal< sc_lv<9> > tmp_V_7_fu_669_p3;
    sc_signal< sc_lv<15> > p_Result_3_fu_680_p4;
    sc_signal< sc_lv<32> > p_Result_17_fu_690_p3;
    sc_signal< sc_lv<32> > lsb_index_1_fu_719_p2;
    sc_signal< sc_lv<31> > tmp_11_fu_725_p4;
    sc_signal< sc_lv<4> > trunc_ln947_fu_741_p1;
    sc_signal< sc_lv<4> > sub_ln947_fu_745_p2;
    sc_signal< sc_lv<15> > zext_ln947_fu_751_p1;
    sc_signal< sc_lv<15> > lshr_ln947_fu_755_p2;
    sc_signal< sc_lv<15> > p_Result_5_fu_761_p2;
    sc_signal< sc_lv<1> > icmp_ln947_fu_735_p2;
    sc_signal< sc_lv<1> > icmp_ln947_1_fu_766_p2;
    sc_signal< sc_lv<1> > tmp_12_fu_778_p3;
    sc_signal< sc_lv<15> > trunc_ln944_fu_715_p1;
    sc_signal< sc_lv<15> > add_ln949_fu_792_p2;
    sc_signal< sc_lv<1> > p_Result_6_fu_798_p3;
    sc_signal< sc_lv<1> > xor_ln949_fu_786_p2;
    sc_signal< sc_lv<1> > and_ln949_fu_805_p2;
    sc_signal< sc_lv<1> > a_1_fu_772_p2;
    sc_signal< sc_lv<1> > or_ln949_fu_811_p2;
    sc_signal< sc_lv<32> > m_1_fu_831_p1;
    sc_signal< sc_lv<32> > add_ln958_1_fu_834_p2;
    sc_signal< sc_lv<32> > sub_ln958_1_fu_845_p2;
    sc_signal< sc_lv<32> > lshr_ln958_1_fu_839_p2;
    sc_signal< sc_lv<32> > shl_ln958_1_fu_850_p2;
    sc_signal< sc_lv<32> > m_2_fu_856_p3;
    sc_signal< sc_lv<32> > m_3_fu_863_p2;
    sc_signal< sc_lv<31> > m_s_fu_868_p4;
    sc_signal< sc_lv<1> > tmp_13_fu_882_p3;
    sc_signal< sc_lv<8> > select_ln964_fu_890_p3;
    sc_signal< sc_lv<8> > sub_ln964_fu_898_p2;
    sc_signal< sc_lv<8> > add_ln964_fu_903_p2;
    sc_signal< sc_lv<32> > m_15_fu_878_p1;
    sc_signal< sc_lv<9> > tmp_4_fu_909_p3;
    sc_signal< sc_lv<14> > mul_ln941_fu_932_p0;
    sc_signal< sc_lv<21> > ap_NS_fsm;
    sc_signal< sc_lv<25> > mul_ln941_fu_932_p00;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<21> ap_ST_fsm_state1;
    static const sc_lv<21> ap_ST_fsm_state2;
    static const sc_lv<21> ap_ST_fsm_state3;
    static const sc_lv<21> ap_ST_fsm_state4;
    static const sc_lv<21> ap_ST_fsm_state5;
    static const sc_lv<21> ap_ST_fsm_state6;
    static const sc_lv<21> ap_ST_fsm_state7;
    static const sc_lv<21> ap_ST_fsm_state8;
    static const sc_lv<21> ap_ST_fsm_state9;
    static const sc_lv<21> ap_ST_fsm_state10;
    static const sc_lv<21> ap_ST_fsm_state11;
    static const sc_lv<21> ap_ST_fsm_state12;
    static const sc_lv<21> ap_ST_fsm_state13;
    static const sc_lv<21> ap_ST_fsm_state14;
    static const sc_lv<21> ap_ST_fsm_state15;
    static const sc_lv<21> ap_ST_fsm_state16;
    static const sc_lv<21> ap_ST_fsm_state17;
    static const sc_lv<21> ap_ST_fsm_state18;
    static const sc_lv<21> ap_ST_fsm_state19;
    static const sc_lv<21> ap_ST_fsm_state20;
    static const sc_lv<21> ap_ST_fsm_state21;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<4> ap_const_lv4_9;
    static const sc_lv<4> ap_const_lv4_A;
    static const sc_lv<8> ap_const_lv8_A0;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<10> ap_const_lv10_2CC;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<25> ap_const_lv25_0;
    static const sc_lv<32> ap_const_lv32_1D;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<32> ap_const_lv32_FFFFFFE8;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<31> ap_const_lv31_0;
    static const sc_lv<5> ap_const_lv5_17;
    static const sc_lv<30> ap_const_lv30_3FFFFFFF;
    static const sc_lv<30> ap_const_lv30_0;
    static const sc_lv<30> ap_const_lv30_3FFFFFE8;
    static const sc_lv<32> ap_const_lv32_FFFFFFE7;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<8> ap_const_lv8_7F;
    static const sc_lv<8> ap_const_lv8_7E;
    static const sc_lv<8> ap_const_lv8_C;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<17> ap_const_lv17_1FFFF;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<15> ap_const_lv15_7FFF;
    static const sc_lv<15> ap_const_lv15_0;
    static const sc_lv<15> ap_const_lv15_7FE8;
    static const sc_lv<8> ap_const_lv8_6;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_a_1_fu_772_p2();
    void thread_a_fu_497_p2();
    void thread_add_ln1116_1_fu_352_p2();
    void thread_add_ln1116_fu_346_p2();
    void thread_add_ln13_fu_264_p2();
    void thread_add_ln949_1_fu_517_p2();
    void thread_add_ln949_fu_792_p2();
    void thread_add_ln958_1_fu_834_p2();
    void thread_add_ln958_fu_558_p2();
    void thread_add_ln964_1_fu_627_p2();
    void thread_add_ln964_fu_903_p2();
    void thread_and_ln949_1_fu_529_p2();
    void thread_and_ln949_fu_805_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state21();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_bitcast_ln739_1_fu_928_p1();
    void thread_bitcast_ln739_fu_652_p1();
    void thread_d_fu_291_p2();
    void thread_dense_array_address0();
    void thread_dense_array_ce0();
    void thread_dense_array_d0();
    void thread_dense_array_we0();
    void thread_dense_biases_V_address0();
    void thread_dense_biases_V_ce0();
    void thread_dense_weights_V_address0();
    void thread_dense_weights_V_ce0();
    void thread_f_fu_311_p2();
    void thread_flat_array_V_address0();
    void thread_flat_array_V_ce0();
    void thread_grp_fu_259_p1();
    void thread_grp_soft_max_fu_252_ap_start();
    void thread_grp_soft_max_fu_252_pred_V_V_TREADY();
    void thread_icmp_ln13_fu_275_p2();
    void thread_icmp_ln15_fu_285_p2();
    void thread_icmp_ln19_fu_305_p2();
    void thread_icmp_ln935_fu_386_p2();
    void thread_icmp_ln947_1_fu_766_p2();
    void thread_icmp_ln947_2_fu_491_p2();
    void thread_icmp_ln947_3_fu_465_p2();
    void thread_icmp_ln947_fu_735_p2();
    void thread_icmp_ln958_1_fu_825_p2();
    void thread_icmp_ln958_fu_552_p2();
    void thread_l_1_fu_698_p3();
    void thread_l_fu_424_p3();
    void thread_lsb_index_1_fu_719_p2();
    void thread_lsb_index_fu_450_p2();
    void thread_lshr_ln936_fu_362_p2();
    void thread_lshr_ln947_1_fu_480_p2();
    void thread_lshr_ln947_fu_755_p2();
    void thread_lshr_ln958_1_fu_839_p2();
    void thread_lshr_ln958_fu_563_p2();
    void thread_m_11_fu_588_p2();
    void thread_m_14_fu_612_p1();
    void thread_m_15_fu_878_p1();
    void thread_m_1_fu_831_p1();
    void thread_m_2_fu_856_p3();
    void thread_m_3_fu_863_p2();
    void thread_m_9_fu_580_p3();
    void thread_m_fu_549_p1();
    void thread_m_s_fu_868_p4();
    void thread_mul_ln941_fu_932_p0();
    void thread_mul_ln941_fu_932_p00();
    void thread_or_ln949_1_fu_817_p3();
    void thread_or_ln949_2_fu_535_p2();
    void thread_or_ln949_fu_811_p2();
    void thread_or_ln_fu_541_p3();
    void thread_p_Result_10_fu_486_p2();
    void thread_p_Result_11_fu_522_p3();
    void thread_p_Result_14_fu_416_p3();
    void thread_p_Result_15_fu_640_p5();
    void thread_p_Result_16_fu_367_p1();
    void thread_p_Result_17_fu_690_p3();
    void thread_p_Result_18_fu_916_p5();
    void thread_p_Result_3_fu_680_p4();
    void thread_p_Result_5_fu_761_p2();
    void thread_p_Result_6_fu_798_p3();
    void thread_p_Result_s_fu_406_p4();
    void thread_prediction_V_V_TDATA();
    void thread_prediction_V_V_TVALID();
    void thread_select_ln935_fu_656_p3();
    void thread_select_ln964_1_fu_615_p3();
    void thread_select_ln964_fu_890_p3();
    void thread_sext_ln938_1_fu_402_p1();
    void thread_sext_ln938_fu_676_p1();
    void thread_shl_ln958_1_fu_850_p2();
    void thread_shl_ln958_fu_574_p2();
    void thread_sub_ln944_1_fu_710_p2();
    void thread_sub_ln944_fu_432_p2();
    void thread_sub_ln947_1_fu_471_p2();
    void thread_sub_ln947_fu_745_p2();
    void thread_sub_ln958_1_fu_845_p2();
    void thread_sub_ln958_fu_569_p2();
    void thread_sub_ln964_1_fu_622_p2();
    void thread_sub_ln964_fu_898_p2();
    void thread_tmp_11_fu_725_p4();
    void thread_tmp_12_fu_778_p3();
    void thread_tmp_13_fu_882_p3();
    void thread_tmp_15_fu_455_p4();
    void thread_tmp_16_fu_503_p3();
    void thread_tmp_4_fu_909_p3();
    void thread_tmp_5_fu_633_p3();
    void thread_tmp_9_fu_322_p3();
    void thread_tmp_V_3_fu_391_p2();
    void thread_tmp_V_5_fu_396_p3();
    void thread_tmp_V_7_fu_669_p3();
    void thread_tmp_V_fu_663_p2();
    void thread_tmp_s_fu_334_p3();
    void thread_trunc_ln943_1_fu_446_p1();
    void thread_trunc_ln943_fu_706_p1();
    void thread_trunc_ln944_1_fu_438_p1();
    void thread_trunc_ln944_fu_715_p1();
    void thread_trunc_ln947_1_fu_442_p1();
    void thread_trunc_ln947_fu_741_p1();
    void thread_xor_ln949_1_fu_511_p2();
    void thread_xor_ln949_fu_786_p2();
    void thread_zext_ln1116_1_fu_342_p1();
    void thread_zext_ln1116_2_fu_357_p1();
    void thread_zext_ln1116_fu_330_p1();
    void thread_zext_ln13_fu_270_p1();
    void thread_zext_ln15_fu_281_p1();
    void thread_zext_ln19_fu_301_p1();
    void thread_zext_ln21_fu_317_p1();
    void thread_zext_ln936_fu_297_p1();
    void thread_zext_ln947_1_fu_476_p1();
    void thread_zext_ln947_fu_751_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
