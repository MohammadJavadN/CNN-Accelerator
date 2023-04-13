set moduleName makeItZero
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
set C_modelName {makeItZero}
set C_modelType { void 0 }
set C_modelArgList {
	{ A_0_V int 14 regular {array 64 { 0 3 } 0 1 }  }
	{ A_1_V int 14 regular {array 64 { 0 3 } 0 1 }  }
	{ A_2_V int 14 regular {array 64 { 0 3 } 0 1 }  }
	{ A_3_V int 14 regular {array 64 { 0 3 } 0 1 }  }
	{ A_4_V int 14 regular {array 64 { 0 3 } 0 1 }  }
	{ A_5_V int 14 regular {array 64 { 0 3 } 0 1 }  }
	{ A_6_V int 14 regular {array 64 { 0 3 } 0 1 }  }
	{ A_7_V int 14 regular {array 64 { 0 3 } 0 1 }  }
	{ A_8_V int 14 regular {array 64 { 0 3 } 0 1 }  }
	{ A_9_V int 14 regular {array 64 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "A_0_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "A_1_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "A_2_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "A_3_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "A_4_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "A_5_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "A_6_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "A_7_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "A_8_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} , 
 	{ "Name" : "A_9_V", "interface" : "memory", "bitwidth" : 14, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 46
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ A_0_V_address0 sc_out sc_lv 6 signal 0 } 
	{ A_0_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ A_0_V_we0 sc_out sc_logic 1 signal 0 } 
	{ A_0_V_d0 sc_out sc_lv 14 signal 0 } 
	{ A_1_V_address0 sc_out sc_lv 6 signal 1 } 
	{ A_1_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ A_1_V_we0 sc_out sc_logic 1 signal 1 } 
	{ A_1_V_d0 sc_out sc_lv 14 signal 1 } 
	{ A_2_V_address0 sc_out sc_lv 6 signal 2 } 
	{ A_2_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ A_2_V_we0 sc_out sc_logic 1 signal 2 } 
	{ A_2_V_d0 sc_out sc_lv 14 signal 2 } 
	{ A_3_V_address0 sc_out sc_lv 6 signal 3 } 
	{ A_3_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ A_3_V_we0 sc_out sc_logic 1 signal 3 } 
	{ A_3_V_d0 sc_out sc_lv 14 signal 3 } 
	{ A_4_V_address0 sc_out sc_lv 6 signal 4 } 
	{ A_4_V_ce0 sc_out sc_logic 1 signal 4 } 
	{ A_4_V_we0 sc_out sc_logic 1 signal 4 } 
	{ A_4_V_d0 sc_out sc_lv 14 signal 4 } 
	{ A_5_V_address0 sc_out sc_lv 6 signal 5 } 
	{ A_5_V_ce0 sc_out sc_logic 1 signal 5 } 
	{ A_5_V_we0 sc_out sc_logic 1 signal 5 } 
	{ A_5_V_d0 sc_out sc_lv 14 signal 5 } 
	{ A_6_V_address0 sc_out sc_lv 6 signal 6 } 
	{ A_6_V_ce0 sc_out sc_logic 1 signal 6 } 
	{ A_6_V_we0 sc_out sc_logic 1 signal 6 } 
	{ A_6_V_d0 sc_out sc_lv 14 signal 6 } 
	{ A_7_V_address0 sc_out sc_lv 6 signal 7 } 
	{ A_7_V_ce0 sc_out sc_logic 1 signal 7 } 
	{ A_7_V_we0 sc_out sc_logic 1 signal 7 } 
	{ A_7_V_d0 sc_out sc_lv 14 signal 7 } 
	{ A_8_V_address0 sc_out sc_lv 6 signal 8 } 
	{ A_8_V_ce0 sc_out sc_logic 1 signal 8 } 
	{ A_8_V_we0 sc_out sc_logic 1 signal 8 } 
	{ A_8_V_d0 sc_out sc_lv 14 signal 8 } 
	{ A_9_V_address0 sc_out sc_lv 6 signal 9 } 
	{ A_9_V_ce0 sc_out sc_logic 1 signal 9 } 
	{ A_9_V_we0 sc_out sc_logic 1 signal 9 } 
	{ A_9_V_d0 sc_out sc_lv 14 signal 9 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "A_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "A_0_V", "role": "address0" }} , 
 	{ "name": "A_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_0_V", "role": "ce0" }} , 
 	{ "name": "A_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_0_V", "role": "we0" }} , 
 	{ "name": "A_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "A_0_V", "role": "d0" }} , 
 	{ "name": "A_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "A_1_V", "role": "address0" }} , 
 	{ "name": "A_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_1_V", "role": "ce0" }} , 
 	{ "name": "A_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_1_V", "role": "we0" }} , 
 	{ "name": "A_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "A_1_V", "role": "d0" }} , 
 	{ "name": "A_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "A_2_V", "role": "address0" }} , 
 	{ "name": "A_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_2_V", "role": "ce0" }} , 
 	{ "name": "A_2_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_2_V", "role": "we0" }} , 
 	{ "name": "A_2_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "A_2_V", "role": "d0" }} , 
 	{ "name": "A_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "A_3_V", "role": "address0" }} , 
 	{ "name": "A_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_3_V", "role": "ce0" }} , 
 	{ "name": "A_3_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_3_V", "role": "we0" }} , 
 	{ "name": "A_3_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "A_3_V", "role": "d0" }} , 
 	{ "name": "A_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "A_4_V", "role": "address0" }} , 
 	{ "name": "A_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_4_V", "role": "ce0" }} , 
 	{ "name": "A_4_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_4_V", "role": "we0" }} , 
 	{ "name": "A_4_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "A_4_V", "role": "d0" }} , 
 	{ "name": "A_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "A_5_V", "role": "address0" }} , 
 	{ "name": "A_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_5_V", "role": "ce0" }} , 
 	{ "name": "A_5_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_5_V", "role": "we0" }} , 
 	{ "name": "A_5_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "A_5_V", "role": "d0" }} , 
 	{ "name": "A_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "A_6_V", "role": "address0" }} , 
 	{ "name": "A_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_6_V", "role": "ce0" }} , 
 	{ "name": "A_6_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_6_V", "role": "we0" }} , 
 	{ "name": "A_6_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "A_6_V", "role": "d0" }} , 
 	{ "name": "A_7_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "A_7_V", "role": "address0" }} , 
 	{ "name": "A_7_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_7_V", "role": "ce0" }} , 
 	{ "name": "A_7_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_7_V", "role": "we0" }} , 
 	{ "name": "A_7_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "A_7_V", "role": "d0" }} , 
 	{ "name": "A_8_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "A_8_V", "role": "address0" }} , 
 	{ "name": "A_8_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_8_V", "role": "ce0" }} , 
 	{ "name": "A_8_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_8_V", "role": "we0" }} , 
 	{ "name": "A_8_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "A_8_V", "role": "d0" }} , 
 	{ "name": "A_9_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "A_9_V", "role": "address0" }} , 
 	{ "name": "A_9_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_9_V", "role": "ce0" }} , 
 	{ "name": "A_9_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_9_V", "role": "we0" }} , 
 	{ "name": "A_9_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "A_9_V", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "makeItZero",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "821", "EstimateLatencyMax" : "821",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "A_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "A_1_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "A_2_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "A_3_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "A_4_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "A_5_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "A_6_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "A_7_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "A_8_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "A_9_V", "Type" : "Memory", "Direction" : "O"}]}]}


set ArgLastReadFirstWriteLatency {
	makeItZero {
		A_0_V {Type O LastRead -1 FirstWrite 3}
		A_1_V {Type O LastRead -1 FirstWrite 3}
		A_2_V {Type O LastRead -1 FirstWrite 3}
		A_3_V {Type O LastRead -1 FirstWrite 3}
		A_4_V {Type O LastRead -1 FirstWrite 3}
		A_5_V {Type O LastRead -1 FirstWrite 3}
		A_6_V {Type O LastRead -1 FirstWrite 3}
		A_7_V {Type O LastRead -1 FirstWrite 3}
		A_8_V {Type O LastRead -1 FirstWrite 3}
		A_9_V {Type O LastRead -1 FirstWrite 3}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "821", "Max" : "821"}
	, {"Name" : "Interval", "Min" : "821", "Max" : "821"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	A_0_V { ap_memory {  { A_0_V_address0 mem_address 1 6 }  { A_0_V_ce0 mem_ce 1 1 }  { A_0_V_we0 mem_we 1 1 }  { A_0_V_d0 mem_din 1 14 } } }
	A_1_V { ap_memory {  { A_1_V_address0 mem_address 1 6 }  { A_1_V_ce0 mem_ce 1 1 }  { A_1_V_we0 mem_we 1 1 }  { A_1_V_d0 mem_din 1 14 } } }
	A_2_V { ap_memory {  { A_2_V_address0 mem_address 1 6 }  { A_2_V_ce0 mem_ce 1 1 }  { A_2_V_we0 mem_we 1 1 }  { A_2_V_d0 mem_din 1 14 } } }
	A_3_V { ap_memory {  { A_3_V_address0 mem_address 1 6 }  { A_3_V_ce0 mem_ce 1 1 }  { A_3_V_we0 mem_we 1 1 }  { A_3_V_d0 mem_din 1 14 } } }
	A_4_V { ap_memory {  { A_4_V_address0 mem_address 1 6 }  { A_4_V_ce0 mem_ce 1 1 }  { A_4_V_we0 mem_we 1 1 }  { A_4_V_d0 mem_din 1 14 } } }
	A_5_V { ap_memory {  { A_5_V_address0 mem_address 1 6 }  { A_5_V_ce0 mem_ce 1 1 }  { A_5_V_we0 mem_we 1 1 }  { A_5_V_d0 mem_din 1 14 } } }
	A_6_V { ap_memory {  { A_6_V_address0 mem_address 1 6 }  { A_6_V_ce0 mem_ce 1 1 }  { A_6_V_we0 mem_we 1 1 }  { A_6_V_d0 mem_din 1 14 } } }
	A_7_V { ap_memory {  { A_7_V_address0 mem_address 1 6 }  { A_7_V_ce0 mem_ce 1 1 }  { A_7_V_we0 mem_we 1 1 }  { A_7_V_d0 mem_din 1 14 } } }
	A_8_V { ap_memory {  { A_8_V_address0 mem_address 1 6 }  { A_8_V_ce0 mem_ce 1 1 }  { A_8_V_we0 mem_we 1 1 }  { A_8_V_d0 mem_din 1 14 } } }
	A_9_V { ap_memory {  { A_9_V_address0 mem_address 1 6 }  { A_9_V_ce0 mem_ce 1 1 }  { A_9_V_we0 mem_we 1 1 }  { A_9_V_d0 mem_din 1 14 } } }
}
