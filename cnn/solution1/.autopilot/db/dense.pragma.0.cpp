# 1 "lib/dense.cpp"
# 1 "lib/dense.cpp" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 152 "<built-in>" 3
# 1 "<command line>" 1







# 1 "E:/Xilinx/Vivado/2019.1/common/technology/autopilot\\etc/autopilot_ssdm_op.h" 1
# 157 "E:/Xilinx/Vivado/2019.1/common/technology/autopilot\\etc/autopilot_ssdm_op.h"
extern "C" {






    void _ssdm_op_IfRead(...) __attribute__ ((nothrow));
    void _ssdm_op_IfWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanWrite(...) __attribute__ ((nothrow));


    void _ssdm_StreamRead(...) __attribute__ ((nothrow));
    void _ssdm_StreamWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanWrite(...) __attribute__ ((nothrow));
    unsigned _ssdm_StreamSize(...) __attribute__ ((nothrow));




    void _ssdm_op_MemShiftRead(...) __attribute__ ((nothrow));

    void _ssdm_op_Wait(...) __attribute__ ((nothrow));
    void _ssdm_op_Poll(...) __attribute__ ((nothrow));

    void _ssdm_op_Return(...) __attribute__ ((nothrow));


    void _ssdm_op_SpecSynModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecTopModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDecl(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDef(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPort(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecConnection(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecChannel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecSensitive(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecModuleInst(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPortMap(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecReset(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPlatform(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecClockDomain(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPowerDomain(...) __attribute__ ((nothrow));

    int _ssdm_op_SpecRegionBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecRegionEnd(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopName(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopTripCount(...) __attribute__ ((nothrow));

    int _ssdm_op_SpecStateBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecStateEnd(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecInterface(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPipeline(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecDataflowPipeline(...) __attribute__ ((nothrow));


    void _ssdm_op_SpecLatency(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecParallel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProtocol(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecOccurrence(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecResource(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecResourceLimit(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecCHCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecFUCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIFCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIPCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecKeepValue(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecMemCore(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecExt(...) __attribute__ ((nothrow));




    void _ssdm_SpecArrayDimSize(...) __attribute__ ((nothrow));

    void _ssdm_RegionBegin(...) __attribute__ ((nothrow));
    void _ssdm_RegionEnd(...) __attribute__ ((nothrow));

    void _ssdm_Unroll(...) __attribute__ ((nothrow));
    void _ssdm_UnrollRegion(...) __attribute__ ((nothrow));

    void _ssdm_InlineAll(...) __attribute__ ((nothrow));
    void _ssdm_InlineLoop(...) __attribute__ ((nothrow));
    void _ssdm_Inline(...) __attribute__ ((nothrow));
    void _ssdm_InlineSelf(...) __attribute__ ((nothrow));
    void _ssdm_InlineRegion(...) __attribute__ ((nothrow));

    void _ssdm_SpecArrayMap(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayPartition(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayReshape(...) __attribute__ ((nothrow));

    void _ssdm_SpecStream(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecStable(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecStableContent(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPipoDepth(...) __attribute__ ((nothrow));

    void _ssdm_SpecExpr(...) __attribute__ ((nothrow));
    void _ssdm_SpecExprBalance(...) __attribute__ ((nothrow));

    void _ssdm_SpecDependence(...) __attribute__ ((nothrow));

    void _ssdm_SpecLoopMerge(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopFlatten(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopRewind(...) __attribute__ ((nothrow));

    void _ssdm_SpecFuncInstantiation(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncBuffer(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncExtract(...) __attribute__ ((nothrow));
    void _ssdm_SpecConstant(...) __attribute__ ((nothrow));

    void _ssdm_DataPack(...) __attribute__ ((nothrow));
    void _ssdm_SpecDataPack(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecBitsMap(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecLicense(...) __attribute__ ((nothrow));

    void __xilinx_ip_top(...) __attribute__ ((nothrow));


}
# 9 "<command line>" 2
# 1 "<built-in>" 2
# 1 "lib/dense.cpp" 2
# 1 "lib/dense.h" 1


# 1 "lib/definitions.h" 1



typedef float T;
# 4 "lib/dense.h" 2
# 1 "lib/activ_fun.h" 1



# 1 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 1 3
# 10 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
# 10 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3


# 1 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 10 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
# 1 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/_mingw_mac.h" 1 3
# 10 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3
# 277 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
# 1 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 1 3
# 13 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 3
# 1 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 674 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
# 1 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/sdks/_mingw_directx.h" 1 3
# 674 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3

# 1 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/sdks/_mingw_ddk.h" 1 3
# 675 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3
# 13 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 2 3


#pragma pack(push,_CRT_PACKING)


extern "C" {





  typedef __builtin_va_list __gnuc_va_list;






  typedef __gnuc_va_list va_list;
# 99 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 3
}


#pragma pack(pop)
# 277 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3


#pragma pack(push,_CRT_PACKING)
# 370 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef unsigned long long size_t;
# 380 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long ssize_t;
# 392 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long intptr_t;
# 405 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef unsigned long long uintptr_t;
# 418 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long ptrdiff_t;
# 436 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
typedef unsigned short wint_t;
typedef unsigned short wctype_t;
# 456 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
typedef int errno_t;




typedef long __time32_t;




__extension__ typedef long long __time64_t;







typedef __time64_t time_t;
# 607 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
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



extern "C" {



const char *__mingw_get_crt_info (void);


}


#pragma pack(pop)
# 12 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 2 3


struct _exception;

#pragma pack(push,_CRT_PACKING)
# 75 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
extern "C" {



  extern double * __imp__HUGE;
# 91 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  struct _exception {
    int type;
    const char *name;
    double arg1;
    double arg2;
    double retval;
  };

  void __mingw_raise_matherr (int typ, const char *name, double a1, double a2,
         double rslt);
  void __mingw_setusermatherr (int ( *)(struct _exception *));
  __attribute__ ((__dllimport__)) void __setusermatherr(int ( *)(struct _exception *));



  double sin(double _X);
  double cos(double _X);
  double tan(double _X);
  double sinh(double _X);
  double cosh(double _X);
  double tanh(double _X);
  double asin(double _X);
  double acos(double _X);
  double atan(double _X);
  double atan2(double _Y,double _X);
  double exp(double _X);
  double log(double _X);
  double log10(double _X);
  double pow(double _X,double _Y);
  double sqrt(double _X);
  double ceil(double _X);
  double floor(double _X);
  double fabs(double _X);
# 135 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  double ldexp(double _X,int _Y);
  double frexp(double _X,int *_Y);
  double modf(double _X,double *_Y);
  double fmod(double _X,double _Y);

  void sincos (double __x, double *p_sin, double *p_cos);
  void sincosl (long double __x, long double *p_sin, long double *p_cos);
  void sincosf (float __x, float *p_sin, float *p_cos);



  int abs(int _X);
  long labs(long _X);



  double atof(const char *_String);
  double _atof_l(const char *_String,_locale_t _Locale);
# 162 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  struct _complex {
    double x;
    double y;
  };


  __attribute__ ((__dllimport__)) double _cabs(struct _complex _ComplexA);
  double _hypot(double _X,double _Y);
  __attribute__ ((__dllimport__)) double _j0(double _X);
  __attribute__ ((__dllimport__)) double _j1(double _X);
  __attribute__ ((__dllimport__)) double _jn(int _X,double _Y);
  __attribute__ ((__dllimport__)) double _y0(double _X);
  __attribute__ ((__dllimport__)) double _y1(double _X);
  __attribute__ ((__dllimport__)) double _yn(int _X,double _Y);


  __attribute__ ((__dllimport__)) int _matherr (struct _exception *);
# 189 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  __attribute__ ((__dllimport__)) double _chgsign (double _X);
  __attribute__ ((__dllimport__)) double _copysign (double _Number,double _Sign);
  __attribute__ ((__dllimport__)) double _logb (double);
  __attribute__ ((__dllimport__)) double _nextafter (double, double);
  __attribute__ ((__dllimport__)) double _scalb (double, long);
  __attribute__ ((__dllimport__)) int _finite (double);
  __attribute__ ((__dllimport__)) int _fpclass (double);
  __attribute__ ((__dllimport__)) int _isnan (double);






__attribute__ ((__dllimport__)) double j0 (double) ;
__attribute__ ((__dllimport__)) double j1 (double) ;
__attribute__ ((__dllimport__)) double jn (int, double) ;
__attribute__ ((__dllimport__)) double y0 (double) ;
__attribute__ ((__dllimport__)) double y1 (double) ;
__attribute__ ((__dllimport__)) double yn (int, double) ;

__attribute__ ((__dllimport__)) double chgsign (double);
# 219 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  __attribute__ ((__dllimport__)) int finite (double);
  __attribute__ ((__dllimport__)) int fpclass (double);
# 264 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
typedef float float_t;
typedef double double_t;
# 299 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern int __fpclassifyl (long double);
  extern int __fpclassifyf (float);
  extern int __fpclassify (double);
# 335 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern int __isnan (double);
  extern int __isnanf (float);
  extern int __isnanl (long double);
# 376 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern int __signbit (double);
  extern int __signbitf (float);
  extern int __signbitl (long double);
# 404 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern float sinf(float _X);
  extern long double sinl(long double);

  extern float cosf(float _X);
  extern long double cosl(long double);

  extern float tanf(float _X);
  extern long double tanl(long double);
  extern float asinf(float _X);
  extern long double asinl(long double);

  extern float acosf (float);
  extern long double acosl (long double);

  extern float atanf (float);
  extern long double atanl (long double);

  extern float atan2f (float, float);
  extern long double atan2l (long double, long double);


  extern float sinhf(float _X);



  extern long double sinhl(long double);

  extern float coshf(float _X);



  extern long double coshl(long double);

  extern float tanhf(float _X);



  extern long double tanhl(long double);



  extern double acosh (double);
  extern float acoshf (float);
  extern long double acoshl (long double);


  extern double asinh (double);
  extern float asinhf (float);
  extern long double asinhl (long double);


  extern double atanh (double);
  extern float atanhf (float);
  extern long double atanhl (long double);



  extern float expf(float _X);



  extern long double expl(long double);


  extern double exp2(double);
  extern float exp2f(float);
  extern long double exp2l(long double);



  extern double expm1(double);
  extern float expm1f(float);
  extern long double expm1l(long double);


  extern float frexpf(float _X,int *_Y);



  extern long double frexpl(long double,int *);




  extern int ilogb (double);
  extern int ilogbf (float);
  extern int ilogbl (long double);


  extern float ldexpf(float _X,int _Y);



  extern long double ldexpl (long double, int);


  extern float logf (float);
  extern long double logl(long double);


  extern float log10f (float);
  extern long double log10l(long double);


  extern double log1p(double);
  extern float log1pf(float);
  extern long double log1pl(long double);


  extern double log2 (double);
  extern float log2f (float);
  extern long double log2l (long double);


  extern double logb (double);
  extern float logbf (float);
  extern long double logbl (long double);
# 553 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern float modff (float, float*);
  extern long double modfl (long double, long double*);


  extern double scalbn (double, int);
  extern float scalbnf (float, int);
  extern long double scalbnl (long double, int);

  extern double scalbln (double, long);
  extern float scalblnf (float, long);
  extern long double scalblnl (long double, long);



  extern double cbrt (double);
  extern float cbrtf (float);
  extern long double cbrtl (long double);


  extern float fabsf (float x);
# 583 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern long double fabsl (long double);
# 595 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern double hypot (double, double) ;
  extern float hypotf (float x, float y);



  extern long double hypotl (long double, long double);


  extern float powf(float _X,float _Y);



  extern long double powl (long double, long double);


  extern float sqrtf (float);
  extern long double sqrtl(long double);


  extern double erf (double);
  extern float erff (float);
  extern long double erfl (long double);


  extern double erfc (double);
  extern float erfcf (float);
  extern long double erfcl (long double);


  extern double lgamma (double);
  extern float lgammaf (float);
  extern long double lgammal (long double);


  extern double tgamma (double);
  extern float tgammaf (float);
  extern long double tgammal (long double);


  extern float ceilf (float);
  extern long double ceill (long double);


  extern float floorf (float);
  extern long double floorl (long double);


  extern double nearbyint ( double);
  extern float nearbyintf (float);
  extern long double nearbyintl (long double);



extern double rint (double);
extern float rintf (float);
extern long double rintl (long double);


extern long lrint (double);
extern long lrintf (float);
extern long lrintl (long double);

__extension__ long long llrint (double);
__extension__ long long llrintf (float);
__extension__ long long llrintl (long double);
# 739 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern double round (double);
  extern float roundf (float);
  extern long double roundl (long double);


  extern long lround (double);
  extern long lroundf (float);
  extern long lroundl (long double);
  __extension__ long long llround (double);
  __extension__ long long llroundf (float);
  __extension__ long long llroundl (long double);



  extern double trunc (double);
  extern float truncf (float);
  extern long double truncl (long double);


  extern float fmodf (float, float);
  extern long double fmodl (long double, long double);


  extern double remainder (double, double);
  extern float remainderf (float, float);
  extern long double remainderl (long double, long double);


  extern double remquo(double, double, int *);
  extern float remquof(float, float, int *);
  extern long double remquol(long double, long double, int *);


  extern double copysign (double, double);
  extern float copysignf (float, float);
  extern long double copysignl (long double, long double);


  extern double nan(const char *tagp);
  extern float nanf(const char *tagp);
  extern long double nanl(const char *tagp);
# 788 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern double nextafter (double, double);
  extern float nextafterf (float, float);
  extern long double nextafterl (long double, long double);


  extern double nexttoward (double, long double);
  extern float nexttowardf (float, long double);
  extern long double nexttowardl (long double, long double);



  extern double fdim (double x, double y);
  extern float fdimf (float x, float y);
  extern long double fdiml (long double x, long double y);







  extern double fmax (double, double);
  extern float fmaxf (float, float);
  extern long double fmaxl (long double, long double);


  extern double fmin (double, double);
  extern float fminf (float, float);
  extern long double fminl (long double, long double);



  extern double fma (double, double, double);
  extern float fmaf (float, float, float);
  extern long double fmal (long double, long double, long double);
# 871 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
   __attribute__ ((__dllimport__)) float _copysignf (float _Number,float _Sign);
   __attribute__ ((__dllimport__)) float _chgsignf (float _X);
   __attribute__ ((__dllimport__)) float _logbf(float _X);
   __attribute__ ((__dllimport__)) float _nextafterf(float _X,float _Y);
   __attribute__ ((__dllimport__)) int _finitef(float _X);
   __attribute__ ((__dllimport__)) int _isnanf(float _X);
   __attribute__ ((__dllimport__)) int _fpclassf(float _X);



   extern long double _chgsignl (long double);
# 893 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
}




#pragma pack(pop)
# 5 "lib/activ_fun.h" 2

T relu (T x);

void soft_max(T dense_array [10], T pred[10]);
# 5 "lib/dense.h" 2

void
dense_layer
(
  T flat_array [(10 * ((((28 - (5 - 1)) / 2) - (5 - 1)) / 2) * ((((28 - (5 - 1)) / 2) - (5 - 1)) / 2))],
  T dense_array [10]
);
# 2 "lib/dense.cpp" 2
# 1 "lib/dense_weights.h" 1
# 11 "lib/dense_weights.h"
const T dense_weights[(10 * ((((28 - (5 - 1)) / 2) - (5 - 1)) / 2) * ((((28 - (5 - 1)) / 2) - (5 - 1)) / 2))][10]
  = {
   { 0.03500078245997429, -0.29389309883117676, -0.14205142855644226, -0.1533547043800354, -0.22778940200805664, -0.19678707420825958, 0.025828056037425995, 0.023086803033947945, 0.05175323039293289, 0.2866596579551697 },
   { 0.34448984265327454, 0.042556677013635635, 0.28751981258392334, 0.027942359447479248, -0.8639123439788818, 0.14781218767166138, -0.2519783079624176, -0.009692220948636532, 0.1218133196234703, 0.05560581758618355 },
   { 0.16534294188022614, 0.17174339294433594, -0.2904520630836487, 0.03808467090129852, -0.27906662225723267, 0.24436913430690765, 0.18302462995052338, -0.13765427470207214, -0.24832430481910706, 0.01901801861822605 },
   { 0.04841732606291771, -0.17658409476280212, -0.1157696545124054, -0.4282592833042145, 0.23825587332248688, 0.2831977307796478, 0.0033215289004147053, -0.0032343713100999594, 0.02319400943815708, -0.2156342715024948 },
   { -0.1517467349767685, -0.3390670418739319, 0.070370152592659, -0.7240022420883179, 0.4160546660423279, -0.10434702783823013, 0.1007256954908371, -0.23402486741542816, 0.07326078414916992, 0.07885666191577911 },
   { -0.3070887625217438, 0.5307470560073853, 0.09086333215236664, -0.07470086216926575, 0.2190244197845459, 0.15742789208889008, -0.17351274192333221, -0.07847186923027039, 0.08667101711034775, 0.047517403960227966 },
   { -0.8652337789535522, -0.08352030813694, -0.6390528082847595, 0.1875673532485962, 0.35499903559684753, 0.022471150383353233, -0.09960892051458359, -0.27788788080215454, 0.39152443408966064, 0.16674327850341797 },
   { -0.09729382395744324, 0.07000623643398285, 0.06610007584095001, 0.05074765905737877, 0.1726158857345581, 0.33219200372695923, -0.41405579447746277, 0.1370541900396347, 0.10742861777544022, -0.45521992444992065 },
   { 0.0993121787905693, 0.07752003520727158, 0.2763065695762634, -0.7759888768196106, 0.2767576277256012, 0.2419181764125824, -0.09069714695215225, -0.24049556255340576, 0.24039898812770844, -0.007517626043409109 },
   { -0.22155968844890594, -0.08464348316192627, 0.21569225192070007, 0.16613014042377472, 0.012069991789758205, -0.19132040441036224, 0.2898196280002594, 0.11661829054355621, 0.03059612587094307, -0.23095601797103882 },
   { -0.21816202998161316, 0.47933027148246765, 0.24103018641471863, -0.0632927343249321, 0.11966320872306824, -0.36887839436531067, -0.2126358598470688, 0.0694318637251854, 0.05806558579206467, -0.018419593572616577 },
   { 0.08383963257074356, -0.25364598631858826, 0.3312172293663025, -0.4326253831386566, 0.31009599566459656, -0.5399415493011475, -0.03522142022848129, 0.03322453796863556, -0.10225926339626312, 0.14749617874622345 },
   { 0.0320928618311882, -0.11138828843832016, 0.08177676796913147, 0.16162508726119995, -0.25612685084342957, 0.08349792659282684, -0.1828920543193817, -0.11585763841867447, -0.16167084872722626, -0.07058434188365936 },
   { 0.1851530224084854, -0.013814461417496204, 0.0905250757932663, 0.15236374735832214, 0.07558029145002365, 0.04040302708745003, 0.32536226511001587, -0.19689062237739563, -0.29755935072898865, -0.17400890588760376 },
   { 0.4253798723220825, -0.042320895940065384, -0.003301667980849743, -0.011117520742118359, -0.14421215653419495, -0.07857130467891693, 0.05482935532927513, -0.08444322645664215, 0.004546750336885452, -0.33974161744117737 },
   { 0.4542802572250366, 0.12741047143936157, 0.14257611334323883, 0.34827664494514465, -0.04695875197649002, -0.021602250635623932, 0.08870086073875427, -0.3511095643043518, -0.1534333974123001, -0.015949461609125137 },
   { -0.08398525416851044, 0.18497154116630554, 0.12723036110401154, 0.3142547607421875, -1.1337392330169678, -0.1453823298215866, -0.6192591190338135, 0.33485740423202515, -0.10866546630859375, -0.3207945227622986 },
   { -0.06498333811759949, 0.2681849002838135, 0.10101169347763062, 0.032911207526922226, -0.18451887369155884, 0.0341610349714756, -0.08335097879171371, 0.16106419265270233, -0.3295145630836487, -0.08145701885223389 },
   { -0.1739300936460495, -0.4475448429584503, -0.04748571664094925, 0.0643012747168541, -0.3699134588241577, 0.4000330865383148, -0.14605465531349182, 0.2112351804971695, -0.1749633252620697, 0.04226420819759369 },
   { -0.24001377820968628, -0.12577134370803833, -0.4448702335357666, -0.3348883390426636, -0.4258418083190918, 0.8007195591926575, 0.28937995433807373, 0.2844342291355133, -0.3403013348579407, -0.5706257224082947 },
   { -0.8967841863632202, 0.21460917592048645, -0.2302691489458084, -0.1559094786643982, 0.19854220747947693, 0.2118801325559616, -0.5662949681282043, 0.2471301108598709, 0.05600539967417717, 0.14832308888435364 },
   { -0.39606940746307373, -0.672540009021759, -0.3056405782699585, -0.10962572693824768, 0.45464250445365906, -0.04761854186654091, -0.24213263392448425, -0.3019075095653534, -0.17626887559890747, 0.5918733477592468 },
   { -0.012224003672599792, -0.35193029046058655, -0.1928289532661438, -0.02497728355228901, 0.3532790541648865, -0.033437579870224, -0.44735532999038696, 0.14257606863975525, 0.2943001985549927, 0.21379560232162476 },
   { 0.05662987753748894, -0.2969037890434265, 0.4945297837257385, -0.13504555821418762, 0.14591330289840698, -0.06473736464977264, -0.28155356645584106, 0.21301335096359253, -0.008796192705631256, -0.6524777412414551 },
   { -0.06718125194311142, 0.16651824116706848, -0.10687445104122162, -0.10814957320690155, 0.016005033627152443, 0.060308780521154404, -0.25991007685661316, -0.45825496315956116, -0.16143161058425903, -0.02300669066607952 },
   { 0.06973192095756531, -0.6129840016365051, -0.2792026698589325, -0.021181439980864525, 0.24378854036331177, -0.06770951300859451, -0.3281673789024353, -0.08470886945724487, 0.1092890128493309, 0.4713605046272278 },
   { 0.21122996509075165, 0.07175089418888092, -0.27449631690979004, -0.05793655663728714, 0.20904719829559326, -0.2520182430744171, 0.06993242353200912, -0.15900005400180817, -0.09790094941854477, 0.15806707739830017 },
   { 0.038245152682065964, 0.13553668558597565, 0.2848372757434845, -0.6424583792686462, 0.11514445394277573, -0.4577050507068634, 0.10814616829156876, 0.5839956998825073, -0.23520039021968842, -0.7473115921020508 },
   { 0.026307696476578712, 0.04447806999087334, -0.16692492365837097, -0.06685227155685425, -0.014751609414815903, 0.04392869025468826, 0.059913940727710724, -0.574449896812439, 0.005314370151609182, 0.009243661537766457 },
   { 0.351239949464798, -0.21186979115009308, 0.025453852489590645, -0.1856628954410553, -0.17835551500320435, -0.04803222045302391, 0.21307210624217987, -0.5620028972625732, 0.3484557271003723, -0.09705334901809692 },
   { 0.351151704788208, 0.2271505892276764, 0.12847258150577545, 0.0439639687538147, -0.48067739605903625, -0.14929719269275665, -0.014772149734199047, -0.08061695098876953, -0.19553281366825104, 0.17714986205101013 },
   { -0.014345659874379635, 0.38703039288520813, 0.4065834879875183, -0.5374438166618347, 0.3225559890270233, -0.5140986442565918, 0.15604110062122345, -0.0754799097776413, -0.12366412580013275, -0.33158716559410095 },
   { -0.7939623594284058, -0.16434940695762634, 0.22493582963943481, 0.00606968067586422, 0.40565580129623413, -0.9300838112831116, 0.7370591759681702, -0.2562437057495117, -0.05805211141705513, 0.13239088654518127 },
   { -0.16142654418945312, 0.6275568604469299, -0.2555743455886841, -0.4880567789077759, -0.4225550591945648, -0.11623680591583252, 0.6931136250495911, -0.5875400900840759, 0.06677643209695816, 0.18154338002204895 },
   { -0.14541585743427277, 0.545754611492157, -0.1707518994808197, -0.18353720009326935, -0.254341721534729, 0.16769778728485107, 0.19669850170612335, -0.4717969298362732, 0.1238415390253067, -0.045982133597135544 },
   { -0.9326860308647156, -0.09324982762336731, -0.8143267631530762, 0.058763664215803146, 0.33932170271873474, 0.39986056089401245, 0.1713467538356781, -0.02946498431265354, -0.018750639632344246, 0.08202912658452988 },
   { 0.16108152270317078, -0.12423759698867798, 0.6672189235687256, 0.4029143452644348, -0.3898870348930359, 0.2528758645057678, 0.2626858949661255, -0.0088425287976861, -1.4816476106643677, -0.30797863006591797 },
   { 0.3999499976634979, -0.2655111253261566, 0.12458036839962006, 0.1199180856347084, 0.3961336016654968, -0.10545382648706436, -0.16876532137393951, 0.3022328019142151, -0.3607618808746338, -0.3645578920841217 },
   { 0.0013879574835300446, -0.053564492613077164, 0.24871021509170532, 0.27896973490715027, -0.36269277334213257, 0.10739593207836151, 0.056064672768116, -0.19644750654697418, 0.24015669524669647, -0.19383220374584198 },
   { -0.3717159926891327, -0.17245197296142578, -0.0920834168791771, 0.21116480231285095, -0.09648246318101883, -0.2155267596244812, -0.18544496595859528, 0.1267787218093872, 0.3356034755706787, -0.13820739090442657 },
   { -0.43966391682624817, 0.10315760225057602, 0.3574211299419403, 0.5034376978874207, 0.031048858538269997, 0.19707922637462616, -0.6325487494468689, 0.9049076437950134, -0.34322935342788696, -0.8214232921600342 },
   { 0.41026100516319275, 0.35254308581352234, -0.04653548076748848, 0.09342136234045029, -0.753382682800293, -0.10441514104604721, -0.06612904369831085, 0.2593602240085602, 0.23515154421329498, -0.2489248365163803 },
   { 0.2251063883304596, 0.09670385718345642, -0.04294859617948532, -0.13372613489627838, -0.27725306153297424, -0.07055997103452682, -0.22740435600280762, -0.2608265280723572, 0.11634835600852966, 0.3190898895263672 },
   { -0.12503176927566528, 0.059933219105005264, -0.042730871587991714, 0.0469665601849556, 0.04606404900550842, -0.17740237712860107, -0.16230036318302155, 0.1245475560426712, -0.019811872392892838, 0.05900246649980545 },
   { -0.5986920595169067, 0.3289520740509033, 0.3836525082588196, 0.36496102809906006, 0.228550523519516, 0.5498998761177063, -0.8978203535079956, -0.04296295344829559, -0.7102155089378357, -0.35301756858825684 },
   { 0.43283799290657043, -0.18930363655090332, 0.0469149611890316, 0.07614779472351074, 0.01265325304120779, 0.10530291497707367, -0.021211043000221252, 0.051122743636369705, -0.7405069470405579, 0.13329178094863892 },
   { 0.2379218190908432, -0.01664232276380062, -0.18037289381027222, 0.21667103469371796, -0.2663958966732025, 0.17135870456695557, 0.21596217155456543, -0.1745203137397766, 0.018677953630685806, -0.0665300264954567 },
   { 0.4391845166683197, -0.5031357407569885, -0.27558204531669617, 0.2657414674758911, -0.16839046776294708, 0.2170058786869049, 0.24683445692062378, 0.1754007786512375, 0.0826842412352562, -0.1253703534603119 },
   { 0.18703332543373108, -0.30423447489738464, -0.15891693532466888, 0.07382191717624664, -0.045075930655002594, 0.1523142009973526, -1.021559715270996, 0.08656150102615356, -0.1601289063692093, -0.06677106022834778 },
   { 0.01006820797920227, -0.04160834848880768, -0.022888103500008583, 0.09440247714519501, -0.336150586605072, -0.09250818192958832, -0.39895087480545044, 0.03611396253108978, 0.2242831289768219, 0.3930322527885437 },
   { 0.29985347390174866, -0.25234800577163696, 0.06580791622400284, -0.19396467506885529, -0.10411159694194794, -0.1412140130996704, -0.3255479633808136, -0.13185642659664154, 0.03167541325092316, 0.2520284652709961 },
   { -0.10792151838541031, 0.1797867864370346, -0.14051830768585205, -0.34612518548965454, 0.007692951243370771, 0.23564065992832184, 0.0995921790599823, -0.007692808285355568, 0.0440731905400753, -0.08680768311023712 },
   { 0.4260459244251251, 0.4123474359512329, 0.4765462875366211, -0.14522242546081543, -0.27255627512931824, -0.2491690069437027, -0.4781762957572937, 0.3350529372692108, -0.13606902956962585, -0.6429756879806519 },
   { 0.27528393268585205, 0.06327150762081146, 0.19697412848472595, 0.06945011019706726, -0.10197056829929352, -0.0560823492705822, 0.30380940437316895, -0.022864488884806633, -0.06957381218671799, 0.08427418023347855 },
   { -0.14431825280189514, -0.72670978307724, -0.15849937498569489, -0.1071426197886467, -0.2140827178955078, 0.5875205397605896, 0.564602792263031, -0.004731795750558376, 0.011329719796776772, -0.25815221667289734 },
   { -0.10787022113800049, 0.3857351839542389, 0.12261686474084854, 0.04713086038827896, -0.4695453941822052, 0.21769823133945465, 0.4934543967247009, 0.29632267355918884, -0.18836742639541626, -0.32639390230178833 },
   { -0.3929394781589508, -0.0915520191192627, 0.436958909034729, 0.06305614858865738, -0.4779663681983948, 0.37200868129730225, -0.5830204486846924, 0.517145574092865, -0.30395516753196716, -0.9184327125549316 },
   { -0.35623839497566223, -0.40184345841407776, 0.42533352971076965, -0.00935443863272667, -0.4676584303379059, 0.1355731189250946, 0.3733154535293579, -0.1798381209373474, -0.30032065510749817, -0.16874153912067413 },
   { -0.06904912739992142, -0.7138434052467346, 0.04005487635731697, 0.012919818982481956, -0.5117780566215515, 0.09374597668647766, 0.2851671278476715, 0.3317694067955017, 0.030652528628706932, -0.07069136947393417 },
   { -0.9989520311355591, 0.0811302587389946, 0.056226808577775955, -0.04548366367816925, 0.0929013267159462, -0.29125264286994934, 0.236937016248703, -0.25579893589019775, -0.174007385969162, 0.017365196719765663 },
   { -0.20041649043560028, 0.868457555770874, -0.31624749302864075, 0.14489199221134186, -0.6541654467582703, 0.48857444524765015, -0.8448274731636047, 0.23189890384674072, -1.1518926620483398, 0.12166279554367065 },
   { -0.0063117933459579945, 0.13655388355255127, 0.642005980014801, 0.017385181039571762, -0.13435052335262299, 0.2377910017967224, -0.057014256715774536, -0.8093200325965881, -0.3653464615345001, -0.14863969385623932 },
   { 0.0022067935205996037, 0.46493929624557495, 0.17464090883731842, -0.03824492543935776, 0.2073628306388855, -0.45685744285583496, -0.16729459166526794, 0.49787309765815735, -0.2273566871881485, -0.199360191822052 },
   { -1.252912998199463, 0.06855586171150208, 0.30708667635917664, -0.22715577483177185, 0.3766038119792938, 0.005049504805356264, -0.14845572412014008, 0.25140997767448425, -0.7432053685188293, 0.6705521941184998 },
   { 0.08041882514953613, -0.08061090856790543, -0.32082080841064453, -0.5259559154510498, 0.13262511789798737, 0.013320724479854107, 0.14519724249839783, 0.3843654990196228, -0.16471435129642487, -0.2704812288284302 },
   { -0.23624415695667267, 0.5267281532287598, -0.11525348573923111, -0.23091091215610504, 0.37353453040122986, 0.17650915682315826, 0.03944795951247215, 0.2135922908782959, -0.3487941026687622, -0.44273293018341064 },
   { 0.06324966996908188, 0.384522020816803, -0.22065065801143646, -0.16709010303020477, 0.1469709277153015, -0.3172627389431, -0.26029902696609497, -0.08384251594543457, -0.23395730555057526, -0.02655750699341297 },
   { -0.040776029229164124, 0.4930514097213745, -0.08915383368730545, 0.14900782704353333, 0.18670694530010223, -0.6037458181381226, 0.3635890781879425, 0.21864061057567596, -0.382843554019928, -0.4127991497516632 },
   { 0.14506033062934875, -0.4849787652492523, -0.258189857006073, -0.7137133479118347, 0.18744780123233795, -0.23606321215629578, 0.41409873962402344, -0.05042143911123276, -0.04186687618494034, 0.030770841985940933 },
   { 0.15881791710853577, 0.16793029010295868, 0.07038553059101105, -0.46035048365592957, -0.3126971423625946, 0.14235801994800568, -0.1008964404463768, -0.005342134740203619, -0.24367192387580872, 0.2632794678211212 },
   { 0.020055405795574188, -0.15609323978424072, 0.14690950512886047, -0.13136081397533417, 0.0015911804512143135, -0.1345730721950531, -0.06947444379329681, 0.1298404037952423, -0.27889731526374817, 0.06959372758865356 },
   { -0.027363160625100136, 0.4312923848628998, -0.1444101333618164, -0.2230554223060608, 0.14648526906967163, -0.11865931004285812, -0.1383516788482666, -0.0632663443684578, -0.2389121651649475, -0.06191129609942436 },
   { 0.2672311067581177, -0.08610772341489792, -0.17235948145389557, -0.33977341651916504, 0.0912274420261383, -0.29417744278907776, 0.11907806992530823, 0.017834842205047607, 0.08262437582015991, 0.07790721952915192 },
   { -0.039282578974962234, 0.11400087922811508, 0.06858255714178085, -0.34632256627082825, -0.16895048320293427, 0.11158273369073868, 0.35026636719703674, -0.17879584431648254, 0.11712395399808884, -0.28640130162239075 },
   { -0.3105989098548889, 0.13540002703666687, -0.08045290410518646, -0.22066162526607513, 0.012543091550469398, -0.013650051318109035, -0.019021132960915565, 0.007040372584015131, 0.2994855046272278, 0.04948241263628006 },
   { 0.3339614272117615, -0.004566473886370659, 0.28673920035362244, -0.2043469250202179, 0.3678540289402008, -0.02579142339527607, -0.6510493755340576, 0.2986837923526764, -0.5653702616691589, -0.07882171124219894 },
   { 0.25300976634025574, 0.16440123319625854, 0.20529285073280334, -0.9752262234687805, 0.4836232364177704, -0.4717942178249359, -0.23939436674118042, 0.4665357172489166, 0.1085195243358612, 0.09717370569705963 },
   { -0.3283497393131256, 0.38225653767585754, 0.09652743488550186, -0.09292816370725632, -0.023455621674656868, -0.19154857099056244, -0.20120356976985931, -0.14411354064941406, -0.5140827298164368, 0.014083672314882278 },
   { -0.48975905776023865, -0.005149682052433491, -0.2311464101076126, 0.004904851783066988, -0.01213037222623825, 0.0033923652954399586, -0.2059413343667984, 0.4106115996837616, -0.16045142710208893, 0.28824612498283386 },
   { -0.3611343801021576, 0.0696474015712738, -0.453244686126709, 0.049908656626939774, 0.3243288993835449, -0.47001028060913086, -0.06530123203992844, 0.6832347512245178, -0.2908921241760254, 0.3373177945613861 },
   { -0.16342175006866455, 0.2391197383403778, 0.17260822653770447, -0.1584801971912384, 0.18922768533229828, 0.16420380771160126, -0.23432180285453796, -0.054527755826711655, 0.005619884468615055, -0.023180745542049408 },
   { -0.21108445525169373, 0.12670572102069855, 0.15253569185733795, -0.003147661220282316, 0.39496201276779175, -0.1751926988363266, -0.10262531787157059, -0.455436110496521, 0.2591235935688019, -0.1585676521062851 },
   { -0.10564949363470078, 0.04206676781177521, 0.06543947756290436, 0.10802517831325531, 0.2596789002418518, -0.028746824711561203, 0.3141120970249176, -0.23323112726211548, -0.1038394495844841, -0.14154663681983948 },
   { 0.21369503438472748, -0.08255138248205185, -0.3822528123855591, -0.6006450653076172, 0.6231752038002014, 0.04726427420973778, -0.08456619828939438, -0.43499815464019775, 0.14622357487678528, -0.5056357383728027 },
   { -0.060257162898778915, -0.007500550244003534, -0.30862584710121155, -0.1677330583333969, 0.15195143222808838, 0.13340947031974792, -0.010965258814394474, -0.3596223294734955, 0.21810267865657806, 0.2472514808177948 },
   { 0.07190871238708496, -0.11329007148742676, -0.07003986090421677, -0.005143365357071161, 0.34444406628608704, -0.16743163764476776, -0.32635676860809326, -0.07677602767944336, 0.275779128074646, 0.3647539019584656 },
   { 0.16633249819278717, 0.006026339717209339, 0.012940678745508194, -0.18617063760757446, 0.2689540982246399, -0.15202566981315613, -0.23621276021003723, 0.15481257438659668, -0.20996074378490448, -0.1878599226474762 },
   { -0.3148820400238037, 0.1325366348028183, 0.08338341116905212, 0.15409865975379944, 0.3947131633758545, -0.44635769724845886, -0.20574751496315002, -0.013421883806586266, -0.11599644273519516, -0.37181708216667175 },
   { 0.025255737826228142, -0.2619690001010895, -0.03922714665532112, -0.12322603166103363, -0.10055292397737503, 0.16764774918556213, 0.0951811745762825, -0.008047535084187984, -0.21132676303386688, 0.2533804178237915 },
   { -0.08699612319469452, 0.18639501929283142, -0.21959970891475677, 0.30717793107032776, -0.17353524267673492, -0.14262086153030396, 0.16855528950691223, 0.016998175531625748, 0.36471787095069885, -0.1902359277009964 },
   { -0.28373637795448303, -0.08219989389181137, -0.028537770733237267, 0.0214666910469532, -0.0562044158577919, -0.032208848744630814, -0.031305551528930664, -0.08416404575109482, -0.02891514264047146, 0.24932029843330383 },
   { 0.18235090374946594, -1.0231596231460571, 0.05065736174583435, -0.24133214354515076, -0.1469876617193222, -0.02621573768556118, -0.06942562013864517, -0.301211953163147, 0.2410898655653, -0.17523588240146637 },
   { 0.3581591546535492, -0.10840781033039093, 0.20393462479114532, -0.1263987123966217, -0.30108320713043213, -0.061163581907749176, 0.3624994456768036, -0.21712042391300201, 0.4116264283657074, -0.4576050043106079 },
   { 0.26816731691360474, 0.308227002620697, 0.012588653713464737, -0.2644721567630768, -0.06146956607699394, -0.11234337091445923, 0.3231830596923828, -0.06230622157454491, 0.21150082349777222, -0.3241504430770874 },
   { -0.33649957180023193, 0.06898768246173859, 0.008768841624259949, -0.26064208149909973, 0.21581262350082397, -0.03699633479118347, -0.3078009784221649, 0.19899733364582062, -0.36792558431625366, 0.2746697664260864 },
   { -0.33496448397636414, 0.38314545154571533, 0.2506343126296997, 0.20133525133132935, 0.07911627739667892, -0.30076974630355835, -0.18546968698501587, -0.1820497363805771, -0.08706602454185486, 0.1724553257226944 },
   { -0.285769522190094, 0.2620954215526581, 0.12143100053071976, 0.009041083045303822, -0.2711827754974365, -0.35957035422325134, -0.5315534472465515, 0.48791298270225525, -0.39183393120765686, -0.4316481947898865 },
   { -0.19254747033119202, -0.12108103930950165, 0.2586527466773987, -0.05663244426250458, 0.0055764480493962765, 0.07908452302217484, -0.3335599899291992, -0.023442599922418594, 0.006490687839686871, 0.23931783437728882 },
   { -0.011722506955265999, -0.48378127813339233, 0.024253856390714645, -0.10632079839706421, -0.4399126172065735, 0.03028835915029049, -0.08438824117183685, -0.13372693955898285, 0.39394035935401917, 0.2600705623626709 },
   { 0.15527236461639404, -0.6421566009521484, -0.16188712418079376, 0.04256008565425873, -0.8812336921691895, 0.6210653781890869, 0.03615180030465126, -1.0122504234313965, 0.44282978773117065, 0.08696939051151276 },
   { -0.2537657916545868, -0.026965154334902763, -0.07490752637386322, -0.4274296164512634, -0.13127589225769043, 0.005717987194657326, -1.2855113744735718, 0.10711867362260818, 0.18385422229766846, 0.3523758053779602 },
   { 0.2504294216632843, -0.36449992656707764, -0.2017432600259781, 0.0671762153506279, -0.4024374485015869, -0.2874470055103302, -0.0963924452662468, 0.17594820261001587, 0.0920785441994667, 0.0376904159784317 },
   { 0.04499223455786705, -0.4858882427215576, -0.15399731695652008, 0.03336016461253166, 0.04203927144408226, -0.014317464083433151, 0.005227742251008749, 0.01996619626879692, -0.06416407972574234, -0.08355937153100967 },
   { 0.11701855808496475, -0.005814762786030769, -0.2762974798679352, 0.14777959883213043, -0.08602840453386307, 0.2556411623954773, -0.16240951418876648, -0.27491408586502075, 0.2820340394973755, 0.2146528661251068 },
   { -0.07222288846969604, 0.40336114168167114, -0.18125447630882263, 0.026164205744862556, 0.30465060472488403, 0.2783539593219757, -0.77712082862854, -0.19035525619983673, 0.27353766560554504, 0.17790280282497406 },
   { -0.1455010026693344, -0.16760239005088806, -0.01894618570804596, 0.033352937549352646, 0.10989390313625336, 0.0016453817952424288, 0.12901178002357483, -0.361186683177948, -0.4382998049259186, -0.14321927726268768 },
   { 0.02662244625389576, -0.04654162377119064, -0.06357710063457489, 0.3534667193889618, -0.38328495621681213, -0.08840123564004898, 0.26732614636421204, 0.2472427934408188, 0.03008507750928402, -0.2676764130592346 },
   { -0.23253458738327026, -0.09597493708133698, -0.11270970851182938, 0.21174076199531555, -0.060110751539468765, -0.06517556309700012, 0.018157096579670906, -0.16910988092422485, -0.09328344464302063, -0.5772373080253601 },
   { -0.11812887340784073, -0.42392924427986145, -0.21225470304489136, 0.11654006689786911, -0.19806040823459625, 0.0829911082983017, 0.24415473639965057, -0.4289945960044861, -0.15951411426067352, 0.2743200957775116 },
   { -0.11929304152727127, -0.4396744668483734, 0.1275252252817154, 0.1252870410680771, 0.13717783987522125, 0.10717827081680298, -0.18987825512886047, -0.32004886865615845, 0.02931593544781208, 0.18442083895206451 },
   { -0.3405934274196625, 0.09282912313938141, 0.3711988627910614, 0.11077551543712616, 0.09270087629556656, -0.1819375455379486, 0.5792834758758545, -0.22200098633766174, 0.2203901708126068, -0.39436060190200806 },
   { 0.22939173877239227, 0.047233980149030685, 0.19401437044143677, 0.042295318096876144, 0.4001684784889221, 0.15922746062278748, 0.0844685509800911, -0.04664551466703415, -0.3763461112976074, -0.1664438098669052 },
   { 0.203054741024971, -0.3220883905887604, 0.1788487583398819, 0.15499059855937958, -0.2202705293893814, -0.2840974032878876, -0.05481689050793648, 0.32020270824432373, -0.08909483999013901, 0.02499605529010296 },
   { 0.15677745640277863, 0.0064571513794362545, 0.1614050716161728, -0.23142027854919434, -0.06279623508453369, -0.30311182141304016, 0.38994893431663513, 0.1260068416595459, 0.004451986867934465, 0.13128283619880676 },
   { -0.3134572505950928, 0.2736133337020874, -0.49621400237083435, 0.23586487770080566, 0.1495523750782013, -0.11562910676002502, 0.37021365761756897, -0.05968732014298439, -0.00829342007637024, -0.061730485409498215 },
   { -0.2187395989894867, 0.1512530893087387, -0.33713042736053467, 0.21029503643512726, -0.09775035083293915, 0.2674526274204254, 0.184798002243042, 0.09990989416837692, -0.04071741923689842, 0.03344894200563431 },
   { 0.3547050356864929, 0.14318028092384338, 0.113950714468956, -0.22903691232204437, 0.2996576130390167, -0.13976089656352997, 0.04254555329680443, -0.03313515707850456, -0.21115723252296448, -0.0720277801156044 },
   { -0.13590170443058014, -0.22127561271190643, 0.09237419068813324, -0.06328287720680237, 0.006614739075303078, 0.16338412463665009, 0.09382179379463196, -0.044453371316194534, 0.15592852234840393, 0.2587868571281433 },
   { -0.3392001688480377, -0.10274601727724075, 0.010808306746184826, -0.006481382995843887, 0.35232335329055786, -0.29767629504203796, 0.4075338840484619, -0.09429372847080231, 0.38829103112220764, 0.011329952627420425 },
   { -0.2386866956949234, -0.2626379728317261, 0.2767683267593384, 0.31850022077560425, 0.253179132938385, -0.278824120759964, -0.1957169771194458, -0.0969080924987793, 0.18013501167297363, -0.09055685251951218 },
   { -0.37452366948127747, 0.49178236722946167, 0.06764064729213715, -0.2803455591201782, 0.13239675760269165, -0.1606394201517105, -0.10130774974822998, 0.4391399621963501, 0.1996011734008789, -0.1562546044588089 },
   { -0.19727203249931335, -0.0362723134458065, -0.12447600811719894, -0.04907023906707764, 0.20212846994400024, 0.0898434966802597, -0.04733145982027054, 0.031927429139614105, -0.202906534075737, 0.035931240767240524 },
   { 0.1538655012845993, -0.4098685383796692, 0.09341460466384888, -0.2782618999481201, 0.1703001856803894, -0.1492040455341339, 0.12031015008687973, 0.16632921993732452, 0.11787943542003632, -0.09935835003852844 },
   { -0.19596965610980988, 0.2924363613128662, 0.2234942466020584, 0.05301602557301521, 0.16506367921829224, 0.050885893404483795, -0.30721455812454224, 0.47914832830429077, -0.4683869779109955, -0.5737581253051758 },
   { -0.03159286454319954, 0.013386793434619904, -0.32744553685188293, -0.12714608013629913, 0.0331772044301033, -0.2330363541841507, -0.6761010885238647, 0.16082119941711426, -0.026595307514071465, 0.7620112895965576 },
   { 0.06708920747041702, -0.10581102222204208, 0.3019482493400574, 0.2774236500263214, -0.6407477259635925, 0.30795344710350037, -0.2841557562351227, -0.4312056005001068, 0.06371566653251648, -0.23243840038776398 },
   { -0.02495865896344185, -0.08839454501867294, 0.13819488883018494, 0.02780604548752308, -0.5421878695487976, 0.3611145615577698, 0.0632871687412262, -0.2512013614177704, 0.013797963038086891, -0.11735205352306366 },
   { 0.35604116320610046, 0.038245461881160736, 0.4415538012981415, -0.1142410933971405, -1.0126513242721558, 0.0676165223121643, 0.28774815797805786, -1.046356439590454, 0.37804415822029114, -0.22035233676433563 },
   { -0.16070982813835144, 0.16263175010681152, 0.17536458373069763, 0.1682831048965454, 0.39877256751060486, -0.6275549530982971, 0.06203027814626694, 0.20249369740486145, -0.2755303382873535, -0.450939804315567 },
   { 0.13619863986968994, 0.10964297503232956, -0.09695000946521759, 0.12377150356769562, -0.1917896270751953, -0.5482885837554932, -0.07841872423887253, -0.08102969825267792, -0.25219041109085083, 0.1925584375858307 },
   { 0.11216538399457932, -0.15238305926322937, 0.1136525347828865, 0.3534771502017975, -0.12297316640615463, -0.6752164959907532, -0.48929762840270996, 0.21824653446674347, -0.16481126844882965, -0.0006700474768877029 },
   { -0.04679504409432411, -0.16804319620132446, 0.11493822187185287, 0.28160178661346436, -0.27313175797462463, -0.7202067375183105, -0.10897936671972275, -0.019825879484415054, -0.01966661587357521, 0.1782524287700653 },
   { 0.19368980824947357, 0.18210768699645996, 0.1796250194311142, -0.6504276394844055, 0.35772645473480225, -0.22160200774669647, 0.14243783056735992, 0.10792829096317291, 0.1992439478635788, -0.22996972501277924 },
   { -0.14405395090579987, 0.16034618020057678, 0.4273129999637604, -0.0651923269033432, -0.055953726172447205, 0.022026969119906425, -0.38628432154655457, -0.16428163647651672, -0.1021244153380394, 0.23652397096157074 },
   { 0.06457357108592987, -0.2614428400993347, 0.031222645193338394, -0.1573316901922226, 0.21861036121845245, -0.08236908912658691, 0.13165687024593353, -0.026162125170230865, -0.11932217329740524, 0.1170196384191513 },
   { 0.08176973462104797, -0.548076868057251, -0.11568207293748856, -0.10005717724561691, -0.30996909737586975, -0.26072224974632263, 0.4091529846191406, 0.1788739413022995, 0.23072028160095215, 0.09333618730306625 },
   { -0.19611039757728577, -0.6716606616973877, -0.13895843923091888, -0.6195464730262756, 0.21365869045257568, 0.18381063640117645, 0.016968676820397377, 0.11015426367521286, 0.6195408701896667, -0.3168772757053375 },
   { -0.06798776239156723, -0.15461470186710358, 0.4993281364440918, -0.1503496617078781, -0.12274562567472458, 0.27267196774482727, 0.07494548708200455, 0.21872270107269287, 0.22300922870635986, -0.38927289843559265 },
   { -0.14912009239196777, -0.034911200404167175, -0.04943666607141495, 0.19978173077106476, -0.12888823449611664, 0.1610262393951416, -0.06434586644172668, 0.009993623942136765, -0.09469635039567947, -0.14434537291526794 },
   { -0.012070059776306152, -0.03104853816330433, -0.29400137066841125, -0.037574123591184616, -0.07331184297800064, 0.25585639476776123, 0.09848485887050629, -0.022751057520508766, -0.016956161707639694, 0.2648807466030121 },
   { -0.3185417652130127, -0.2101285606622696, -0.27604323625564575, 0.20811781287193298, 0.23786351084709167, 0.2495693862438202, 0.31803691387176514, -0.037585243582725525, -0.07194473594427109, -0.11650171875953674 },
   { -0.40319186449050903, -0.03882793337106705, -0.2612263560295105, 0.5016815066337585, 0.2733467221260071, 0.41283562779426575, 0.05136217549443245, -0.3018089532852173, 0.12891797721385956, -0.16626223921775818 },
   { -0.44714221358299255, 0.08510313183069229, -0.44925960898399353, 0.36489298939704895, -0.6391974091529846, 0.41149982810020447, 0.10751592367887497, -0.5146856904029846, 0.36609578132629395, -0.31883636116981506 },
   { 0.02756643109023571, 0.23386259377002716, -0.406843364238739, 0.024568265303969383, -0.4198535680770874, 0.2819138467311859, -0.01918221078813076, -0.8696325421333313, 0.39725732803344727, 0.19346970319747925 },
   { -0.19644594192504883, -0.4941907525062561, 0.06539569795131683, 0.16927070915699005, 0.26337477564811707, -0.07686467468738556, -0.16779695451259613, -0.04969649761915207, -0.04369361326098442, 0.08959584683179855 },
   { -0.06256485730409622, 0.2237444519996643, -0.039859600365161896, 0.3283635377883911, -0.5513356328010559, -0.35343703627586365, -0.5070526003837585, 0.4123223125934601, 0.0642286166548729, -0.5477698445320129 },
   { -0.049690257757902145, -0.07916723936796188, 0.21213418245315552, 0.2778399586677551, -0.9769390225410461, -0.4138219356536865, -0.1652224361896515, 0.4061400294303894, -0.38203921914100647, 0.1896180808544159 },
   { 0.40111973881721497, -0.2706339359283447, -0.04746350273489952, -0.13541461527347565, -1.0362855195999146, -0.12585891783237457, -0.03026445209980011, 0.27615243196487427, -0.022477559745311737, -0.02561994083225727 },
   { -0.10665762424468994, -0.2290618121623993, 0.04411165043711662, 0.24689508974552155, 0.010217872448265553, -0.24796614050865173, -0.3834259510040283, 0.25248271226882935, 0.42575085163116455, -0.7228024005889893 },
   { -0.36524567008018494, 0.20832857489585876, 0.15802575647830963, 0.12105144560337067, -0.33649519085884094, -0.24129381775856018, -0.8108147382736206, 0.16669687628746033, -0.06942515075206757, -0.06289701163768768 },
   { -0.12447770684957504, -0.20216485857963562, 0.19493384659290314, 0.19411520659923553, -0.3376436233520508, 0.08528371155261993, -0.27224236726760864, 0.18063047528266907, 0.040059708058834076, -0.005427829921245575 },
   { 0.3262554109096527, -0.5923752188682556, -0.37862423062324524, -0.16788917779922485, -0.6394121646881104, -0.17380957305431366, 0.10028871148824692, -0.03043229691684246, -0.3708973824977875, 0.29453471302986145 },
   { -0.3935585618019104, 0.11734732240438461, -0.19522908329963684, -0.1372005045413971, 0.19262957572937012, 0.20149186253547668, -0.41032737493515015, 0.04673275724053383, 0.23070122301578522, -0.08510127663612366 },
   { -0.6353949904441833, -0.01974317990243435, -0.17989087104797363, 0.07545104622840881, 0.21295133233070374, -0.12038807570934296, -0.16957469284534454, 0.011116164736449718, -0.25405898690223694, 0.22059428691864014 },
   { -0.5829047560691833, -0.1656399518251419, 0.1854165941476822, 0.30496764183044434, 0.22981594502925873, 0.1679149568080902, -0.22037357091903687, 0.11896615475416183, -0.2957971692085266, -0.11676964908838272 },
   { 0.18947146832942963, -0.6893980503082275, -0.7536062002182007, -0.07407649606466293, -0.4026415944099426, 0.35478630661964417, -0.3556237816810608, 0.307964950799942, -0.03972409665584564, -0.5604956746101379 },
   { -0.3078347444534302, 0.30979660153388977, -0.5766115188598633, -0.24604500830173492, 0.5250695943832397, 0.12658698856830597, -0.3013264238834381, 0.21044841408729553, -0.47311311960220337, 0.11783496290445328 },
   { -0.29805007576942444, 0.07322648167610168, -0.11930738389492035, 0.23726287484169006, -0.08024725317955017, -0.1527964323759079, -0.4228176176548004, 0.13957487046718597, -0.6244221329689026, 0.2527237832546234 },
   { -0.22272413969039917, 0.16925188899040222, -0.27164098620414734, 0.3212023675441742, -0.12164891511201859, 0.506611168384552, 0.16608251631259918, -0.017809567973017693, -0.5615349411964417, -0.13952641189098358 },
   { 0.1364690214395523, 0.6679239869117737, 0.7029955387115479, -0.20485280454158783, -1.0391887426376343, -0.20221398770809174, 0.12243252247571945, -0.4057050943374634, 0.08535942435264587, 0.09415184706449509 }
  };


const T dense_biases [10] = { 0.20136140286922455, 0.3191526234149933, -0.20235741138458252, -0.04766606539487839, 0.0841626450419426, 0.025649135932326317, -0.09946108609437943, -0.03880639001727104, 0.024690896272659302, -0.16279122233390808 };
# 3 "lib/dense.cpp" 2

void
dense_layer
(
  T flat_array [(10 * ((((28 - (5 - 1)) / 2) - (5 - 1)) / 2) * ((((28 - (5 - 1)) / 2) - (5 - 1)) / 2))],
  T prediction [10]
)
{_ssdm_SpecArrayDimSize(flat_array, 160);_ssdm_SpecArrayDimSize(prediction, 10);
  T w_sum = 0.0;
  T dense_array [10] = { 0 };

  for (int d = 0; d < 10; ++d)
  {
    w_sum = 0.0;

    for (int f = 0; f < (10 * ((((28 - (5 - 1)) / 2) - (5 - 1)) / 2) * ((((28 - (5 - 1)) / 2) - (5 - 1)) / 2)); ++f)
    {
      w_sum += dense_weights[f][d] * flat_array[f];
    }

    dense_array[d] = w_sum + dense_biases[d];
  }

  soft_max(dense_array, prediction);
}
