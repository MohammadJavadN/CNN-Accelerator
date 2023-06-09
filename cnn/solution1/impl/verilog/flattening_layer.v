// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module flattening_layer (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        pool_features_V_address0,
        pool_features_V_ce0,
        pool_features_V_q0,
        flat_array_V_address0,
        flat_array_V_ce0,
        flat_array_V_we0,
        flat_array_V_d0
);

parameter    ap_ST_fsm_state1 = 5'd1;
parameter    ap_ST_fsm_state2 = 5'd2;
parameter    ap_ST_fsm_state3 = 5'd4;
parameter    ap_ST_fsm_state4 = 5'd8;
parameter    ap_ST_fsm_state5 = 5'd16;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [7:0] pool_features_V_address0;
output   pool_features_V_ce0;
input  [13:0] pool_features_V_q0;
output  [7:0] flat_array_V_address0;
output   flat_array_V_ce0;
output   flat_array_V_we0;
output  [13:0] flat_array_V_d0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg pool_features_V_ce0;
reg flat_array_V_ce0;
reg flat_array_V_we0;

(* fsm_encoding = "none" *) reg   [4:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [3:0] f_fu_138_p2;
reg   [3:0] f_reg_237;
wire    ap_CS_fsm_state2;
wire   [7:0] index_fu_144_p2;
reg   [7:0] index_reg_242;
wire   [0:0] icmp_ln12_fu_132_p2;
wire   [6:0] zext_ln13_fu_158_p1;
reg   [6:0] zext_ln13_reg_247;
wire   [2:0] r_fu_168_p2;
reg   [2:0] r_reg_255;
wire    ap_CS_fsm_state3;
wire   [7:0] add_ln17_fu_174_p2;
reg   [7:0] add_ln17_reg_260;
wire   [0:0] icmp_ln13_fu_162_p2;
wire   [8:0] tmp_8_cast_fu_189_p3;
reg   [8:0] tmp_8_cast_reg_265;
wire   [2:0] c_fu_203_p2;
reg   [2:0] c_reg_273;
wire    ap_CS_fsm_state4;
wire   [0:0] icmp_ln14_fu_197_p2;
wire   [7:0] add_ln17_1_fu_228_p2;
wire    ap_CS_fsm_state5;
reg   [7:0] index_0_reg_65;
reg   [3:0] f_0_reg_77;
reg   [7:0] index_1_reg_88;
reg   [2:0] r_0_reg_99;
reg   [7:0] index_2_reg_110;
reg   [2:0] c_0_reg_121;
wire   [63:0] zext_ln203_7_fu_218_p1;
wire   [63:0] zext_ln16_fu_223_p1;
wire   [5:0] tmp_fu_150_p3;
wire   [6:0] zext_ln203_fu_180_p1;
wire   [6:0] add_ln203_fu_184_p2;
wire   [8:0] zext_ln203_6_fu_209_p1;
wire   [8:0] add_ln203_2_fu_213_p2;
reg   [4:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 5'd1;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        c_0_reg_121 <= c_reg_273;
    end else if (((icmp_ln13_fu_162_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        c_0_reg_121 <= 3'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln13_fu_162_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        f_0_reg_77 <= f_reg_237;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        f_0_reg_77 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln13_fu_162_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        index_0_reg_65 <= index_reg_242;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        index_0_reg_65 <= 8'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln14_fu_197_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4))) begin
        index_1_reg_88 <= add_ln17_reg_260;
    end else if (((icmp_ln12_fu_132_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        index_1_reg_88 <= index_0_reg_65;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        index_2_reg_110 <= add_ln17_1_fu_228_p2;
    end else if (((icmp_ln13_fu_162_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        index_2_reg_110 <= index_1_reg_88;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln14_fu_197_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4))) begin
        r_0_reg_99 <= r_reg_255;
    end else if (((icmp_ln12_fu_132_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        r_0_reg_99 <= 3'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln13_fu_162_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        add_ln17_reg_260 <= add_ln17_fu_174_p2;
        tmp_8_cast_reg_265[8 : 2] <= tmp_8_cast_fu_189_p3[8 : 2];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        c_reg_273 <= c_fu_203_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        f_reg_237 <= f_fu_138_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln12_fu_132_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        index_reg_242 <= index_fu_144_p2;
        zext_ln13_reg_247[5 : 2] <= zext_ln13_fu_158_p1[5 : 2];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        r_reg_255 <= r_fu_168_p2;
    end
end

always @ (*) begin
    if ((((icmp_ln12_fu_132_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln12_fu_132_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        flat_array_V_ce0 = 1'b1;
    end else begin
        flat_array_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        flat_array_V_we0 = 1'b1;
    end else begin
        flat_array_V_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        pool_features_V_ce0 = 1'b1;
    end else begin
        pool_features_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((icmp_ln12_fu_132_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((icmp_ln13_fu_162_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            if (((icmp_ln14_fu_197_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln17_1_fu_228_p2 = (index_2_reg_110 + 8'd1);

assign add_ln17_fu_174_p2 = (index_1_reg_88 + 8'd4);

assign add_ln203_2_fu_213_p2 = (tmp_8_cast_reg_265 + zext_ln203_6_fu_209_p1);

assign add_ln203_fu_184_p2 = (zext_ln203_fu_180_p1 + zext_ln13_reg_247);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign c_fu_203_p2 = (c_0_reg_121 + 3'd1);

assign f_fu_138_p2 = (f_0_reg_77 + 4'd1);

assign flat_array_V_address0 = zext_ln16_fu_223_p1;

assign flat_array_V_d0 = pool_features_V_q0;

assign icmp_ln12_fu_132_p2 = ((f_0_reg_77 == 4'd10) ? 1'b1 : 1'b0);

assign icmp_ln13_fu_162_p2 = ((r_0_reg_99 == 3'd4) ? 1'b1 : 1'b0);

assign icmp_ln14_fu_197_p2 = ((c_0_reg_121 == 3'd4) ? 1'b1 : 1'b0);

assign index_fu_144_p2 = (index_0_reg_65 + 8'd16);

assign pool_features_V_address0 = zext_ln203_7_fu_218_p1;

assign r_fu_168_p2 = (r_0_reg_99 + 3'd1);

assign tmp_8_cast_fu_189_p3 = {{add_ln203_fu_184_p2}, {2'd0}};

assign tmp_fu_150_p3 = {{f_0_reg_77}, {2'd0}};

assign zext_ln13_fu_158_p1 = tmp_fu_150_p3;

assign zext_ln16_fu_223_p1 = index_2_reg_110;

assign zext_ln203_6_fu_209_p1 = c_0_reg_121;

assign zext_ln203_7_fu_218_p1 = add_ln203_2_fu_213_p2;

assign zext_ln203_fu_180_p1 = r_0_reg_99;

always @ (posedge ap_clk) begin
    zext_ln13_reg_247[1:0] <= 2'b00;
    zext_ln13_reg_247[6] <= 1'b0;
    tmp_8_cast_reg_265[1:0] <= 2'b00;
end

endmodule //flattening_layer
