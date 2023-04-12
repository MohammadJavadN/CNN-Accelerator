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
	{ feature_0 float 32 regular {array 576 { 1 3 } 1 1 }  }
	{ feature_1 float 32 regular {array 576 { 1 3 } 1 1 }  }
	{ feature_2 float 32 regular {array 576 { 1 3 } 1 1 }  }
	{ feature_3 float 32 regular {array 576 { 1 3 } 1 1 }  }
	{ feature_4 float 32 regular {array 576 { 1 3 } 1 1 }  }
	{ feature_5 float 32 regular {array 576 { 1 3 } 1 1 }  }
	{ feature_offset int 3 regular  }
	{ pool_feature float 32 regular {array 864 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "feature_0", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "feature_1", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "feature_2", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "feature_3", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "feature_4", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "feature_5", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "feature_offset", "interface" : "wire", "bitwidth" : 3, "direction" : "READONLY"} , 
 	{ "Name" : "pool_feature", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 29
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ feature_0_address0 sc_out sc_lv 10 signal 0 } 
	{ feature_0_ce0 sc_out sc_logic 1 signal 0 } 
	{ feature_0_q0 sc_in sc_lv 32 signal 0 } 
	{ feature_1_address0 sc_out sc_lv 10 signal 1 } 
	{ feature_1_ce0 sc_out sc_logic 1 signal 1 } 
	{ feature_1_q0 sc_in sc_lv 32 signal 1 } 
	{ feature_2_address0 sc_out sc_lv 10 signal 2 } 
	{ feature_2_ce0 sc_out sc_logic 1 signal 2 } 
	{ feature_2_q0 sc_in sc_lv 32 signal 2 } 
	{ feature_3_address0 sc_out sc_lv 10 signal 3 } 
	{ feature_3_ce0 sc_out sc_logic 1 signal 3 } 
	{ feature_3_q0 sc_in sc_lv 32 signal 3 } 
	{ feature_4_address0 sc_out sc_lv 10 signal 4 } 
	{ feature_4_ce0 sc_out sc_logic 1 signal 4 } 
	{ feature_4_q0 sc_in sc_lv 32 signal 4 } 
	{ feature_5_address0 sc_out sc_lv 10 signal 5 } 
	{ feature_5_ce0 sc_out sc_logic 1 signal 5 } 
	{ feature_5_q0 sc_in sc_lv 32 signal 5 } 
	{ feature_offset sc_in sc_lv 3 signal 6 } 
	{ pool_feature_address0 sc_out sc_lv 10 signal 7 } 
	{ pool_feature_ce0 sc_out sc_logic 1 signal 7 } 
	{ pool_feature_we0 sc_out sc_logic 1 signal 7 } 
	{ pool_feature_d0 sc_out sc_lv 32 signal 7 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "feature_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "feature_0", "role": "address0" }} , 
 	{ "name": "feature_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "feature_0", "role": "ce0" }} , 
 	{ "name": "feature_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "feature_0", "role": "q0" }} , 
 	{ "name": "feature_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "feature_1", "role": "address0" }} , 
 	{ "name": "feature_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "feature_1", "role": "ce0" }} , 
 	{ "name": "feature_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "feature_1", "role": "q0" }} , 
 	{ "name": "feature_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "feature_2", "role": "address0" }} , 
 	{ "name": "feature_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "feature_2", "role": "ce0" }} , 
 	{ "name": "feature_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "feature_2", "role": "q0" }} , 
 	{ "name": "feature_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "feature_3", "role": "address0" }} , 
 	{ "name": "feature_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "feature_3", "role": "ce0" }} , 
 	{ "name": "feature_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "feature_3", "role": "q0" }} , 
 	{ "name": "feature_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "feature_4", "role": "address0" }} , 
 	{ "name": "feature_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "feature_4", "role": "ce0" }} , 
 	{ "name": "feature_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "feature_4", "role": "q0" }} , 
 	{ "name": "feature_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "feature_5", "role": "address0" }} , 
 	{ "name": "feature_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "feature_5", "role": "ce0" }} , 
 	{ "name": "feature_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "feature_5", "role": "q0" }} , 
 	{ "name": "feature_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "feature_offset", "role": "default" }} , 
 	{ "name": "pool_feature_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "pool_feature", "role": "address0" }} , 
 	{ "name": "pool_feature_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pool_feature", "role": "ce0" }} , 
 	{ "name": "pool_feature_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pool_feature", "role": "we0" }} , 
 	{ "name": "pool_feature_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "pool_feature", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
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
			{"Name" : "feature_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "feature_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "feature_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "feature_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "feature_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "feature_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "feature_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "pool_feature", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cnn_fcmp_32ns_32nbkb_U1", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cnn_mux_63_32_1_1_U2", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	max_pool {
		feature_0 {Type I LastRead 4 FirstWrite -1}
		feature_1 {Type I LastRead 4 FirstWrite -1}
		feature_2 {Type I LastRead 4 FirstWrite -1}
		feature_3 {Type I LastRead 4 FirstWrite -1}
		feature_4 {Type I LastRead 4 FirstWrite -1}
		feature_5 {Type I LastRead 4 FirstWrite -1}
		feature_offset {Type I LastRead 0 FirstWrite -1}
		pool_feature {Type O LastRead -1 FirstWrite 3}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "2041", "Max" : "2041"}
	, {"Name" : "Interval", "Min" : "2041", "Max" : "2041"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	feature_0 { ap_memory {  { feature_0_address0 mem_address 1 10 }  { feature_0_ce0 mem_ce 1 1 }  { feature_0_q0 mem_dout 0 32 } } }
	feature_1 { ap_memory {  { feature_1_address0 mem_address 1 10 }  { feature_1_ce0 mem_ce 1 1 }  { feature_1_q0 mem_dout 0 32 } } }
	feature_2 { ap_memory {  { feature_2_address0 mem_address 1 10 }  { feature_2_ce0 mem_ce 1 1 }  { feature_2_q0 mem_dout 0 32 } } }
	feature_3 { ap_memory {  { feature_3_address0 mem_address 1 10 }  { feature_3_ce0 mem_ce 1 1 }  { feature_3_q0 mem_dout 0 32 } } }
	feature_4 { ap_memory {  { feature_4_address0 mem_address 1 10 }  { feature_4_ce0 mem_ce 1 1 }  { feature_4_q0 mem_dout 0 32 } } }
	feature_5 { ap_memory {  { feature_5_address0 mem_address 1 10 }  { feature_5_ce0 mem_ce 1 1 }  { feature_5_q0 mem_dout 0 32 } } }
	feature_offset { ap_none {  { feature_offset in_data 0 3 } } }
	pool_feature { ap_memory {  { pool_feature_address0 mem_address 1 10 }  { pool_feature_ce0 mem_ce 1 1 }  { pool_feature_we0 mem_we 1 1 }  { pool_feature_d0 mem_din 1 32 } } }
}
