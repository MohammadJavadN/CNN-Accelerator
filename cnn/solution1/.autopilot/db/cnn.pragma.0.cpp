# 1 "cnn.cpp"
# 1 "cnn.cpp" 1
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
# 1 "cnn.cpp" 2
# 1 "./lib/cnn.h" 1


# 1 "./lib/definitions.h" 1



typedef float T;
# 4 "./lib/cnn.h" 2
# 1 "./lib/utils.h" 1



# 1 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 1 3








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
# 9 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3


# 1 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw_print_push.h" 1 3
# 11 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3


#pragma pack(push,_CRT_PACKING)


extern "C" {
# 26 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
  };
  typedef struct _iobuf FILE;
# 84 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  typedef long _off_t;

  typedef long off_t;






  __extension__ typedef long long _off64_t;

  __extension__ typedef long long off64_t;





  __attribute__ ((__dllimport__)) FILE * __iob_func(void);
# 120 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __extension__ typedef long long fpos_t;
# 157 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __attribute__ ((__dllimport__)) int _filbuf(FILE *_File);
  __attribute__ ((__dllimport__)) int _flsbuf(int _Ch,FILE *_File);



  __attribute__ ((__dllimport__)) FILE * _fsopen(const char *_Filename,const char *_Mode,int _ShFlag);

  void clearerr(FILE *_File);
  int fclose(FILE *_File);
  __attribute__ ((__dllimport__)) int _fcloseall(void);



  __attribute__ ((__dllimport__)) FILE * _fdopen(int _FileHandle,const char *_Mode);

  int feof(FILE *_File);
  int ferror(FILE *_File);
  int fflush(FILE *_File);
  int fgetc(FILE *_File);
  __attribute__ ((__dllimport__)) int _fgetchar(void);
  int fgetpos(FILE * __restrict__ _File ,fpos_t * __restrict__ _Pos);
  char * fgets(char * __restrict__ _Buf,int _MaxCount,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int _fileno(FILE *_File);



  __attribute__ ((__dllimport__)) char * _tempnam(const char *_DirName,const char *_FilePrefix);
  __attribute__ ((__dllimport__)) int _flushall(void);
  FILE * fopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode) ;
  FILE *fopen64(const char * __restrict__ filename,const char * __restrict__ mode);
  int fprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);
  int fputc(int _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) int _fputchar(int _Ch);
  int fputs(const char * __restrict__ _Str,FILE * __restrict__ _File);
  size_t fread(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  FILE * freopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode,FILE * __restrict__ _File) ;
  int fscanf(FILE * __restrict__ _File,const char * __restrict__ _Format,...) ;
  int _fscanf_l(FILE * __restrict__ _File,const char * __restrict__ _Format,_locale_t locale,...) ;
  int fsetpos(FILE *_File,const fpos_t *_Pos);
  int fseek(FILE *_File,long _Offset,int _Origin);
  int fseeko64(FILE* stream, _off64_t offset, int whence);
  long ftell(FILE *_File);
  _off64_t ftello64(FILE * stream);
  __extension__ int _fseeki64(FILE *_File,long long _Offset,int _Origin);
  __extension__ long long _ftelli64(FILE *_File);
  size_t fwrite(const void * __restrict__ _Str,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  int getc(FILE *_File);
  int getchar(void);
  __attribute__ ((__dllimport__)) int _getmaxstdio(void);
  char * gets(char *_Buffer) ;
  int _getw(FILE *_File);


  void perror(const char *_ErrMsg);

  __attribute__ ((__dllimport__)) int _pclose(FILE *_File);
  __attribute__ ((__dllimport__)) FILE * _popen(const char *_Command,const char *_Mode);




  int printf(const char * __restrict__ _Format,...);
  int putc(int _Ch,FILE *_File);
  int putchar(int _Ch);
  int puts(const char *_Str);
  __attribute__ ((__dllimport__)) int _putw(int _Word,FILE *_File);


  int remove(const char *_Filename);
  int rename(const char *_OldFilename,const char *_NewFilename);
  __attribute__ ((__dllimport__)) int _unlink(const char *_Filename);

  int unlink(const char *_Filename) ;


  void rewind(FILE *_File);
  __attribute__ ((__dllimport__)) int _rmtmp(void);
  int scanf(const char * __restrict__ _Format,...) ;
  int _scanf_l(const char * __restrict__ format,_locale_t locale,... ) ;
  void setbuf(FILE * __restrict__ _File,char * __restrict__ _Buffer) ;
  __attribute__ ((__dllimport__)) int _setmaxstdio(int _Max);
  __attribute__ ((__dllimport__)) unsigned int _set_output_format(unsigned int _Format);
  __attribute__ ((__dllimport__)) unsigned int _get_output_format(void);
  unsigned int __mingw_set_output_format(unsigned int _Format);
  unsigned int __mingw_get_output_format(void);




  int setvbuf(FILE * __restrict__ _File,char * __restrict__ _Buf,int _Mode,size_t _Size);
  __attribute__ ((__dllimport__)) int _scprintf(const char * __restrict__ _Format,...);
  int sscanf(const char * __restrict__ _Src,const char * __restrict__ _Format,...) ;
  int _sscanf_l(const char * __restrict__ buffer,const char * __restrict__ format,_locale_t locale,...) ;
  __attribute__ ((__dllimport__)) int _snscanf(const char * __restrict__ _Src,size_t _MaxCount,const char * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _snscanf_l(const char * __restrict__ input,size_t length,const char * __restrict__ format,_locale_t locale,...) ;
  FILE * tmpfile(void) ;
  char * tmpnam(char *_Buffer);
  int ungetc(int _Ch,FILE *_File);
  int vfprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,va_list _ArgList);
  int vprintf(const char * __restrict__ _Format,va_list _ArgList);


  extern
    __attribute__((__format__ (gnu_printf, 3, 0))) __attribute__ ((__nonnull__ (3)))
    int __mingw_vsnprintf(char * __restrict__ _DstBuf,size_t _MaxCount,const char * __restrict__ _Format,
      va_list _ArgList);
  extern
    __attribute__((__format__ (gnu_printf, 3, 4))) __attribute__ ((__nonnull__ (3)))
    int __mingw_snprintf(char * __restrict__ s, size_t n, const char * __restrict__ format, ...);
  extern
    __attribute__((__format__ (gnu_printf, 1, 2))) __attribute__ ((__nonnull__ (1)))
    int __mingw_printf(const char * __restrict__ , ... ) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 1, 0))) __attribute__ ((__nonnull__ (1)))
    int __mingw_vprintf (const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
    int __mingw_fprintf (FILE * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
    int __mingw_vfprintf (FILE * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
    int __mingw_sprintf (char * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
    int __mingw_vsprintf (char * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));

  __attribute__ ((__dllimport__)) int _snprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _snprintf_l(char * __restrict__ buffer,size_t count,const char * __restrict__ format,_locale_t locale,...) ;
  __attribute__ ((__dllimport__)) int _vsnprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,va_list _Args) ;
  __attribute__ ((__dllimport__)) int _vsnprintf_l(char * __restrict__ buffer,size_t count,const char * __restrict__ format,_locale_t locale,va_list argptr) ;
  int sprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,...) ;
  int _sprintf_l(char * __restrict__ buffer,const char * __restrict__ format,_locale_t locale,...) ;
  int vsprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,va_list _Args) ;







  int vsnprintf(char * __restrict__ _DstBuf,size_t _MaxCount,const char * __restrict__ _Format,va_list _ArgList) ;

  int snprintf(char * __restrict__ s, size_t n, const char * __restrict__ format, ...);
