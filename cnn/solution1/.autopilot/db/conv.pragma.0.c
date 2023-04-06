# 1 "lib/conv.c"
# 1 "lib/conv.c" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 147 "<built-in>" 3
# 1 "<command line>" 1






# 1 "E:/Xilinx/Vivado/2019.1/common/technology/autopilot\\etc/autopilot_ssdm_op.h" 1
# 305 "E:/Xilinx/Vivado/2019.1/common/technology/autopilot\\etc/autopilot_ssdm_op.h"
    void _ssdm_op_IfRead() __attribute__ ((nothrow));
    void _ssdm_op_IfWrite() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbRead() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbWrite() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanRead() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanWrite() __attribute__ ((nothrow));


    void _ssdm_StreamRead() __attribute__ ((nothrow));
    void _ssdm_StreamWrite() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbRead() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbWrite() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanRead() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanWrite() __attribute__ ((nothrow));




    void _ssdm_op_MemShiftRead() __attribute__ ((nothrow));

    void _ssdm_op_Wait() __attribute__ ((nothrow));
    void _ssdm_op_Poll() __attribute__ ((nothrow));

    void _ssdm_op_Return() __attribute__ ((nothrow));


    void _ssdm_op_SpecSynModule() __attribute__ ((nothrow));
    void _ssdm_op_SpecTopModule() __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDecl() __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDef() __attribute__ ((nothrow));
    void _ssdm_op_SpecPort() __attribute__ ((nothrow));
    void _ssdm_op_SpecConnection() __attribute__ ((nothrow));
    void _ssdm_op_SpecChannel() __attribute__ ((nothrow));
    void _ssdm_op_SpecSensitive() __attribute__ ((nothrow));
    void _ssdm_op_SpecModuleInst() __attribute__ ((nothrow));
    void _ssdm_op_SpecPortMap() __attribute__ ((nothrow));

    void _ssdm_op_SpecReset() __attribute__ ((nothrow));

    void _ssdm_op_SpecPlatform() __attribute__ ((nothrow));
    void _ssdm_op_SpecClockDomain() __attribute__ ((nothrow));
    void _ssdm_op_SpecPowerDomain() __attribute__ ((nothrow));

    int _ssdm_op_SpecRegionBegin() __attribute__ ((nothrow));
    int _ssdm_op_SpecRegionEnd() __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopName() __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopTripCount() __attribute__ ((nothrow));

    int _ssdm_op_SpecStateBegin() __attribute__ ((nothrow));
    int _ssdm_op_SpecStateEnd() __attribute__ ((nothrow));

    void _ssdm_op_SpecInterface() __attribute__ ((nothrow));

    void _ssdm_op_SpecPipeline() __attribute__ ((nothrow));
    void _ssdm_op_SpecDataflowPipeline() __attribute__ ((nothrow));


    void _ssdm_op_SpecLatency() __attribute__ ((nothrow));
    void _ssdm_op_SpecParallel() __attribute__ ((nothrow));
    void _ssdm_op_SpecProtocol() __attribute__ ((nothrow));
    void _ssdm_op_SpecOccurrence() __attribute__ ((nothrow));

    void _ssdm_op_SpecResource() __attribute__ ((nothrow));
    void _ssdm_op_SpecResourceLimit() __attribute__ ((nothrow));
    void _ssdm_op_SpecCHCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecFUCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecIFCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecIPCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecKeepValue() __attribute__ ((nothrow));
    void _ssdm_op_SpecMemCore() __attribute__ ((nothrow));

    void _ssdm_op_SpecExt() __attribute__ ((nothrow));




    void _ssdm_SpecArrayDimSize() __attribute__ ((nothrow));

    void _ssdm_RegionBegin() __attribute__ ((nothrow));
    void _ssdm_RegionEnd() __attribute__ ((nothrow));

    void _ssdm_Unroll() __attribute__ ((nothrow));
    void _ssdm_UnrollRegion() __attribute__ ((nothrow));

    void _ssdm_InlineAll() __attribute__ ((nothrow));
    void _ssdm_InlineLoop() __attribute__ ((nothrow));
    void _ssdm_Inline() __attribute__ ((nothrow));
    void _ssdm_InlineSelf() __attribute__ ((nothrow));
    void _ssdm_InlineRegion() __attribute__ ((nothrow));

    void _ssdm_SpecArrayMap() __attribute__ ((nothrow));
    void _ssdm_SpecArrayPartition() __attribute__ ((nothrow));
    void _ssdm_SpecArrayReshape() __attribute__ ((nothrow));

    void _ssdm_SpecStream() __attribute__ ((nothrow));

    void _ssdm_op_SpecStable() __attribute__ ((nothrow));
    void _ssdm_op_SpecStableContent() __attribute__ ((nothrow));

    void _ssdm_op_SpecPipoDepth() __attribute__ ((nothrow));

    void _ssdm_SpecExpr() __attribute__ ((nothrow));
    void _ssdm_SpecExprBalance() __attribute__ ((nothrow));

    void _ssdm_SpecDependence() __attribute__ ((nothrow));

    void _ssdm_SpecLoopMerge() __attribute__ ((nothrow));
    void _ssdm_SpecLoopFlatten() __attribute__ ((nothrow));
    void _ssdm_SpecLoopRewind() __attribute__ ((nothrow));

    void _ssdm_SpecFuncInstantiation() __attribute__ ((nothrow));
    void _ssdm_SpecFuncBuffer() __attribute__ ((nothrow));
    void _ssdm_SpecFuncExtract() __attribute__ ((nothrow));
    void _ssdm_SpecConstant() __attribute__ ((nothrow));

    void _ssdm_DataPack() __attribute__ ((nothrow));
    void _ssdm_SpecDataPack() __attribute__ ((nothrow));

    void _ssdm_op_SpecBitsMap() __attribute__ ((nothrow));
    void _ssdm_op_SpecLicense() __attribute__ ((nothrow));
