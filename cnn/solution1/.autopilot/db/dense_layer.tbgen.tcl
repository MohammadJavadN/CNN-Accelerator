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
	{ prediction float 32 regular {array 10 { 0 3 } 0 1 }  }
	{ flat_array float 32 regular {array 160 { 1 3 } 1 1 } {global 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "prediction", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "flat_array", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} ]}
# RTL Port declarations: 
set portNum 13
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ prediction_address0 sc_out sc_lv 4 signal 0 } 
	{ prediction_ce0 sc_out sc_logic 1 signal 0 } 
	{ prediction_we0 sc_out sc_logic 1 signal 0 } 
	{ prediction_d0 sc_out sc_lv 32 signal 0 } 
	{ flat_array_address0 sc_out sc_lv 8 signal 1 } 
	{ flat_array_ce0 sc_out sc_logic 1 signal 1 } 
	{ flat_array_q0 sc_in sc_lv 32 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "prediction_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "prediction", "role": "address0" }} , 
 	{ "name": "prediction_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "prediction", "role": "ce0" }} , 
 	{ "name": "prediction_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "prediction", "role": "we0" }} , 
 	{ "name": "prediction_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "prediction", "role": "d0" }} , 
 	{ "name": "flat_array_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "flat_array", "role": "address0" }} , 
 	{ "name": "flat_array_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "flat_array", "role": "ce0" }} , 
 	{ "name": "flat_array_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "flat_array", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7"],
		"CDFG" : "dense_layer",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "3313", "EstimateLatencyMax" : "3313",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "prediction", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dense_weights", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "flat_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_biases", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_weights_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_biases_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_array_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cnn_fadd_32ns_32ncud_U33", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cnn_fmul_32ns_32ng8j_U34", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cnn_fdiv_32ns_32nhbi_U35", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cnn_fexp_32ns_32nibs_U36", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	dense_layer {
		prediction {Type O LastRead -1 FirstWrite 7}
		dense_weights {Type I LastRead -1 FirstWrite -1}
		flat_array {Type I LastRead 3 FirstWrite -1}
		dense_biases {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "3313", "Max" : "3313"}
	, {"Name" : "Interval", "Min" : "3313", "Max" : "3313"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	prediction { ap_memory {  { prediction_address0 mem_address 1 4 }  { prediction_ce0 mem_ce 1 1 }  { prediction_we0 mem_we 1 1 }  { prediction_d0 mem_din 1 32 } } }
	flat_array { ap_memory {  { flat_array_address0 mem_address 1 8 }  { flat_array_ce0 mem_ce 1 1 }  { flat_array_q0 mem_dout 0 32 } } }
}