# 312 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  int vscanf(const char * __restrict__ Format, va_list argp);
  int vfscanf (FILE * __restrict__ fp, const char * __restrict__ Format,va_list argp);
  int vsscanf (const char * __restrict__ _Str,const char * __restrict__ Format,va_list argp);

  __attribute__ ((__dllimport__)) int _vscprintf(const char * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _set_printf_count_output(int _Value);
  __attribute__ ((__dllimport__)) int _get_printf_count_output(void);
# 330 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __attribute__ ((__dllimport__)) FILE * _wfsopen(const wchar_t *_Filename,const wchar_t *_Mode,int _ShFlag);


  wint_t fgetwc(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _fgetwchar(void);
  wint_t fputwc(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _fputwchar(wchar_t _Ch);
  wint_t getwc(FILE *_File);
  wint_t getwchar(void);
  wint_t putwc(wchar_t _Ch,FILE *_File);
  wint_t putwchar(wchar_t _Ch);
  wint_t ungetwc(wint_t _Ch,FILE *_File);
  wchar_t * fgetws(wchar_t * __restrict__ _Dst,int _SizeInWords,FILE * __restrict__ _File);
  int fputws(const wchar_t * __restrict__ _Str,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) wchar_t * _getws(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) int _putws(const wchar_t *_Str);
  int fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
  int wprintf(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _scwprintf(const wchar_t * __restrict__ _Format,...);
  int vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
  int vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int swprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ , ...) ;
  __attribute__ ((__dllimport__)) int _swprintf_l(wchar_t * __restrict__ buffer,size_t count,const wchar_t * __restrict__ format,_locale_t locale,... ) ;
  __attribute__ ((__dllimport__)) int vswprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ ,va_list) ;
  __attribute__ ((__dllimport__)) int _swprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vswprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _snwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _vsnwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,va_list _Args) ;





  int snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, ...);
  int vsnwprintf (wchar_t * __restrict__ , size_t, const wchar_t * __restrict__ , va_list);
