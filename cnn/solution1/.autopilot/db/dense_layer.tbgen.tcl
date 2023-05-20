set moduleName dense_layer
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {dense_layer}
set C_modelType { void 0 }
set C_modelArgList {
	{ flat_array_V int 14 regular {array 160 { 1 3 } 1 1 }  }
	{ prediction_V_V int 16 regular {axi_s 1 volatile  { prediction_V_V Data } }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "flat_array_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "prediction_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 12
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ flat_array_V_address0 sc_out sc_lv 8 signal 0 } 
	{ flat_array_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ flat_array_V_q0 sc_in sc_lv 14 signal 0 } 
	{ prediction_V_V_TDATA sc_out sc_lv 16 signal 1 } 
	{ prediction_V_V_TVALID sc_out sc_logic 1 outvld 1 } 
	{ prediction_V_V_TREADY sc_in sc_logic 1 outacc 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "flat_array_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "flat_array_V", "role": "address0" }} , 
 	{ "name": "flat_array_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "flat_array_V", "role": "ce0" }} , 
 	{ "name": "flat_array_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "flat_array_V", "role": "q0" }} , 
 	{ "name": "prediction_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "prediction_V_V", "role": "TDATA" }} , 
 	{ "name": "prediction_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "prediction_V_V", "role": "TVALID" }} , 
 	{ "name": "prediction_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "prediction_V_V", "role": "TREADY" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "9", "10"],
		"CDFG" : "dense_layer",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "14864", "EstimateLatencyMax" : "14864",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state21", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_soft_max_fu_252"}],
		"Port" : [
			{"Name" : "flat_array_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "prediction_V_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_soft_max_fu_252", "Port" : "pred_V_V"}]},
			{"Name" : "dense_weights_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_biases_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_weights_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_biases_V_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_array_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_soft_max_fu_252", "Parent" : "0", "Child" : ["5", "6", "7", "8"],
		"CDFG" : "soft_max",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "352", "EstimateLatencyMax" : "352",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "dense_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pred_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "pred_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_soft_max_fu_252.cnn_fadd_32ns_32nbkb_U38", "Parent" : "4"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_soft_max_fu_252.cnn_fdiv_32ns_32ncud_U39", "Parent" : "4"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_soft_max_fu_252.cnn_fpext_32ns_64dEe_U40", "Parent" : "4"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_soft_max_fu_252.cnn_fexp_32ns_32neOg_U41", "Parent" : "4"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cnn_fadd_32ns_32nbkb_U48", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cnn_mul_mul_14ns_ibs_U49", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	dense_layer {
		flat_array_V {Type I LastRead 3 FirstWrite -1}
		prediction_V_V {Type O LastRead -1 FirstWrite 23}
		dense_weights_V {Type I LastRead -1 FirstWrite -1}
		dense_biases_V {Type I LastRead -1 FirstWrite -1}}
	soft_max {
		dense_array {Type I LastRead 2 FirstWrite -1}
		pred_V_V {Type O LastRead -1 FirstWrite 23}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "14864", "Max" : "14864"}
	, {"Name" : "Interval", "Min" : "14864", "Max" : "14864"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	flat_array_V { ap_memory {  { flat_array_V_address0 mem_address 1 8 }  { flat_array_V_ce0 mem_ce 1 1 }  { flat_array_V_q0 mem_dout 0 14 } } }
	prediction_V_V { axis {  { prediction_V_V_TDATA out_data 1 16 }  { prediction_V_V_TVALID out_vld 1 1 }  { prediction_V_V_TREADY out_acc 0 1 } } }
}