# 8 "<command line>" 2
# 1 "<built-in>" 2
# 1 "lib/conv.c" 2
# 1 "lib/conv.h" 1


# 1 "lib/definitions.h" 1

typedef float T;
# 4 "lib/conv.h" 2

void convolutional_layer1
(
  T src[28][28],
  T dst[6][(28 - (5 - 1))][(28 - (5 - 1))]
);
void convolutional_layer2
(
  T src[((28 - (5 - 1)) / 2)][((28 - (5 - 1)) / 2)],
  T dst[10][(((28 - (5 - 1)) / 2) - (5 - 1))][(((28 - (5 - 1)) / 2) - (5 - 1))],
  T weights[10][5][5]
);
# 2 "lib/conv.c" 2

# 1 "lib/activ_fun.h" 1




float relu (float x);

void soft_max(float dense_array [10], float pred[10]);
# 4 "lib/conv.c" 2
# 1 "lib/conv1_weights.h" 1
# 11 "lib/conv1_weights.h"
float conv1_weights [6][5][5]
 = {
   {
    { 0.13474203646183014, 0.6672362089157104, 0.28353938460350037, -0.29945796728134155, -0.3671765923500061 },
    { -0.1401754766702652, 0.382133811712265, 0.8576546311378479, 0.3098417818546295, -0.21757467091083527 },
    { -0.6485444903373718, -0.3013373613357544, 0.4267783761024475, 0.53514164686203, 0.032296858727931976 },
    { -0.7751998901367188, -0.46186673641204834, 0.00652431882917881, 0.25846588611602783, 0.26807287335395813 },
    { 0.012986483052372932, -0.09105897694826126, -0.26773154735565186, 0.09382887929677963, 0.191905215382576 }
   },
   {
    { -0.02385040931403637, -0.031160548329353333, 0.3090594410896301, 0.6413240432739258, 0.592175304889679 },
    { 0.07587233185768127, -0.1691407859325409, -0.8496178388595581, -0.5792330503463745, -0.4356194734573364 },
    { -0.1353493481874466, 0.053402360528707504, -0.26683735847473145, -0.5959281325340271, -0.5683253407478333 },
    { -0.10031168162822723, -0.08836523443460464, 0.06417819857597351, 0.02200276032090187, 0.03445372357964516 },
    { 0.387068510055542, 0.36915135383605957, 0.41326871514320374, 0.5660091638565063, 0.2802305817604065 }
   },
   {
    { -0.02255626767873764, 0.07306614518165588, -0.4778209924697876, -0.33542996644973755, 0.05825220048427582 },
    { -0.009524168446660042, -0.12914729118347168, -0.2359078973531723, 0.3059742748737335, 0.13217155635356903 },
    { -0.08651960641145706, -0.3466179668903351, 0.18586228787899017, 0.41708481311798096, 0.11655420064926147 },
    { 0.17241926491260529, 0.22613492608070374, 0.5611371994018555, 0.05630776286125183, -0.025982484221458435 },
    { 0.3524865210056305, 0.29219144582748413, 0.1057896763086319, -0.1625877469778061, -0.08135053515434265 }
   },
   {
    { 0.014891487546265125, -0.012018880806863308, 0.10676957666873932, -0.08783546090126038, 0.01675420254468918 },
    { -0.10367176681756973, -0.19901156425476074, -0.08866021037101746, -0.06800563633441925, 0.37947943806648254 },
    { 0.07551214098930359, 0.5715181827545166, 0.4846871495246887, -0.032491959631443024, 0.1728784441947937 },
    { 0.4785512685775757, 0.6110016107559204, -0.3495207726955414, -0.199968159198761, 0.16498295962810516 },
    { -0.14714622497558594, -0.11962997168302536, -0.4347235858440399, 0.09710483253002167, 0.019211264327168465 }
   },
   {
    { -0.5374849438667297, -0.5525826215744019, -0.4964769780635834, -0.038269951939582825, 0.48413950204849243 },
    { -0.6308823227882385, -0.10237762331962585, -0.3838656544685364, 0.1577487736940384, 0.45083197951316833 },
    { -0.42427492141723633, -0.06532292813062668, -0.30862298607826233, 0.44795653223991394, 0.5103170871734619 },
    { -0.6438390016555786, -0.059149131178855896, -0.11164169013500214, 0.28841859102249146, 0.33263471722602844 },
    { -0.2516137361526489, -0.24590890109539032, -0.24902276694774628, 0.2847209870815277, 0.2519620656967163 }
   },
   {
    { -0.1451496034860611, -0.09445218741893768, -0.20678357779979706, -0.08008617907762527, -0.1765138953924179 },
    { 0.14230836927890778, 0.2819817364215851, -0.11746200174093246, -0.2778837978839874, -0.5415722131729126 },
    { 0.07669371366500854, 0.4818103611469269, 0.1636686623096466, -0.4298378527164459, -0.761951208114624 },
    { 0.06703058630228043, 0.3942958414554596, 0.6042513847351074, 0.04276546090841293, -0.7337526679039001 },
    { 0.0995495393872261, 0.19498509168624878, 0.57554030418396, 0.30943575501441956, -0.020915284752845764 }
   }
  };


