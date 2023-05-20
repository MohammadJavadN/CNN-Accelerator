set moduleName soft_max
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
set C_modelName {soft_max}
set C_modelType { void 0 }
set C_modelArgList {
	{ dense_array float 32 regular {array 10 { 1 3 } 1 1 }  }
	{ pred_V_V int 16 regular {axi_s 1 volatile  { pred_V_V Data } }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "dense_array", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "pred_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 12
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ dense_array_address0 sc_out sc_lv 4 signal 0 } 
	{ dense_array_ce0 sc_out sc_logic 1 signal 0 } 
	{ dense_array_q0 sc_in sc_lv 32 signal 0 } 
	{ pred_V_V_TDATA sc_out sc_lv 16 signal 1 } 
	{ pred_V_V_TVALID sc_out sc_logic 1 outvld 1 } 
	{ pred_V_V_TREADY sc_in sc_logic 1 outacc 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "dense_array_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "dense_array", "role": "address0" }} , 
 	{ "name": "dense_array_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_array", "role": "ce0" }} , 
 	{ "name": "dense_array_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_array", "role": "q0" }} , 
 	{ "name": "pred_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "pred_V_V", "role": "TDATA" }} , 
 	{ "name": "pred_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "pred_V_V", "role": "TVALID" }} , 
 	{ "name": "pred_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "pred_V_V", "role": "TREADY" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4"],
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cnn_fadd_32ns_32nbkb_U38", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cnn_fdiv_32ns_32ncud_U39", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cnn_fpext_32ns_64dEe_U40", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cnn_fexp_32ns_32neOg_U41", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	soft_max {
		dense_array {Type I LastRead 2 FirstWrite -1}
		pred_V_V {Type O LastRead -1 FirstWrite 23}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "352", "Max" : "352"}
	, {"Name" : "Interval", "Min" : "352", "Max" : "352"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	dense_array { ap_memory {  { dense_array_address0 mem_address 1 4 }  { dense_array_ce0 mem_ce 1 1 }  { dense_array_q0 mem_dout 0 32 } } }
	pred_V_V { axis {  { pred_V_V_TDATA out_data 1 16 }  { pred_V_V_TVALID out_vld 1 1 }  { pred_V_V_TREADY out_acc 0 1 } } }
}
