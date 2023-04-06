############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project cnn
set_top cnn
add_files lib/activ_fun.c
add_files cnn.c
add_files lib/conv.c
add_files lib/dense.c
add_files lib/flat.c
add_files lib/pool.c
add_files lib/utils.c
add_files -tb cnn_tb.c
add_files -tb tb/in.dat
add_files -tb tb/out.dat
open_solution "solution1"
set_part {xq7z100rf900-2IL} -tool vivado
create_clock -period 100 -name default
set_clock_uncertainty 0.12
#source "./cnn/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
