############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project cnn
set_top cnn
add_files lib/utils.cpp
add_files lib/pool.cpp
add_files lib/flat.cpp
add_files lib/dense.cpp
add_files lib/conv.cpp
add_files cnn.cpp
add_files lib/activ_fun.cpp
add_files -tb tb/out.dat -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
add_files -tb tb/in.dat -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
add_files -tb cnn_tb.cpp -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xq7vx980trf1930-2L}
create_clock -period 100 -name default
config_sdx -target none
set_clock_uncertainty 0.12
#source "./cnn/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog
