set moduleName max_pool
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
set C_modelName {max_pool}
set C_modelType { void 0 }
set C_modelArgList {
	{ feature_0_V int 14 regular {array 576 { 1 3 } 1 1 }  }
	{ feature_1_V int 14 regular {array 576 { 1 3 } 1 1 }  }
	{ feature_2_V int 14 regular {array 576 { 1 3 } 1 1 }  }
	{ feature_3_V int 14 regular {array 576 { 1 3 } 1 1 }  }
	{ feature_4_V int 14 regular {array 576 { 1 3 } 1 1 }  }
	{ feature_5_V int 14 regular {array 576 { 1 3 } 1 1 }  }
	{ feature_V_offset int 3 regular  }
	{ pool_feature_V int 15 regular {array 864 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "feature_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "feature_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "feature_2_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "feature_3_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "feature_4_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "feature_5_V", "interface" : "memory", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "feature_V_offset", "interface" : "wire", "bitwidth" : 3, "direction" : "READONLY"} , 
 	{ "Name" : "pool_feature_V", "interface" : "memory", "bitwidth" : 15, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 29
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ feature_0_V_address0 sc_out sc_lv 10 signal 0 } 
	{ feature_0_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ feature_0_V_q0 sc_in sc_lv 14 signal 0 } 
	{ feature_1_V_address0 sc_out sc_lv 10 signal 1 } 
	{ feature_1_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ feature_1_V_q0 sc_in sc_lv 14 signal 1 } 
	{ feature_2_V_address0 sc_out sc_lv 10 signal 2 } 
	{ feature_2_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ feature_2_V_q0 sc_in sc_lv 14 signal 2 } 
	{ feature_3_V_address0 sc_out sc_lv 10 signal 3 } 
	{ feature_3_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ feature_3_V_q0 sc_in sc_lv 14 signal 3 } 
	{ feature_4_V_address0 sc_out sc_lv 10 signal 4 } 
	{ feature_4_V_ce0 sc_out sc_logic 1 signal 4 } 
	{ feature_4_V_q0 sc_in sc_lv 14 signal 4 } 
	{ feature_5_V_address0 sc_out sc_lv 10 signal 5 } 
	{ feature_5_V_ce0 sc_out sc_logic 1 signal 5 } 
	{ feature_5_V_q0 sc_in sc_lv 14 signal 5 } 
	{ feature_V_offset sc_in sc_lv 3 signal 6 } 
	{ pool_feature_V_address0 sc_out sc_lv 10 signal 7 } 
	{ pool_feature_V_ce0 sc_out sc_logic 1 signal 7 } 
	{ pool_feature_V_we0 sc_out sc_logic 1 signal 7 } 
	{ pool_feature_V_d0 sc_out sc_lv 15 signal 7 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "feature_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "feature_0_V", "role": "address0" }} , 
 	{ "name": "feature_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "feature_0_V", "role": "ce0" }} , 
 	{ "name": "feature_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "feature_0_V", "role": "q0" }} , 
 	{ "name": "feature_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "feature_1_V", "role": "address0" }} , 
 	{ "name": "feature_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "feature_1_V", "role": "ce0" }} , 
 	{ "name": "feature_1_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "feature_1_V", "role": "q0" }} , 
 	{ "name": "feature_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "feature_2_V", "role": "address0" }} , 
 	{ "name": "feature_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "feature_2_V", "role": "ce0" }} , 
 	{ "name": "feature_2_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "feature_2_V", "role": "q0" }} , 
 	{ "name": "feature_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "feature_3_V", "role": "address0" }} , 
 	{ "name": "feature_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "feature_3_V", "role": "ce0" }} , 
 	{ "name": "feature_3_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "feature_3_V", "role": "q0" }} , 
 	{ "name": "feature_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "feature_4_V", "role": "address0" }} , 
 	{ "name": "feature_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "feature_4_V", "role": "ce0" }} , 
 	{ "name": "feature_4_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "feature_4_V", "role": "q0" }} , 
 	{ "name": "feature_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "feature_5_V", "role": "address0" }} , 
 	{ "name": "feature_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "feature_5_V", "role": "ce0" }} , 
 	{ "name": "feature_5_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "feature_5_V", "role": "q0" }} , 
 	{ "name": "feature_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "feature_V_offset", "role": "default" }} , 
 	{ "name": "pool_feature_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "pool_feature_V", "role": "address0" }} , 
 	{ "name": "pool_feature_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pool_feature_V", "role": "ce0" }} , 
 	{ "name": "pool_feature_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pool_feature_V", "role": "we0" }} , 
 	{ "name": "pool_feature_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":15, "type": "signal", "bundle":{"name": "pool_feature_V", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "max_pool",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2041", "EstimateLatencyMax" : "2041",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "feature_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "feature_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "feature_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "feature_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "feature_4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "feature_5_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "feature_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "pool_feature_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cnn_mux_63_15_1_1_U11", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	max_pool {
		feature_0_V {Type I LastRead 4 FirstWrite -1}
		feature_1_V {Type I LastRead 4 FirstWrite -1}
		feature_2_V {Type I LastRead 4 FirstWrite -1}
		feature_3_V {Type I LastRead 4 FirstWrite -1}
		feature_4_V {Type I LastRead 4 FirstWrite -1}
		feature_5_V {Type I LastRead 4 FirstWrite -1}
		feature_V_offset {Type I LastRead 0 FirstWrite -1}
		pool_feature_V {Type O LastRead -1 FirstWrite 3}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "2041", "Max" : "2041"}
	, {"Name" : "Interval", "Min" : "2041", "Max" : "2041"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	feature_0_V { ap_memory {  { feature_0_V_address0 mem_address 1 10 }  { feature_0_V_ce0 mem_ce 1 1 }  { feature_0_V_q0 mem_dout 0 14 } } }
	feature_1_V { ap_memory {  { feature_1_V_address0 mem_address 1 10 }  { feature_1_V_ce0 mem_ce 1 1 }  { feature_1_V_q0 mem_dout 0 14 } } }
	feature_2_V { ap_memory {  { feature_2_V_address0 mem_address 1 10 }  { feature_2_V_ce0 mem_ce 1 1 }  { feature_2_V_q0 mem_dout 0 14 } } }
	feature_3_V { ap_memory {  { feature_3_V_address0 mem_address 1 10 }  { feature_3_V_ce0 mem_ce 1 1 }  { feature_3_V_q0 mem_dout 0 14 } } }
	feature_4_V { ap_memory {  { feature_4_V_address0 mem_address 1 10 }  { feature_4_V_ce0 mem_ce 1 1 }  { feature_4_V_q0 mem_dout 0 14 } } }
	feature_5_V { ap_memory {  { feature_5_V_address0 mem_address 1 10 }  { feature_5_V_ce0 mem_ce 1 1 }  { feature_5_V_q0 mem_dout 0 14 } } }
	feature_V_offset { ap_none {  { feature_V_offset in_data 0 3 } } }
	pool_feature_V { ap_memory {  { pool_feature_V_address0 mem_address 1 10 }  { pool_feature_V_ce0 mem_ce 1 1 }  { pool_feature_V_we0 mem_we 1 1 }  { pool_feature_V_d0 mem_din 1 15 } } }
}
