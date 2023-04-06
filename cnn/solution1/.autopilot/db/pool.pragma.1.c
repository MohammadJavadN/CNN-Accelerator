# 1 "lib/pool.c"
# 1 "lib/pool.c" 1
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
# 1 "lib/pool.c" 2
# 1 "lib/pool.h" 1


# 1 "lib/definitions.h" 1

typedef float T;
# 4 "lib/pool.h" 2

void
max_pooling_layer1
(
  float features [6][(28 - (5 - 1))][(28 - (5 - 1))],
  float pool_features [6][((28 - (5 - 1)) / 2)][((28 - (5 - 1)) / 2)]
);
void
max_pooling_layer2
(
  float features [10][(((28 - (5 - 1)) / 2) - (5 - 1))][(((28 - (5 - 1)) / 2) - (5 - 1))],
  float pool_features [10][((((28 - (5 - 1)) / 2) - (5 - 1)) / 2)][((((28 - (5 - 1)) / 2) - (5 - 1)) / 2)],
  float conv_biases2[10]
);
# 2 "lib/pool.c" 2
# 1 "lib/activ_fun.h" 1




float relu (float x);

void soft_max(float dense_array [10], float pred[10]);
# 3 "lib/pool.c" 2
# 1 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/include\\float.h" 1 3 4
# 33 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/include\\float.h" 3 4
# 1 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\float.h" 1 3 4
# 28 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\float.h" 3 4
# 1 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3 4
# 10 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3 4
# 1 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/_mingw_mac.h" 1 3 4
# 10 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3 4
# 277 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3 4
# 1 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 1 3 4
# 13 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 3 4
# 1 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3 4
# 674 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3 4
# 1 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/sdks/_mingw_directx.h" 1 3 4
# 674 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3 4

# 1 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/sdks/_mingw_ddk.h" 1 3 4
# 675 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3 4
# 13 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 2 3 4


#pragma pack(push,_CRT_PACKING)








 typedef __builtin_va_list __gnuc_va_list;






  typedef __gnuc_va_list va_list;
# 102 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 3 4
#pragma pack(pop)
# 277 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3 4


#pragma pack(push,_CRT_PACKING)
# 370 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3 4
__extension__ typedef unsigned long long size_t;
# 380 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3 4
__extension__ typedef long long ssize_t;
# 392 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3 4
__extension__ typedef long long intptr_t;
# 405 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3 4
__extension__ typedef unsigned long long uintptr_t;
# 418 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3 4
__extension__ typedef long long ptrdiff_t;
# 428 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3 4
typedef unsigned short wchar_t;







typedef unsigned short wint_t;
typedef unsigned short wctype_t;
# 456 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3 4
typedef int errno_t;




typedef long __time32_t;




__extension__ typedef long long __time64_t;







typedef __time64_t time_t;
# 607 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3 4
struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct *pthreadlocinfo;
typedef struct threadmbcinfostruct *pthreadmbcinfo;
struct __lc_time_data;

typedef struct localeinfo_struct {
  pthreadlocinfo locinfo;
  pthreadmbcinfo mbcinfo;
} _locale_tstruct,*_locale_t;



typedef struct tagLC_ID {
  unsigned short wLanguage;
  unsigned short wCountry;
  unsigned short wCodePage;
} LC_ID,*LPLC_ID;




typedef struct threadlocaleinfostruct {
  int refcount;
  unsigned int lc_codepage;
  unsigned int lc_collate_cp;
  unsigned long lc_handle[6];
  LC_ID lc_id[6];
  struct {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
  } lc_category[6];
  int lc_clike;
  int mb_cur_max;
  int *lconv_intl_refcount;
  int *lconv_num_refcount;
  int *lconv_mon_refcount;
  struct lconv *lconv;
  int *ctype1_refcount;
  unsigned short *ctype1;
  const unsigned short *pctype;
  const unsigned char *pclmap;
  const unsigned char *pcumap;
  struct __lc_time_data *lc_time_curr;
} threadlocinfo;







const char *__mingw_get_crt_info (void);





#pragma pack(pop)
# 28 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\float.h" 2 3 4
# 136 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\float.h" 3 4
__attribute__ ((__dllimport__)) unsigned int __attribute__ ((__nothrow__)) _controlfp (unsigned int unNew, unsigned int unMask) ;
__attribute__ ((__dllimport__)) unsigned int __attribute__ ((__nothrow__)) _control87 (unsigned int unNew, unsigned int unMask);


__attribute__ ((__dllimport__)) unsigned int __attribute__ ((__nothrow__)) _clearfp (void);
__attribute__ ((__dllimport__)) unsigned int __attribute__ ((__nothrow__)) _statusfp (void);
# 155 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\float.h" 3 4
void __attribute__ ((__nothrow__)) _fpreset (void);
void __attribute__ ((__nothrow__)) fpreset (void);