# 373 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  int vwscanf (const wchar_t * __restrict__ , va_list);
  int vfwscanf (FILE * __restrict__ ,const wchar_t * __restrict__ ,va_list);
  int vswscanf (const wchar_t * __restrict__ ,const wchar_t * __restrict__ ,va_list);

  __attribute__ ((__dllimport__)) int _fwprintf_p(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _wprintf_p(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vfwprintf_p(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vwprintf_p(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _swprintf_p(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vswprintf_p(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _scwprintf_p(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vscwprintf_p(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _wprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _wprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _fwprintf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _fwprintf_p_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vfwprintf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vfwprintf_p_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _swprintf_c_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _swprintf_p_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vswprintf_c_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vswprintf_p_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _scwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _scwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vscwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _snwprintf_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vsnwprintf_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList) ;
  __attribute__ ((__dllimport__)) int _swprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vswprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,va_list _Args);
  __attribute__ ((__dllimport__)) int __swprintf_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,_locale_t _Plocinfo,...) ;
  __attribute__ ((__dllimport__)) int _vswprintf_l(wchar_t * __restrict__ buffer,size_t count,const wchar_t * __restrict__ format,_locale_t locale,va_list argptr) ;
  __attribute__ ((__dllimport__)) int __vswprintf_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,_locale_t _Plocinfo,va_list _Args) ;
# 417 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __attribute__ ((__dllimport__)) wchar_t * _wtempnam(const wchar_t *_Directory,const wchar_t *_FilePrefix);
  __attribute__ ((__dllimport__)) int _vscwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vscwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  int fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _fwscanf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  int swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _swscanf_l(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  __attribute__ ((__dllimport__)) int _snwscanf(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _snwscanf_l(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  int wscanf(const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _wscanf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  __attribute__ ((__dllimport__)) FILE * _wfdopen(int _FileHandle ,const wchar_t *_Mode);
  __attribute__ ((__dllimport__)) FILE * _wfopen(const wchar_t * __restrict__ _Filename,const wchar_t *__restrict__ _Mode) ;
  __attribute__ ((__dllimport__)) FILE * _wfreopen(const wchar_t * __restrict__ _Filename,const wchar_t * __restrict__ _Mode,FILE * __restrict__ _OldFile) ;



  __attribute__ ((__dllimport__)) void _wperror(const wchar_t *_ErrMsg);

  __attribute__ ((__dllimport__)) FILE * _wpopen(const wchar_t *_Command,const wchar_t *_Mode);




  __attribute__ ((__dllimport__)) int _wremove(const wchar_t *_Filename);
  __attribute__ ((__dllimport__)) wchar_t * _wtmpnam(wchar_t *_Buffer);
  __attribute__ ((__dllimport__)) wint_t _fgetwc_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _fputwc_nolock(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _ungetwc_nolock(wint_t _Ch,FILE *_File);
# 475 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __attribute__ ((__dllimport__)) void _lock_file(FILE *_File);
  __attribute__ ((__dllimport__)) void _unlock_file(FILE *_File);
  __attribute__ ((__dllimport__)) int _fclose_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) int _fflush_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) size_t _fread_nolock(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int _fseek_nolock(FILE *_File,long _Offset,int _Origin);
  __attribute__ ((__dllimport__)) long _ftell_nolock(FILE *_File);
  __extension__ __attribute__ ((__dllimport__)) int _fseeki64_nolock(FILE *_File,long long _Offset,int _Origin);
  __extension__ __attribute__ ((__dllimport__)) long long _ftelli64_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) size_t _fwrite_nolock(const void * __restrict__ _DstBuf,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int _ungetc_nolock(int _Ch,FILE *_File);





  char * tempnam(const char *_Directory,const char *_FilePrefix) ;
  int fcloseall(void) ;
  FILE * fdopen(int _FileHandle,const char *_Format) ;
  int fgetchar(void) ;
  int fileno(FILE *_File) ;
  int flushall(void) ;
  int fputchar(int _Ch) ;
  int getw(FILE *_File) ;
  int putw(int _Ch,FILE *_File) ;
  int rmtmp(void) ;



}


#pragma pack(pop)


# 1 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/stdio_s.h" 1 3








# 1 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 1 3
# 9 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/stdio_s.h" 2 3
# 509 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3


# 1 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw_print_pop.h" 1 3
# 511 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3
# 5 "./lib/utils.h" 2
# 1 "E:/Xilinx/Vivado/2019.1/common/technology/autopilot\\hls_stream.h" 1
# 66 "E:/Xilinx/Vivado/2019.1/common/technology/autopilot\\hls_stream.h"
# 1 "E:/Xilinx/Vivado/2019.1/common/technology/autopilot/etc/autopilot_enum.h" 1
# 58 "E:/Xilinx/Vivado/2019.1/common/technology/autopilot/etc/autopilot_enum.h"
enum SsdmDataTypes {
    _ssdm_sc_int = 0,
    _ssdm_c_int = _ssdm_sc_int,
    _ssdm_sc_uint = 1,
    _ssdm_c_uint = _ssdm_sc_uint,
    _ssdm_sc_bigint = 2,
    _ssdm_sc_biguint = 3,
};



enum SsdmPortTypes {
    _ssdm_sc_in = 0,
    _ssdm_sc_out = 1,
    _ssdm_sc_inout = 2,
    _ssdm_sc_in_clk,

    _ssdm_fifo_in,
    _ssdm_sc_fifo_in = _ssdm_fifo_in,
    _ssdm_tlm_fifo_in = _ssdm_fifo_in,
    _ssdm_fifo_out,
    _ssdm_sc_fifo_out = _ssdm_fifo_out,
    _ssdm_tlm_fifo_out = _ssdm_fifo_out,
    _ssdm_fifo_inout,
    _ssdm_sc_fifo_inout = _ssdm_fifo_inout,
    _ssdm_tlm_fifo_inout = _ssdm_fifo_inout,
    _ssdm_sc_bus,
    _ssdm_hls_bus_port = _ssdm_sc_bus,
    _ssdm_AXI4M_bus_port = _ssdm_sc_bus,
    _ssdm_port_end,
};



enum SsdmProcessTypes {
    _ssdm_method = 0,
    _ssdm_sc_method = _ssdm_method,
    _ssdm_thread = 1,
    _ssdm_sc_thread = _ssdm_thread,
    _ssdm_cthread = 2,
    _ssdm_sc_cthread = _ssdm_cthread,
    _ssdm_process_end,
};



enum SsdmSensitiveTypes {
    _ssdm_sensitive = 0,
    _ssdm_sensitive_pos,
    _ssdm_sensitive_neg,
    _ssdm_sensitive_reset0,
    _ssdm_sensitive_reset1,
    _ssdm_sensitive_end,
};



enum SsdmChannelTypes {
    _ssdm_sc_sig,
    _ssdm_fifo,
    _ssdm_sc_fifo = _ssdm_fifo,
    _ssdm_mem_fifo,
    _ssdm_sc_mem_fifo = _ssdm_mem_fifo,
};


enum SsdmRegionTypes {
    _ssdm_region_reset,
    _ssdm_region_protocol,
    _ssdm_region_pipeline,
    _ssdm_region_parallel,
};
# 67 "E:/Xilinx/Vivado/2019.1/common/technology/autopilot\\hls_stream.h" 2


namespace hls {
# 78 "E:/Xilinx/Vivado/2019.1/common/technology/autopilot\\hls_stream.h"
template<typename __STREAM_T__>
class stream
{
  public:

    inline __attribute__((always_inline)) stream() {
    }

    inline __attribute__((always_inline)) stream(const char* name) {
    }


  private:
    inline __attribute__((always_inline)) stream(const stream< __STREAM_T__ >& chn):V(chn.V) {
    }

    inline __attribute__((always_inline)) stream& operator= (const stream< __STREAM_T__ >& chn) {
        V = chn.V;
        return *this;
    }

  public:

    inline __attribute__((always_inline)) void operator >> (__STREAM_T__& rdata) {
        read(rdata);
    }

    inline __attribute__((always_inline)) void operator << (const __STREAM_T__& wdata) {
        write(wdata);
    }


  public:

    inline __attribute__((always_inline)) bool empty() const {

        bool tmp = _ssdm_StreamCanRead(&V);
        return !tmp;



    }

    inline __attribute__((always_inline)) bool full() const {

        bool tmp = _ssdm_StreamCanWrite(&V);
        return !tmp;



    }


    inline __attribute__((always_inline)) void read(__STREAM_T__& dout) {

        __STREAM_T__ tmp;
        _ssdm_StreamRead(&V, &tmp);
        dout = tmp;



    }

    inline __attribute__((always_inline)) __STREAM_T__ read() {
       __STREAM_T__ tmp;
       read(tmp);
       return tmp;
    }


    inline __attribute__((always_inline)) bool read_nb(__STREAM_T__& dout) {

        __STREAM_T__ tmp;
        bool empty_n = _ssdm_StreamNbRead(&V, &tmp);
        dout = tmp;
        return empty_n;



    }


    inline __attribute__((always_inline)) void write(const __STREAM_T__& din) {

        __STREAM_T__ tmp = din;
        _ssdm_StreamWrite(&V, &tmp);



    }


    inline __attribute__((always_inline)) bool write_nb(const __STREAM_T__& din) {

        __STREAM_T__ tmp = din;
        bool full_n = _ssdm_StreamNbWrite(&V, &tmp);
        return full_n;



    }



    inline __attribute__((always_inline)) unsigned size() {
        unsigned size = _ssdm_StreamSize(&V);
        return size;
    }


  public:
    __STREAM_T__ V;
};


}
# 6 "./lib/utils.h" 2

void
normalization
(
  hls::stream<T> &img_in ,
  hls::stream<T> &img_out
);
# 5 "./lib/cnn.h" 2
# 1 "./lib/activ_fun.h" 1



# 1 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 1 3
# 10 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
# 10 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3


# 1 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
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
# 5 "./lib/activ_fun.h" 2

T relu (T x);

void soft_max(T dense_array [10], T pred[10]);
# 6 "./lib/cnn.h" 2
# 1 "./lib/conv.h" 1






void convolutional_layer1
(
  hls::stream<T> &src,
  T dst[6][(28 - (5 - 1))][(28 - (5 - 1))]
);
void convolutional_layer2
(
  T src[((28 - (5 - 1)) / 2)][((28 - (5 - 1)) / 2)],
  T dst[10][(((28 - (5 - 1)) / 2) - (5 - 1))][(((28 - (5 - 1)) / 2) - (5 - 1))],
  const T weights[10][5][5]
);
# 7 "./lib/cnn.h" 2
# 1 "./lib/pool.h" 1




# 1 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/include\\float.h" 1 3 4
# 33 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/include\\float.h" 3 4
# 1 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\float.h" 1 3 4
# 28 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\float.h" 3 4
# 1 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3 4
# 28 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\float.h" 2 3 4
# 130 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\float.h" 3 4
extern "C" {





__attribute__ ((__dllimport__)) unsigned int __attribute__ ((__nothrow__)) _controlfp (unsigned int unNew, unsigned int unMask) ;
__attribute__ ((__dllimport__)) unsigned int __attribute__ ((__nothrow__)) _control87 (unsigned int unNew, unsigned int unMask);


__attribute__ ((__dllimport__)) unsigned int __attribute__ ((__nothrow__)) _clearfp (void);
__attribute__ ((__dllimport__)) unsigned int __attribute__ ((__nothrow__)) _statusfp (void);
# 155 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\float.h" 3 4
void __attribute__ ((__nothrow__)) _fpreset (void);
void __attribute__ ((__nothrow__)) fpreset (void);


__attribute__ ((__dllimport__)) int * __attribute__ ((__nothrow__)) __fpecode(void);
# 184 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\float.h" 3 4
}
# 33 "E:/Xilinx/Vivado/2019.1/win64/tools/clang/bin/../lib/clang/3.1/include\\float.h" 2 3 4
# 6 "./lib/pool.h" 2

void
max_pooling_layer1
(
  T features [6][(28 - (5 - 1))][(28 - (5 - 1))],
  T pool_features [6][((28 - (5 - 1)) / 2)][((28 - (5 - 1)) / 2)]
);
void
max_pooling_layer2
(
  T features [10][(((28 - (5 - 1)) / 2) - (5 - 1))][(((28 - (5 - 1)) / 2) - (5 - 1))],
  T pool_features [10][((((28 - (5 - 1)) / 2) - (5 - 1)) / 2)][((((28 - (5 - 1)) / 2) - (5 - 1)) / 2)],
  const T conv_biases2[10]
);
# 8 "./lib/cnn.h" 2
# 1 "./lib/flat.h" 1




void
flattening_layer
(
  T pool_features [10][((((28 - (5 - 1)) / 2) - (5 - 1)) / 2)][((((28 - (5 - 1)) / 2) - (5 - 1)) / 2)],
  T flat_array [(10 * ((((28 - (5 - 1)) / 2) - (5 - 1)) / 2) * ((((28 - (5 - 1)) / 2) - (5 - 1)) / 2))]
);
# 9 "./lib/cnn.h" 2
# 1 "./lib/dense.h" 1





void
dense_layer
(
  T flat_array [(10 * ((((28 - (5 - 1)) / 2) - (5 - 1)) / 2) * ((((28 - (5 - 1)) / 2) - (5 - 1)) / 2))],
  T dense_array [10]
);
# 10 "./lib/cnn.h" 2

void cnn
(
  hls::stream<T> &img_in ,
  T pred [10]
);
# 2 "cnn.cpp" 2
# 1 "./lib/conv2_weights.h" 1
# 11 "./lib/conv2_weights.h"
const T conv2_weights [6][10][5][5]
 = {
 {
  {
   { 0.17505542933940887, 0.21792259812355042, 0.17222557961940765, -0.16913001239299774, -0.3357177674770355 },
   { -0.05597180500626564, 0.08540970832109451, -0.3830314874649048, -0.017347650602459908, -0.43274787068367004 },
   { 0.11945006996393204, 0.4801405966281891, -0.0647038072347641, -0.3209794759750366, 0.06878238916397095 },
   { -0.3696240186691284, 0.14900700747966766, 0.05184827372431755, 0.03406388312578201, 0.12496467679738998 },
   { 0.1732271909713745, -0.31101515889167786, 0.01619465835392475, 0.2816806137561798, 0.3975526988506317 }
  },
  {
   { -0.052632205188274384, -1.0092030763626099, -0.3577907979488373, -0.08927392959594727, -0.37815433740615845 },
   { 0.18865132331848145, -0.010102937929332256, -0.22064891457557678, -0.37571945786476135, -0.33148083090782166 },
   { 0.3150221109390259, 0.26302745938301086, 0.015046400018036366, -0.4484281837940216, -0.6369354128837585 },
   { 0.1555090695619583, 0.494035542011261, -0.05116869881749153, -0.07442890107631683, -0.42109349370002747 },
   { 0.16650137305259705, 0.07350652664899826, -0.15364418923854828, 0.14536070823669434, -0.3886267840862274 }
  },
  {
   { -0.019239796325564384, 0.2598169445991516, 0.20298418402671814, 0.3012775182723999, -0.46546095609664917 },
   { -0.25375494360923767, 0.231284499168396, 0.04988882318139076, -0.4047115743160248, -0.18284113705158234 },
   { 0.2083982676267624, 0.22335770726203918, -0.15744677186012268, -0.008700458332896233, -0.39921626448631287 },
   { -0.44630420207977295, -0.245418518781662, -0.45798632502555847, -0.3406718373298645, -0.4801015257835388 },
   { -0.287365198135376, -0.2576753795146942, 0.05701177939772606, -0.10579126328229904, -0.2783389985561371 }
  },
  {
   { -0.311403751373291, -0.13519340753555298, -0.269866406917572, -0.5325556993484497, -0.4519725441932678 },
   { -0.13335096836090088, -0.5680614113807678, -0.27729710936546326, -0.3600040078163147, -0.8362041115760803 },
   { -0.4237808287143707, -0.5150266885757446, -0.2723681926727295, 0.19396699965000153, 0.7734037041664124 },
   { -0.21446014940738678, 0.0666184052824974, 0.19963811337947845, 0.3169025480747223, 0.5097672343254089 },
   { -0.1687915325164795, -0.1502632349729538, -0.05592998489737511, 0.1902618408203125, -0.015100455842912197 }
  },
  {
   { -0.42966151237487793, -0.05239385738968849, -0.140674889087677, -0.6998431086540222, -0.48886221647262573 },
   { -0.06918130815029144, 0.4607061445713043, 0.10911508649587631, -0.25298264622688293, -0.306828111410141 },
   { -0.08206866681575775, 0.27623945474624634, 0.27878454327583313, -0.1818028837442398, -0.5108155012130737 },
   { 0.27368780970573425, 0.1876002699136734, 0.20868270099163055, -0.13166925311088562, -0.14057326316833496 },
   { 0.21382124722003937, -0.03813910111784935, -0.15515542030334473, -0.40108922123908997, -0.050830308347940445 }
  },
  {
   { 0.28197506070137024, -0.2502038776874542, 0.1447267383337021, -0.19921669363975525, -0.2910998463630676 },
   { -0.057933107018470764, 0.1180500015616417, 0.2433788925409317, 0.27402055263519287, -0.03648548573255539 },
   { -0.20796933770179749, -0.42495670914649963, -0.1516362726688385, -0.06443336606025696, 0.354047954082489 },
   { -0.2816390097141266, -0.23237134516239166, 0.00850469246506691, 0.4585232436656952, 0.5096248984336853 },
   { -0.16140024363994598, 0.10162900388240814, 0.08507366478443146, 0.47298938035964966, 0.33428817987442017 }
  },
  {
   { -0.21186910569667816, -0.09202026575803757, -0.07925668358802795, -0.42056378722190857, -0.4293486177921295 },
   { -0.30083906650543213, -0.0820520892739296, 0.1173095554113388, 0.13811178505420685, 0.12168911099433899 },
   { -0.4375424385070801, 0.33384233713150024, 0.48611050844192505, 0.2837373912334442, 0.7791869640350342 },
   { -0.1558500975370407, 0.17332319915294647, 0.06957873702049255, -0.33903124928474426, 0.12179648131132126 },
   { 0.23442617058753967, 0.26429668068885803, 0.018605124205350876, -0.4385601282119751, -0.5939041376113892 }
  },
  {
   { 0.12337895482778549, -0.09421432018280029, -0.18479597568511963, -0.2218838483095169, -0.004082974512130022 },
   { -0.11920452862977982, 0.0581868439912796, 0.17711542546749115, 0.04391980543732643, -0.2164672464132309 },
   { -0.45208775997161865, -0.16491150856018066, -0.23075608909130096, 0.025682315230369568, -0.06242046505212784 },
   { -0.2046363800764084, -0.39450931549072266, 0.1089165061712265, -0.34073948860168457, -0.6238957047462463 },
   { 0.3633783161640167, 0.3814406394958496, 0.3683475852012634, -0.01447848230600357, 0.050826266407966614 }
  },
  {
   { -0.11788512021303177, -0.1918582320213318, 0.18298067152500153, 0.20891058444976807, 0.40504443645477295 },
   { -0.06748554855585098, 0.040970176458358765, 0.22506609559059143, 0.17289525270462036, 0.2550147473812103 },
   { -0.22005394101142883, 0.19283398985862732, 0.24788251519203186, 0.31235215067863464, 0.3041554093360901 },
   { 0.06574614346027374, 0.016175176948308945, -0.08724400401115417, -0.19879397749900818, -0.499504417181015 },
   { 0.11832596361637115, -0.24323973059654236, -0.2805362343788147, -0.29950225353240967, -0.23829716444015503 }
  },
  {
   { 0.08043430000543594, 0.16734234988689423, 0.0687563419342041, -0.4350806474685669, -0.19822263717651367 },
   { 0.4215916395187378, -0.027557313442230225, 0.032371629029512405, -0.23941980302333832, 0.18992896378040314 },
   { -0.059058114886283875, -0.0400371253490448, 0.10186571627855301, 0.11970634013414383, 0.3115435540676117 },
   { -0.07217485457658768, -0.07734758406877518, 0.23028551042079926, -0.10131988674402237, -0.02604723535478115 },
   { -0.2928367853164673, 0.07413908839225769, -0.40396395325660706, -0.3288824260234833, 0.04451104998588562 }
  }
 },
 {
  {
   { -0.2763206362724304, -0.027417749166488647, -0.19993989169597626, -0.07532066106796265, 0.44965660572052 },
   { -0.11381543427705765, 0.15072457492351532, 0.29644453525543213, -0.12173215299844742, 0.05542484298348427 },
   { -0.24738143384456635, -0.4236137866973877, -0.18325573205947876, -0.23039467632770538, 0.4054649770259857 },
   { 0.13407514989376068, -0.0295859482139349, 0.44916272163391113, 0.5253911018371582, 0.3052109181880951 },
   { -0.16640885174274445, -0.2798624634742737, 0.1606699526309967, 0.42359113693237305, -0.1808970421552658 }
  },
  {
   { -0.008150876499712467, -0.1392272561788559, -0.30129846930503845, 0.007473974954336882, 0.16179290413856506 },
   { 0.26826149225234985, 0.20434166491031647, 0.32408732175827026, -0.06774554401636124, 0.03291364759206772 },
   { -0.15372659265995026, 0.35085803270339966, 0.4052713215351105, 0.36161836981773376, -0.25225451588630676 },
   { -0.22236020863056183, 0.7034561038017273, 0.35826176404953003, 0.16187146306037903, -0.34889185428619385 },
   { 0.5861943960189819, 0.2679436504840851, 0.12249042838811874, 0.32357093691825867, 0.21801349520683289 }
  },
  {
   { 0.32122695446014404, -0.1599457710981369, -0.2802065908908844, -0.4137841463088989, -0.5388290286064148 },
   { 0.17090943455696106, 0.06921039521694183, -0.29731303453445435, -0.810448408126831, -0.1298595368862152 },
   { 0.4057292342185974, -0.08830022811889648, -0.25265422463417053, -0.2488308548927307, 0.35619574785232544 },
   { 0.530961811542511, 0.2926384210586548, 0.23539350926876068, -0.3038231432437897, -0.1388249546289444 },
   { 0.11633157730102539, 0.5405723452568054, -0.014328725636005402, -0.46264031529426575, -0.18920151889324188 }
  },
  {
   { 0.33775514364242554, 0.3828383982181549, 0.17894247174263, -0.021665295585989952, -0.3193405270576477 },
   { 0.4761952757835388, 0.29229235649108887, 0.5235694050788879, 0.7041399478912354, 0.3835545778274536 },
   { 0.22625324130058289, 0.11083875596523285, 0.3418939411640167, 0.3560478687286377, 0.03704952448606491 },
   { -0.4268815219402313, -0.45593076944351196, -0.012180827558040619, 0.3748333156108856, 0.13805826008319855 },
   { -0.4326938986778259, -0.2554824650287628, 0.035833779722452164, 0.096629299223423, -0.22266465425491333 }
  },
  {
   { 0.1303572654724121, -0.5324582457542419, -0.00856884103268385, -0.07927990704774857, -0.08125891536474228 },
   { 0.35469985008239746, -0.43921777606010437, -0.5469083786010742, -0.10038284212350845, 0.12595932185649872 },
   { 0.34182825684547424, -0.2757895290851593, -0.5832494497299194, -0.1367955356836319, 0.16226568818092346 },
   { 0.14089824259281158, -0.8287249803543091, -0.7694801092147827, -0.1573365479707718, 0.34309160709381104 },
   { 0.008551578037440777, -1.2091221809387207, -0.9467829465866089, -0.2579090893268585, -0.07731875777244568 }
  },
  {
   { -0.4088476598262787, -0.12320002168416977, -0.2367909550666809, -0.09471452981233597, -0.044406957924366 },
   { 0.2550612986087799, -0.22283925116062164, -0.2072640210390091, -0.40283745527267456, -0.08362982422113419 },
   { 0.3193362057209015, -0.11922845989465714, -0.5457888245582581, -0.35197731852531433, -0.1671271175146103 },
   { 0.07774706184864044, -0.13194331526756287, -0.266262024641037, 0.04201311245560646, 0.5290328860282898 },
   { 0.015070267952978611, 0.07226154953241348, 0.2032013237476349, 0.16030491888523102, -0.07858491688966751 }
  },
  {
   { -0.021434705704450607, 0.12422741949558258, 0.12735986709594727, 0.14887645840644836, -0.11980342864990234 },
   { -0.5054537653923035, -0.11638807505369186, 0.06837878376245499, 0.20761382579803467, 0.5292087197303772 },
   { -0.059568438678979874, 0.4561290740966797, 0.21041227877140045, -0.19821257889270782, 0.24585109949111938 },
   { -0.03191888704895973, 0.12923021614551544, 0.14673934876918793, -0.18224969506263733, -0.10265473276376724 },
   { 0.09634008258581161, 0.14297451078891754, 0.432833194732666, 0.5901111960411072, 0.16365142166614532 }
  },
  {
   { -0.14834056794643402, -0.4334777295589447, -0.12320016324520111, -0.17720067501068115, 0.09327734261751175 },
   { 0.19670267403125763, -0.07249124348163605, -0.12213514745235443, -0.08660729974508286, 0.15433308482170105 },
   { -0.016789862886071205, -0.15514537692070007, 0.1888127624988556, -0.09100892394781113, -0.05798901244997978 },
   { -0.16913866996765137, 0.09035316109657288, 0.15206879377365112, 0.2035839557647705, 0.1940019130706787 },
   { 0.15454092621803284, 0.8277310729026794, 0.1314544528722763, -0.13097764551639557, -0.32172268629074097 }
  },
  {
   { -0.20650061964988708, 0.25409582257270813, 0.328508198261261, 0.35834214091300964, -0.20716573297977448 },
   { 0.507822573184967, 0.3490992486476898, -0.022220013663172722, 0.06055186316370964, 0.07801899313926697 },
   { 0.4869236946105957, 0.07315612584352493, -0.3201047480106354, -0.47576555609703064, -0.17732243239879608 },
   { 0.4807695746421814, 0.3958405554294586, -0.05795098841190338, -0.7259791493415833, -0.9498136043548584 },
   { 0.4687349498271942, 0.10267588496208191, -0.11187753826379776, 0.020676376298069954, -0.24570293724536896 }
  },
  {
   { -0.0650990828871727, 0.3417873680591583, 0.5633573532104492, 0.41486218571662903, 0.57485032081604 },
   { -0.662121593952179, -0.2495616227388382, 0.2766648530960083, 0.2673983871936798, -0.3222111463546753 },
   { 0.3570486307144165, 0.5279810428619385, 0.09972183406352997, -0.18307213485240936, -0.19275926053524017 },
   { 0.6290760636329651, 0.5239012241363525, 0.05405130237340927, -0.37418684363365173, -0.3691612780094147 },
   { 0.09667299687862396, -0.0997355729341507, -0.14328902959823608, -0.07809707522392273, -0.2781820595264435 }
  }
 },
 {
  {
   { -0.19754230976104736, -0.24753142893314362, -0.15574266016483307, -0.028825948014855385, 0.09534589946269989 },
   { -0.1550571173429489, 0.08172570914030075, -0.012071868404746056, 0.21571564674377441, 0.2708697021007538 },
   { 0.1735219955444336, -0.04958542063832283, 0.3108391761779785, 0.3512294888496399, 0.18542827665805817 },
   { 0.2769622206687927, 0.17341339588165283, 0.001589574501849711, 0.02175137586891651, 0.10069406777620316 },
   { 0.08124887943267822, -0.10879335552453995, -0.3915365934371948, -0.490945965051651, -0.4716898202896118 }
  },
  {
   { -0.0960230901837349, 0.10145260393619537, 0.08694133162498474, -0.026118403300642967, 0.16575780510902405 },
   { 0.13890446722507477, 0.03989501670002937, 0.30470380187034607, 0.4111648499965668, 0.2764182388782501 },
   { -0.1644662767648697, 0.04214317724108696, 0.39247795939445496, 0.5816218256950378, 0.1657484769821167 },
   { -0.6310757994651794, -0.47333824634552, -0.1586858630180359, -0.03373640775680542, -0.26779094338417053 },
   { -0.4622942805290222, -0.49770355224609375, -0.7198038697242737, -0.3155168890953064, -0.2951401472091675 }
  },
  {
   { 0.11645802855491638, -0.015514416620135307, -0.04109048470854759, -0.03002299554646015, -0.05543657764792442 },
   { 0.2899013161659241, 0.35791271924972534, 0.3533499240875244, 0.12112727016210556, -0.5101540088653564 },
   { 0.3510661721229553, 0.21350768208503723, -0.262963205575943, -0.43516063690185547, -0.05683485418558121 },
   { 0.35218125581741333, -0.3201407790184021, -0.3726889491081238, -1.1233947589062154e-05, 0.014678803272545338 },
   { -0.36592206358909607, -0.17589284479618073, 0.1916321963071823, 0.4871579110622406, -0.07072637975215912 }
  },
  {
   { -0.27642711997032166, -0.2391754686832428, -0.37238672375679016, -0.33026209473609924, -0.08046358823776245 },
   { 0.2074407935142517, 0.25869032740592957, 0.17495669424533844, 0.10945258289575577, -0.16666270792484283 },
   { 0.2860220968723297, 0.20158922672271729, 0.1745544672012329, -0.031985267996788025, 0.06125934422016144 },
   { 0.1263958215713501, -0.18565122783184052, -0.06781619787216187, -0.1912064552307129, -0.0985431894659996 },
   { -0.07987749576568604, 0.03306182846426964, 5.5420794524252415e-05, 0.02945079281926155, 0.06759551912546158 }
  },
  {
   { -0.6079129576683044, -0.21484963595867157, -0.0593588761985302, 0.2985627353191376, -0.0826222151517868 },
   { -0.09881291538476944, 0.06112932041287422, 0.08379168808460236, 0.009840554557740688, -0.02700835093855858 },
   { 0.08188182860612869, 0.09631864726543427, 0.1362311691045761, 0.06702946871519089, 0.18080435693264008 },
   { -0.07130669057369232, -0.13730491697788239, -0.17900486290454865, -0.1950700283050537, -0.11147861182689667 },
   { 0.19532322883605957, 0.05839585140347481, 0.09522764384746552, -0.10386084765195847, -0.3742639422416687 }
  },
  {
   { -0.10749536007642746, -0.37520796060562134, -0.1648101806640625, -0.00025012114201672375, 0.3092336654663086 },
   { -0.43962380290031433, 0.04496635124087334, -0.10462292283773422, 0.05440947040915489, -0.10145038366317749 },
   { 0.27386412024497986, 0.26869097352027893, 0.004066890105605125, -0.25636041164398193, 0.22121606767177582 },
   { 0.2755897045135498, -0.0883447453379631, -0.19344201683998108, 0.012262281030416489, 0.2681683599948883 },
   { 0.19454137980937958, -0.22550423443317413, -0.02823428250849247, -0.06718917936086655, -0.0886068046092987 }
  },
  {
   { 0.16247087717056274, 0.25982481241226196, 0.24964207410812378, 0.22882568836212158, 0.14557436108589172 },
   { -0.011084210127592087, -0.07175781577825546, -0.00945274718105793, -0.19041603803634644, 0.12132883071899414 },
   { -0.27300238609313965, -0.29758450388908386, -0.04858303815126419, 0.013428277336061, 0.05355377122759819 },
   { 0.01544688455760479, 0.03750263899564743, -0.059210892766714096, -0.0995386391878128, -0.06774480640888214 },
   { -0.23313376307487488, 0.13342179358005524, 0.283699095249176, 0.0879705548286438, 0.15153948962688446 }
  },
  {
   { 0.02444598823785782, 0.0822199136018753, -0.19079653918743134, -0.0695536881685257, -0.26848986744880676 },
   { 0.0893058329820633, -0.20045772194862366, -0.14876030385494232, -0.015327278524637222, 0.10132550448179245 },
   { 0.031759362667798996, -0.06453728675842285, -0.06642436981201172, 0.06826000660657883, 0.13734373450279236 },
   { 0.2773177921772003, 0.33532682061195374, 0.37824830412864685, 0.41238918900489807, 0.3803379237651825 },
   { 0.021344147622585297, 0.27122923731803894, 0.1652529090642929, 0.19752395153045654, -0.23920965194702148 }
  },
  {
   { -0.0797291174530983, 0.01838546060025692, -0.09853961318731308, -0.04633350670337677, -0.45214682817459106 },
   { -0.20256569981575012, 0.11520147323608398, 0.15905392169952393, -0.21859349310398102, -0.33211418986320496 },
   { -0.06105775386095047, 0.14786887168884277, 0.09812282025814056, -0.17634738981723785, -0.06712108105421066 },
   { -0.0028176128398627043, 0.2755265235900879, 0.46627628803253174, 0.137960284948349, -0.06384336948394775 },
   { -0.17862741649150848, 0.2739989459514618, 0.06386900693178177, 0.04594077169895172, 0.20453912019729614 }
  },
  {
   { -0.32637032866477966, 0.060025375336408615, 0.33157315850257874, 0.3850860595703125, 0.4307335913181305 },
   { -0.23368051648139954, 0.05145259574055672, 0.1202135980129242, 0.040860217064619064, -0.18405042588710785 },
   { -0.5700712203979492, -0.4246937334537506, -0.3200531303882599, -0.2491837739944458, -0.24987739324569702 },
   { -0.0025094272568821907, -0.24485789239406586, 0.2751375436782837, 0.2467707246541977, 0.18029344081878662 },
   { -0.04574287682771683, 0.29884034395217896, 0.2273528128862381, 0.21815018355846405, -0.05865189805626869 }
  }
 },
 {
  {
   { -0.3364788293838501, -0.3393051326274872, -0.12943586707115173, -0.2181871235370636, 0.004600794054567814 },
   { 0.1745796650648117, -0.07017439603805542, 0.21945080161094666, 0.027843300253152847, 0.12864179909229279 },
   { 0.26640862226486206, 0.021952185779809952, 0.22805394232273102, 0.04072960838675499, 0.2581947445869446 },
   { 0.18094392120838165, 0.05787331983447075, 0.2707020342350006, 0.03253186494112015, 0.2164393812417984 },
   { 0.05268333479762077, 0.16878029704093933, -0.025818180292844772, -0.22029565274715424, -0.2347794771194458 }
  },
  {
   { -0.14391332864761353, -0.0976499393582344, -0.02734648436307907, -0.0530906617641449, -0.08918391168117523 },
   { 0.21514181792736053, 0.11196760833263397, 0.19596071541309357, 0.0429861918091774, 0.21941572427749634 },
   { -0.40624183416366577, 0.06421831250190735, 0.3242303729057312, 0.35860079526901245, 0.5492891073226929 },
   { -0.4442440867424011, -0.2981973886489868, 0.18437419831752777, 0.08750558644533157, -0.28631845116615295 },
   { -0.32939037680625916, -0.25123170018196106, -0.37118691205978394, -0.5712684392929077, -0.3178054392337799 }
  },
  {
   { -0.4768218696117401, 0.11545652151107788, 0.26649153232574463, 0.032046716660261154, 0.11752061545848846 },
   { 0.3709215819835663, 0.17973542213439941, 0.3694153428077698, 0.0740780159831047, -0.21754248440265656 },
   { 0.35295864939689636, 0.3632858395576477, 0.12010476738214493, -0.19998903572559357, -0.29521360993385315 },
   { 0.33322831988334656, -0.2903164327144623, -0.4976649880409241, -0.1799142062664032, -0.34185725450515747 },
   { 0.06127665936946869, -0.6130199432373047, -0.22897513210773468, -0.345414400100708, -0.018827524036169052 }
  },
  {
   { -0.4276539087295532, -0.19860586524009705, -0.3366912007331848, -0.4829128384590149, -0.6168790459632874 },
   { -0.10782577097415924, 0.11785227060317993, -0.2173328548669815, -0.30051034688949585, -0.41767358779907227 },
   { 0.3194035589694977, 0.14246241748332977, 0.14440029859542847, 0.054762911051511765, -0.11884266883134842 },
   { 0.19138796627521515, 0.2687789797782898, -0.08443959802389145, 0.08180733025074005, 0.04161917045712471 },
   { -0.24664388597011566, 0.14679187536239624, -0.040212482213974, 0.01869264803826809, 0.23247353732585907 }
  },
  {
   { -0.9839834570884705, -0.6741220951080322, -0.2736111879348755, -0.01888342574238777, 0.010409885086119175 },
   { -0.013023758307099342, -0.1306142359972, -0.029205042868852615, 0.1109178364276886, -0.15101291239261627 },
   { 0.04379687458276749, -0.008283514529466629, -0.005356502719223499, -0.029408011585474014, -0.11464879661798477 },
   { 0.13485199213027954, 0.1848590224981308, 0.06782376766204834, 0.015911206603050232, 0.11090492457151413 },
   { -0.15302449464797974, 0.17866311967372894, 0.016326991841197014, 0.15286390483379364, 0.05314897000789642 }
  },
  {
   { -0.046275313943624496, -0.1835336536169052, -0.12362315505743027, 0.23567865788936615, 0.04568858444690704 },
   { 0.11228469014167786, -0.1967265009880066, -0.005039967596530914, 0.3539183437824249, 0.2096998393535614 },
   { 0.007699214853346348, 0.1426350176334381, 0.16256481409072876, 0.005913022439926863, 0.01642894558608532 },
   { 0.29928505420684814, 0.06240365281701088, -0.2143123596906662, -0.0684797391295433, 0.21640293300151825 },
   { -0.2229335457086563, -0.0757879763841629, -0.12888440489768982, -0.24562369287014008, -0.060621727257966995 }
  },
  {
   { 0.12374376505613327, 0.0710526630282402, 0.11545579880475998, -0.17290586233139038, 0.35399413108825684 },
   { 0.18117302656173706, 0.21407276391983032, 0.02784695476293564, 0.28837889432907104, -0.06914719939231873 },
   { -0.13311173021793365, 0.01559494249522686, 0.005754051264375448, 0.10764000564813614, -0.09923121333122253 },
   { 0.03500588238239288, -0.04396762698888779, -0.19371679425239563, -0.22603680193424225, -0.32402509450912476 },
   { -0.028483452275395393, -0.18298016488552094, -0.037076979875564575, 0.36790144443511963, 0.18075807392597198 }
  },
  {
   { -0.1545701026916504, 0.0903487429022789, 0.12160031497478485, -0.11973479390144348, 0.027325037866830826 },
   { -0.1529179960489273, -0.09787971526384354, -0.017366468906402588, -0.3305022716522217, -0.2006988823413849 },
   { -0.08460541814565659, -0.02481670491397381, 0.04047954082489014, 0.13994434475898743, 0.06318152695894241 },
   { -0.15719930827617645, 0.1251344084739685, 0.00801212526857853, 0.11559592187404633, 0.3134894371032715 },
   { 0.2598937749862671, 0.26980817317962646, 0.272623211145401, 0.22163766622543335, 0.07418332248926163 }
  },
  {
   { -0.10519585013389587, -0.05283067002892494, -0.2676068842411041, -0.2808307707309723, -0.43674716353416443 },
   { -0.041725579649209976, -0.02387801557779312, -0.26038092374801636, -0.1742108315229416, -0.23867613077163696 },
   { -0.15655085444450378, -0.016223642975091934, 0.0914778932929039, -0.02548987604677677, -0.20021596550941467 },
   { -0.07753521203994751, 0.24518482387065887, 0.5121170282363892, 0.5747321248054504, 0.22633472084999084 },
   { -0.1186615452170372, -0.009619921445846558, 0.2706640064716339, -0.016051677986979485, -0.041633449494838715 }
  },
  {
   { 0.10460305958986282, -0.00029157346580177546, -0.14094924926757812, 0.16755126416683197, 0.2291032373905182 },
   { -0.2969772517681122, 0.23279115557670593, 0.22584214806556702, 0.23353935778141022, 0.07917755097150803 },
   { -0.7982603311538696, -0.32526329159736633, -0.2198103368282318, -0.0210838932543993, -0.3483497202396393 },
   { -0.6734424233436584, -0.2223615050315857, -0.09832499176263809, 0.1299096643924713, 0.16244825720787048 },
   { -0.03574332594871521, -0.3057273328304291, 0.2615117132663727, 0.3234208822250366, 0.3438107669353485 }
  }
 },
 {
  {
   { -0.06692282110452652, 0.022030610591173172, 0.37892985343933105, -0.0992644727230072, 0.017932606860995293 },
   { 0.14651848375797272, -0.24462690949440002, -0.059799227863550186, 0.10642504692077637, -0.34154823422431946 },
   { 0.09944111853837967, -0.2516954839229584, -0.13364924490451813, -0.17965766787528992, -0.648858904838562 },
   { 0.10820973664522171, 0.12092660367488861, -0.025070998817682266, -0.9890949130058289, -0.24263155460357666 },
   { 0.24217243492603302, 0.07917333394289017, -0.4709777534008026, -0.15917138755321503, -0.4320032298564911 }
  },
  {
   { 0.07556028664112091, 0.2634240686893463, 0.037643153220415115, -0.15083971619606018, -0.017673062160611153 },
   { 0.2585374116897583, 0.16970035433769226, -0.2869090437889099, -0.09559590369462967, -0.024481428787112236 },
   { 0.1770336925983429, 0.23174849152565002, -0.30834633111953735, -0.05842764303088188, 0.33103227615356445 },
   { -0.17412792146205902, 0.09555798023939133, 0.2373857945203781, -0.4150097370147705, -0.6079427003860474 },
   { -0.2866610288619995, -0.23477809131145477, -0.00246107648126781, -0.000822315807454288, -0.4832916557788849 }
  },
  {
   { 0.15733475983142853, 0.10487303882837296, 0.19813896715641022, 0.35075637698173523, -0.5105689764022827 },
   { 0.044034942984580994, 0.24451880156993866, 0.8015860915184021, 0.7151665091514587, -0.26502755284309387 },
   { -0.08964777737855911, 0.7009791135787964, 0.3074724078178406, -0.5275455117225647, -0.11209453642368317 },
   { -0.19267120957374573, -0.3917379081249237, -0.43468695878982544, 0.13128581643104553, 0.02881472185254097 },
   { -0.2480669766664505, -0.4654543399810791, 0.09861718118190765, 0.29304173588752747, -0.16108763217926025 }
  },
  {
   { 0.2083263397216797, -0.11156277358531952, -0.6442474722862244, -0.5320513248443604, -0.1027136892080307 },
   { -0.08971112966537476, -0.041286494582891464, -0.17151395976543427, -0.6959552764892578, -0.5665741562843323 },
   { -0.04339265450835228, -0.045337434858083725, 0.269814133644104, -0.22737665474414825, -0.413404256105423 },
   { 0.15649181604385376, -0.1234091967344284, 0.019561827182769775, 0.18070344626903534, 0.14538376033306122 },
   { 0.45278024673461914, -0.2513536214828491, -0.0921425074338913, -0.2532723844051361, -0.17901372909545898 }
  },
  {
   { 0.18608669936656952, 0.3803856074810028, 0.5082783102989197, 0.22489672899246216, 0.020536376163363457 },
   { -0.04054514318704605, 0.2891596853733063, 0.26636961102485657, 0.6548038125038147, -0.38669267296791077 },
   { -0.11379187554121017, 0.14801304042339325, 0.2668733298778534, 0.42422163486480713, -0.37769782543182373 },
   { -0.00486307917162776, 0.18515463173389435, 0.22494451701641083, 0.5362246036529541, -1.0775524377822876 },
   { 0.563910722732544, 0.1535177081823349, -0.0004774006665684283, 0.0043130782432854176, -0.3882291615009308 }
  },
  {
   { -0.024174777790904045, 0.3311162292957306, 0.03495457395911217, 0.05679638311266899, -0.014965102076530457 },
   { -0.07794436812400818, 0.21125584840774536, 0.15632517635822296, 0.06322688609361649, -0.1340666115283966 },
   { 0.09271220117807388, 0.023948047310113907, 0.3839097321033478, 0.3465903699398041, 0.08156155049800873 },
   { 0.013906903564929962, -0.018029041588306427, 0.3759627938270569, 0.05481014400720596, 0.22561483085155487 },
   { 0.17499560117721558, -0.02909333072602749, -0.27201032638549805, -0.3499141037464142, -0.4780721366405487 }
  },
  {
   { 0.13950274884700775, 0.14080804586410522, 0.1807979941368103, -0.02913365699350834, -0.6032814979553223 },
   { 0.08357667177915573, -0.03695475310087204, -0.157390758395195, -0.07735899090766907, -0.012647115625441074 },
   { -0.12196855247020721, -0.48342177271842957, -0.21745619177818298, 0.37292471528053284, 0.08908051252365112 },
   { -0.18218399584293365, -0.6077923774719238, -0.045106031000614166, -0.11220709979534149, 0.004029789939522743 },
   { -0.5432087779045105, -0.27581173181533813, 0.09536535292863846, -0.3652314841747284, -0.05480754375457764 }
  },
  {
   { 0.07571505010128021, 0.35385486483573914, 0.22639210522174835, -0.4176729619503021, -0.035564031451940536 },
   { -0.23508906364440918, 0.370722234249115, -0.11852043122053146, -0.11687450855970383, 0.1471801996231079 },
   { -0.24936844408512115, 0.07009036093950272, 0.12807263433933258, 0.18657565116882324, 0.10744879394769669 },
   { -0.6764088869094849, -0.3402253985404968, 0.13884316384792328, 0.1382584124803543, -0.29747530817985535 },
   { -0.19519750773906708, -0.45042574405670166, 0.04163875803351402, -0.39167892932891846, 0.010716492310166359 }
  },
  {
   { -0.16813327372074127, -0.10662773251533508, -0.016833696514368057, -0.28756195306777954, 0.42436322569847107 },
   { 0.31304797530174255, -0.11407624185085297, -0.30473819375038147, -0.08670378476381302, 0.20150138437747955 },
   { 0.15199384093284607, -0.24230512976646423, 0.0556572861969471, -0.0670643076300621, -0.11413811892271042 },
   { -0.1826753169298172, -0.14847764372825623, 0.10169422626495361, 0.1971062868833542, 0.04473314434289932 },
   { 0.027574965730309486, -0.1740415394306183, 0.028056148439645767, 0.0009924739133566618, 0.3258505165576935 }
  },
  {
   { -0.17998895049095154, 0.03694673255085945, 0.3840904235839844, 0.19699598848819733, -0.05120771378278732 },
   { 0.4235077500343323, 0.4258737862110138, 0.027785107493400574, -0.22166967391967773, -0.26661375164985657 },
   { 0.15860721468925476, -0.09133681654930115, -0.3474944829940796, -0.37111061811447144, -0.2263113111257553 },
   { -0.3116866946220398, -0.23417893052101135, 0.019870027899742126, 0.4162333607673645, 0.07694631069898605 },
   { -0.007359463255852461, 0.17729876935482025, 0.12288570404052734, 0.3424470126628876, 0.13865062594413757 }
  }
 },
 {
  {
   { 0.032304707914590836, -0.07625243812799454, 0.06334678083658218, 0.05723697692155838, 0.27356433868408203 },
   { -0.21756361424922943, 0.0775589719414711, -0.2835395336151123, -0.2792268991470337, -0.13752911984920502 },
   { 0.30338844656944275, -0.1281244158744812, -0.1746879369020462, -0.1487097591161728, -0.12124775350093842 },
   { 0.37936949729919434, 0.1357865184545517, -0.1712919920682907, 0.15903808176517487, 0.12684494256973267 },
   { -0.5047490000724792, 0.08758919686079025, -0.010066051967442036, 0.22548553347587585, -0.4565023183822632 }
  },
  {
   { -0.16228985786437988, 0.06284718215465546, 0.08450635522603989, 0.049457401037216187, 0.17240995168685913 },
   { 0.279475599527359, 0.16396822035312653, 0.12197032570838928, -0.21073950827121735, 0.33320772647857666 },
   { 0.05412204563617706, 0.3565286099910736, -0.16253353655338287, 0.23898707330226898, 0.1360776275396347 },
   { -0.14997081458568573, -0.08340311795473099, -0.5193228125572205, -0.43252378702163696, -0.265970379114151 },
   { -0.13559161126613617, -0.29857105016708374, -0.23466938734054565, -0.3088401257991791, -0.2091309130191803 }
  },
  {
   { -0.1800985336303711, 0.10498365759849548, 0.08670632541179657, 0.24298731982707977, 0.22758692502975464 },
   { 0.0651552677154541, 0.3665561079978943, 0.48313695192337036, 0.136851504445076, -0.0037606542464345694 },
   { -0.2414148598909378, -0.01580173149704933, 0.11047554761171341, -0.24193896353244781, -0.4473591148853302 },
   { 0.10310107469558716, -0.28035101294517517, -0.7193953394889832, -0.6320750713348389, -0.41596177220344543 },
   { 0.042847324162721634, -0.1647282838821411, 0.11891743540763855, 0.39023178815841675, -0.1678307205438614 }
  },
  {
   { -0.6760127544403076, -0.4180428981781006, -0.15187543630599976, -0.3659183084964752, -0.2699648439884186 },
   { -0.39054039120674133, -0.24284695088863373, -0.24933388829231262, 0.13810941576957703, 0.4461800456047058 },
   { -0.4150030314922333, -0.35264647006988525, 0.20274193584918976, 0.25162839889526367, 0.48041224479675293 },
   { 0.42556408047676086, -0.0956883579492569, -0.031813643872737885, 0.2736093997955322, 0.030135275796055794 },
   { 0.15818627178668976, -0.2294415980577469, -0.015136472880840302, 0.2167927771806717, 0.08966930210590363 }
  },
  {
   { -0.31467050313949585, -0.5260735750198364, -0.09425923228263855, 0.21016792953014374, -0.07048150897026062 },
   { 0.16496476531028748, -0.09888533502817154, 0.13748300075531006, 0.2020803689956665, 0.19199629127979279 },
   { -0.06415954977273941, -0.02399824559688568, 0.33326947689056396, 0.33550453186035156, 0.05297153443098068 },
   { -0.6985001564025879, -0.060120780020952225, 0.13370129466056824, 0.19130198657512665, 0.07236822694540024 },
   { -0.3447287380695343, 0.2545967102050781, 0.05408782884478569, 0.1341744363307953, -0.048226676881313324 }
  },
  {
   { 0.3757628798484802, 0.061588216572999954, -0.030069492757320404, 0.03897616267204285, -0.1740422397851944 },
   { 0.09250318259000778, -0.11913789063692093, 0.007236084900796413, 0.10398107767105103, 0.0838066041469574 },
   { -0.3017527759075165, -0.030457856133580208, 0.03885839879512787, 0.25176742672920227, -0.08948018401861191 },
   { -0.27671027183532715, 0.45211872458457947, 0.02260660007596016, -0.07051505893468857, 0.026121502742171288 },
   { 0.07328442484140396, 0.10594571381807327, -0.23043890297412872, 0.001378806889988482, -0.11876601725816727 }
  },
  {
   { -0.0002743118384387344, -0.31780195236206055, 0.05224732309579849, -0.03596271947026253, -0.14064329862594604 },
   { -0.1160178929567337, 0.06094371899962425, 0.18852728605270386, 0.19810980558395386, 0.33162009716033936 },
   { 0.055379461497068405, 0.1887318640947342, 0.2352875918149948, -0.28270068764686584, 0.13132412731647491 },
   { -0.11000925302505493, -0.13585247099399567, 0.20282499492168427, -0.32144325971603394, -0.10179906338453293 },
   { -0.09306508302688599, -0.10813120752573013, -0.5863571166992188, -0.24759870767593384, -0.1611948311328888 }
  },
  {
   { 0.14806173741817474, 0.21918325126171112, 0.20651136338710785, -0.006297276355326176, -0.014305200427770615 },
   { -0.005113691091537476, 0.13540342450141907, 0.030887965112924576, -0.3627829849720001, -0.27685272693634033 },
   { -0.35407179594039917, 0.15175551176071167, 0.0686267614364624, -0.4288789927959442, 0.14664697647094727 },
   { -0.04086409881711006, 0.2326345145702362, 0.18518753349781036, -0.14085577428340912, 0.2918282151222229 },
   { -0.266873836517334, -0.18283583223819733, 0.09552557021379471, -0.11178658902645111, -0.0010899822227656841 }
  },
  {
   { -0.5021976232528687, 0.14859604835510254, 0.6094433665275574, 0.43660467863082886, 0.07028978317975998 },
   { -0.11509135365486145, -0.05125604569911957, 0.3986606299877167, 0.4861583113670349, 0.3759818971157074 },
   { -0.3391808569431305, -0.6909728646278381, 0.19160650670528412, 0.11979222297668457, 0.3027777075767517 },
   { -0.2971622347831726, -0.715726375579834, -0.38147103786468506, 0.10835685580968857, 0.5245065689086914 },
   { -0.41840675473213196, -0.025614751502871513, -0.6669410467147827, -0.18582946062088013, 0.3112018406391144 }
  },
  {
   { -0.39201149344444275, -0.11313457041978836, 0.129491925239563, -0.12589813768863678, 0.06802042573690414 },
   { -0.5010643005371094, -0.32813960313796997, -0.1512797772884369, -0.2160700261592865, -0.3612954616546631 },
   { -0.3969199061393738, -0.2116912454366684, -1.4254404306411743, -0.7162464261054993, -0.007441602181643248 },
   { -0.05003880336880684, -0.31881844997406006, -0.8123649954795837, -0.19137246906757355, 0.05160738527774811 },
   { 0.18463602662086487, -0.24258975684642792, -0.002354320837184787, 0.39380520582199097, 0.4000700116157532 }
  }
 }
 };


const T conv2_biases [10] = { -0.1334264725446701, 0.06422898173332214, 0.1658838838338852, 0.20563754439353943, 0.055969253182411194, -0.2720441222190857, -0.09357191622257233, -0.27080610394477844, -0.5539485812187195, -0.29710203409194946 };
# 3 "cnn.cpp" 2

void cnn(hls::stream<T> &img_in , T prediction[10])
{_ssdm_SpecArrayDimSize(prediction, 10);

  hls::stream<T> norm_img("norm_img");
#pragma HLS stream variable=&norm_img depth=784
 normalization(img_in, norm_img);


  T features_conv1 [6][(28 - (5 - 1))][(28 - (5 - 1))] = { 0 };
  convolutional_layer1(norm_img, features_conv1);


  T pool_features1 [6][((28 - (5 - 1)) / 2)][((28 - (5 - 1)) / 2)] = { 0 };
  max_pooling_layer1(features_conv1, pool_features1);


  T features_conv2 [10][(((28 - (5 - 1)) / 2) - (5 - 1))][(((28 - (5 - 1)) / 2) - (5 - 1))] = { 0 };
#pragma unroll(1)
 for (int f = 0; f < 6; f++)
    convolutional_layer2(pool_features1[f], features_conv2, conv2_weights[f]);


  T pool_features2 [10][((((28 - (5 - 1)) / 2) - (5 - 1)) / 2)][((((28 - (5 - 1)) / 2) - (5 - 1)) / 2)] = { 0 };
  max_pooling_layer2(features_conv2, pool_features2, conv2_biases);


  T flat_array [(10 * ((((28 - (5 - 1)) / 2) - (5 - 1)) / 2) * ((((28 - (5 - 1)) / 2) - (5 - 1)) / 2))] = { 0 };
  flattening_layer(pool_features2, flat_array);


  dense_layer(flat_array, prediction);

}