float conv1_biases [6] = { -0.5536415576934814, -0.08243060857057571, -0.038127269595861435, -0.059531763195991516, -0.09326481074094772, -0.12440291792154312 };
# 5 "lib/conv.c" 2

void convolutional_layer1
(
  T src[28][28],
  T dst[6][(28 - (5 - 1))][(28 - (5 - 1))]
)
{_ssdm_SpecArrayDimSize(src, 28);_ssdm_SpecArrayDimSize(dst, 6);
#pragma HLS ARRAY_PARTITION variable=&dst dim=1 complete




 static T linebuf[5*28];


#pragma HLS ARRAY_PARTITION variable=&linebuf dim=1 complete
#pragma HLS INLINE

 T in_val;
    T out_val[6];
    T win_val;
    conv1:for(int row = 0; row < 28; row++) {
        conv2:for(int col = 0; col < 28; col++) {
#pragma HLS DEPENDENCE variable=&linebuf inter false
#pragma HLS PIPELINE
 in_val = src[row][col];
            conv3:for(int i = 0; i < 5; i++) {
                conv4:for (int j = 0; j < 28; j++)
                {
                    win_val = (i < 5 - 1 || j < 28 - 1) ? linebuf[i*28 + j] : in_val;
                    if (j>=28 -5)
                    {
                        for (int f = 0; f < 6; f++)
                        {
                          if (i==0 && j == (28 -5))
                            out_val[f] = win_val * conv1_weights[f][i][j-(28 -5)];
                          else
                            out_val[f] += win_val * conv1_weights[f][i][j-(28 -5)];
                        }
                    }

                    if (j > 0){
                        linebuf[i*28 + j-1] = win_val;
                    }else if (i>0)
                    {
                        linebuf[i*28 -1] = win_val;
                    }
                }
            }
            if (row >= 5 -1 && col >= 5 -1){
              for (int f = 0; f < 6; f++)
              {




                dst[f][row-(5 -1)][col - (5 -1)] = relu(out_val[f] + conv1_biases[f]);
              }
            }
        }
    }
}