__attribute__ ((__dllimport__)) int * __attribute__ ((__nothrow__)) __fpecode(void);
# 169 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\float.h" 3 4
__attribute__ ((__dllimport__)) double __attribute__ ((__nothrow__)) _chgsign (double _X);
__attribute__ ((__dllimport__)) double __attribute__ ((__nothrow__)) _copysign (double _Number,double _Sign);
__attribute__ ((__dllimport__)) double __attribute__ ((__nothrow__)) _logb (double);
__attribute__ ((__dllimport__)) double __attribute__ ((__nothrow__)) _nextafter (double, double);
__attribute__ ((__dllimport__)) double __attribute__ ((__nothrow__)) _scalb (double, long);

__attribute__ ((__dllimport__)) int __attribute__ ((__nothrow__)) _finite (double);
__attribute__ ((__dllimport__)) int __attribute__ ((__nothrow__)) _fpclass (double);
__attribute__ ((__dllimport__)) int __attribute__ ((__nothrow__)) _isnan (double);


extern long double _chgsignl (long double);
# 33 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/include\\float.h" 2 3 4
# 4 "lib/pool.c" 2
#pragma GCC diagnostic ignored "-Wunused-label"
float conv_biases2 [10] = { -0.016670143231749535, -0.24741846323013306, -0.8313738703727722, -0.9820187091827393, -0.03780452907085419, 0.011372077278792858, 0.5197127461433411, -0.36152026057243347 };
void
max_pool2
(
  float feature [(((28 - (5 - 1)) / 2) - (5 - 1))][(((28 - (5 - 1)) / 2) - (5 - 1))],
  float pool_feature [((((28 - (5 - 1)) / 2) - (5 - 1)) / 2)][((((28 - (5 - 1)) / 2) - (5 - 1)) / 2)], float b
)
{_ssdm_SpecArrayDimSize(feature, 8);_ssdm_SpecArrayDimSize(pool_feature, 4);
  float pool = 0.0;

  for (int r = 0; r < (((28 - (5 - 1)) / 2) - (5 - 1)); r += 2)
  {
    for(int c = 0; c < (((28 - (5 - 1)) / 2) - (5 - 1)); c += 2)
    {
      pool = 1.17549435e-38F;

      for (int pr = 0; pr < 2; ++pr)
        for (int pc = 0; pc < 2; ++pc)
        {
          if(feature[r + pr][c + pc] > pool)
            pool = feature[r + pr][c + pc];
        }

      pool_feature[r / 2][c / 2] = relu(pool + b);
    }
  }
}

void
max_pool
(
  float feature [(28 - (5 - 1))][(28 - (5 - 1))],
  float pool_feature [((28 - (5 - 1)) / 2)][((28 - (5 - 1)) / 2)]
)
{_ssdm_SpecArrayDimSize(feature, 24);_ssdm_SpecArrayDimSize(pool_feature, 12);
  float pool = 0.0;

  for (int r = 0; r < (28 - (5 - 1)); r += 2)
  {
    for(int c = 0; c < (28 - (5 - 1)); c += 2)
    {
      pool = 1.17549435e-38F;

      for (int pr = 0; pr < 2; ++pr)
        for (int pc = 0; pc < 2; ++pc)
        {
          if(feature[r + pr][c + pc] > pool)
            pool = feature[r + pr][c + pc];
        }

      pool_feature[r / 2][c / 2] = pool;
    }
  }
}
# 104 "lib/pool.c"
void
max_pooling_layer1
(
  float features [6][(28 - (5 - 1))][(28 - (5 - 1))],
  float pool_features [6][((28 - (5 - 1)) / 2)][((28 - (5 - 1)) / 2)]
)
{_ssdm_SpecArrayDimSize(features, 6);_ssdm_SpecArrayDimSize(pool_features, 6);
_ssdm_InlineSelf(0, "");
 for (int f = 0; f < 6; ++f)
  {
    max_pool(features[f], pool_features[f]);
  }
}
void
max_pooling_layer2
(
  float features [10][(((28 - (5 - 1)) / 2) - (5 - 1))][(((28 - (5 - 1)) / 2) - (5 - 1))],
  float pool_features [10][((((28 - (5 - 1)) / 2) - (5 - 1)) / 2)][((((28 - (5 - 1)) / 2) - (5 - 1)) / 2)],
  float conv_biases2[10]
)
{_ssdm_SpecArrayDimSize(features, 10);_ssdm_SpecArrayDimSize(pool_features, 10);_ssdm_SpecArrayDimSize(conv_biases2, 10);
_ssdm_InlineSelf(0, "");
 for (int f = 0; f < 10; ++f)
  {
    max_pool2(features[f], pool_features[f], conv_biases2[f]);
  }
}