void convolutional_layer2
(
  T src[((28 - (5 - 1)) / 2)][((28 - (5 - 1)) / 2)],
  T dst[10][(((28 - (5 - 1)) / 2) - (5 - 1))][(((28 - (5 - 1)) / 2) - (5 - 1))],
  T weights[10][5][5]
)
{_ssdm_SpecArrayDimSize(src, 12);_ssdm_SpecArrayDimSize(dst, 10);_ssdm_SpecArrayDimSize(weights, 10);



#pragma HLS ARRAY_PARTITION variable=&dst dim=1 complete

 static T linebuf[5*((28 - (5 - 1)) / 2)];


#pragma HLS ARRAY_PARTITION variable=&linebuf dim=1 complete
#pragma HLS INLINE

 T in_val;
    T out_val[10];
    T win_val;
    conv1:for(int row = 0; row < ((28 - (5 - 1)) / 2); row++) {
        conv2:for(int col = 0; col < ((28 - (5 - 1)) / 2); col++) {
#pragma HLS DEPENDENCE variable=&linebuf inter false
#pragma HLS PIPELINE
 in_val = src[row][col];
            conv3:for(int i = 0; i < 5; i++) {
                conv4:for (int j = 0; j < ((28 - (5 - 1)) / 2); j++)
                {
                    win_val = (i < 5 - 1 || j < ((28 - (5 - 1)) / 2) - 1) ? linebuf[i*((28 - (5 - 1)) / 2) + j] : in_val;
                    if (j>=((28 - (5 - 1)) / 2)-5)
                    {
                        for (int f = 0; f < 10; f++)
                        {
                          if (i==0 && j == (((28 - (5 - 1)) / 2)-5))
                            out_val[f] = win_val * weights[f][i][j-(((28 - (5 - 1)) / 2)-5)];
                          else
                            out_val[f] += win_val * weights[f][i][j-(((28 - (5 - 1)) / 2)-5)];
                        }
                    }

                    if (j > 0){
                        linebuf[i*((28 - (5 - 1)) / 2) + j-1] = win_val;
                    }else if (i>0)
                    {
                        linebuf[i*((28 - (5 - 1)) / 2)-1] = win_val;
                    }
                }
            }
            if (row >= 5 -1 && col >= 5 -1){
              for (int f = 0; f < 10; f++)
              {




                dst[f][row-(5 -1)][col - ( 5 -1)] += out_val[f];
              }
            }
        }
    }
}
