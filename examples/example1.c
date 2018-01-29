
typedef unsigned long size_t;

typedef signed int wchar_t;

typedef struct  {
  signed int quot;
  signed int rem;
  
} div_t;

typedef struct  {
  signed long quot;
  signed long rem;
  
} ldiv_t;

typedef struct  {
  signed long long quot;
  signed long long rem;
  
} lldiv_t;

extern size_t __ctype_get_mb_cur_max(void) __attribute__((__nothrow__, __leaf__));

extern double atof(const char  * __nptr) __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));

extern signed int atoi(const char  * __nptr) __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));

extern signed long atol(const char  * __nptr) __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));

extern signed long long atoll(const char  * __nptr) __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));

extern double strtod(const char  *__restrict  __nptr, char  * *__restrict  __endptr) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern float strtof(const char  *__restrict  __nptr, char  * *__restrict  __endptr) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern long double strtold(const char  *__restrict  __nptr, char  * *__restrict  __endptr) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern signed long strtol(const char  *__restrict  __nptr, char  * *__restrict  __endptr, signed int  __base) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern unsigned long strtoul(const char  *__restrict  __nptr, char  * *__restrict  __endptr, signed int  __base) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern signed long long strtoll(const char  *__restrict  __nptr, char  * *__restrict  __endptr, signed int  __base) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern unsigned long long strtoull(const char  *__restrict  __nptr, char  * *__restrict  __endptr, signed int  __base) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern signed int rand(void) __attribute__((__nothrow__, __leaf__));

extern void srand(unsigned int  __seed) __attribute__((__nothrow__, __leaf__));

extern signed int rand_r(unsigned int  * __seed) __attribute__((__nothrow__, __leaf__));

extern void  *malloc(size_t  __size) __attribute__((__nothrow__, __leaf__)) __attribute__((__malloc__));

extern void  *calloc(size_t  __nmemb, size_t  __size) __attribute__((__nothrow__, __leaf__)) __attribute__((__malloc__));

extern void  *realloc(void  * __ptr, size_t  __size) __attribute__((__nothrow__, __leaf__)) __attribute__((__warn_unused_result__));

extern void free(void  * __ptr) __attribute__((__nothrow__, __leaf__));

extern void  *aligned_alloc(size_t  __alignment, size_t  __size) __attribute__((__nothrow__, __leaf__)) __attribute__((__malloc__)) __attribute__((__alloc_size__(2)));

extern void abort(void) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));

extern signed int atexit(void ( * __func)(void)) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern signed int at_quick_exit(void ( * __func)(void)) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern void exit(signed int  __status) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));

extern void quick_exit(signed int  __status) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));

extern void _Exit(signed int  __status) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));

extern char  *getenv(const char  * __name) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern signed int system(const char  * __command);

typedef signed int ( *__compar_fn_t)(const void  * , const void  * );

extern void  *bsearch(const void  * __key, const void  * __base, size_t  __nmemb, size_t  __size, __compar_fn_t  __compar) __attribute__((__nonnull__(1, 2, 5)));

extern void qsort(void  * __base, size_t  __nmemb, size_t  __size, __compar_fn_t  __compar) __attribute__((__nonnull__(1, 4)));

extern signed int abs(signed int  __x) __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));

extern signed long labs(signed long  __x) __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));

extern signed long long llabs(signed long long  __x) __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));

extern div_t div(signed int  __numer, signed int  __denom) __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));

extern ldiv_t ldiv(signed long  __numer, signed long  __denom) __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));

extern lldiv_t lldiv(signed long long  __numer, signed long long  __denom) __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));

extern signed int mblen(const char  * __s, size_t  __n) __attribute__((__nothrow__, __leaf__));

extern signed int mbtowc(wchar_t  *__restrict  __pwc, const char  *__restrict  __s, size_t  __n) __attribute__((__nothrow__, __leaf__));

extern signed int wctomb(char  * __s, wchar_t  __wchar) __attribute__((__nothrow__, __leaf__));

extern size_t mbstowcs(wchar_t  *__restrict  __pwcs, const char  *__restrict  __s, size_t  __n) __attribute__((__nothrow__, __leaf__));

extern size_t wcstombs(char  *__restrict  __s, const wchar_t  *__restrict  __pwcs, size_t  __n) __attribute__((__nothrow__, __leaf__));

typedef unsigned char __u_char;

typedef unsigned short __u_short;

typedef unsigned int __u_int;

typedef unsigned long __u_long;

typedef char __int8_t;

typedef unsigned char __uint8_t;

typedef signed short __int16_t;

typedef unsigned short __uint16_t;

typedef signed int __int32_t;

typedef unsigned int __uint32_t;

typedef signed long __int64_t;

typedef unsigned long __uint64_t;

typedef signed long __quad_t;

typedef unsigned long __u_quad_t;

typedef unsigned long __dev_t;

typedef unsigned int __uid_t;

typedef unsigned int __gid_t;

typedef unsigned long __ino_t;

typedef unsigned long __ino64_t;

typedef unsigned int __mode_t;

typedef unsigned long __nlink_t;

typedef signed long __off_t;

typedef signed long __off64_t;

typedef signed int __pid_t;

typedef struct  {
  signed int __val[2];
  
} __fsid_t;

typedef signed long __clock_t;

typedef unsigned long __rlim_t;

typedef unsigned long __rlim64_t;

typedef unsigned int __id_t;

typedef signed long __time_t;

typedef unsigned int __useconds_t;

typedef signed long __suseconds_t;

typedef signed int __daddr_t;

typedef signed int __key_t;

typedef signed int __clockid_t;

typedef void  *__timer_t;

typedef signed long __blksize_t;

typedef signed long __blkcnt_t;

typedef signed long __blkcnt64_t;

typedef unsigned long __fsblkcnt_t;

typedef unsigned long __fsblkcnt64_t;

typedef unsigned long __fsfilcnt_t;

typedef unsigned long __fsfilcnt64_t;

typedef signed long __fsword_t;

typedef signed long __ssize_t;

typedef signed long __syscall_slong_t;

typedef unsigned long __syscall_ulong_t;

typedef __off64_t __loff_t;

typedef __quad_t  *__qaddr_t;

typedef char  *__caddr_t;

typedef signed long __intptr_t;

typedef unsigned int __socklen_t;

struct _IO_FILE;

typedef struct _IO_FILE FILE;

typedef struct _IO_FILE __FILE;

typedef struct  {
  signed int __count;
  union  {
    unsigned int __wch;
    char __wchb[4];
    
  } __value;
  
} __mbstate_t;

typedef struct  {
  __off_t __pos;
  __mbstate_t __state;
  
} _G_fpos_t;

typedef struct  {
  __off64_t __pos;
  __mbstate_t __state;
  
} _G_fpos64_t;

typedef __builtin_va_list __gnuc_va_list;

struct _IO_jump_t;

struct _IO_FILE;

typedef void _IO_lock_t;

struct _IO_marker {
  struct _IO_marker  *_next;
  struct _IO_FILE  *_sbuf;
  signed int _pos;
  
};

enum __codecvt_result {
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};

struct _IO_FILE {
  signed int _flags;
  char  *_IO_read_ptr;
  char  *_IO_read_end;
  char  *_IO_read_base;
  char  *_IO_write_base;
  char  *_IO_write_ptr;
  char  *_IO_write_end;
  char  *_IO_buf_base;
  char  *_IO_buf_end;
  char  *_IO_save_base;
  char  *_IO_backup_base;
  char  *_IO_save_end;
  struct _IO_marker  *_markers;
  struct _IO_FILE  *_chain;
  signed int _fileno;
  signed int _flags2;
  __off_t _old_offset;
  unsigned short _cur_column;
  char _vtable_offset;
  char _shortbuf[1];
  _IO_lock_t  *_lock;
  __off64_t _offset;
  void  *__pad1;
  void  *__pad2;
  void  *__pad3;
  void  *__pad4;
  size_t __pad5;
  signed int _mode;
  char _unused2[(((15 * (sizeof(signed int))) - (4 * (sizeof(void *)))) - (sizeof(size_t)))];
  
};

typedef struct _IO_FILE _IO_FILE;

struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;

extern struct _IO_FILE_plus _IO_2_1_stdout_;

extern struct _IO_FILE_plus _IO_2_1_stderr_;

typedef __ssize_t __io_read_fn(void  * __cookie, char  * __buf, size_t  __nbytes);

typedef __ssize_t __io_write_fn(void  * __cookie, const char  * __buf, size_t  __n);

typedef signed int __io_seek_fn(void  * __cookie, __off64_t  * __pos, signed int  __w);

typedef signed int __io_close_fn(void  * __cookie);

extern signed int __underflow(_IO_FILE  * );

extern signed int __uflow(_IO_FILE  * );

extern signed int __overflow(_IO_FILE  * , signed int  );

extern signed int _IO_getc(_IO_FILE  * __fp);

extern signed int _IO_putc(signed int  __c, _IO_FILE  * __fp);

extern signed int _IO_feof(_IO_FILE  * __fp) __attribute__((__nothrow__, __leaf__));

extern signed int _IO_ferror(_IO_FILE  * __fp) __attribute__((__nothrow__, __leaf__));

extern signed int _IO_peekc_locked(_IO_FILE  * __fp);

extern void _IO_flockfile(_IO_FILE  * ) __attribute__((__nothrow__, __leaf__));

extern void _IO_funlockfile(_IO_FILE  * ) __attribute__((__nothrow__, __leaf__));

extern signed int _IO_ftrylockfile(_IO_FILE  * ) __attribute__((__nothrow__, __leaf__));

extern signed int _IO_vfscanf(_IO_FILE  *__restrict  , const char  *__restrict  , __gnuc_va_list  , signed int  *__restrict  );

extern signed int _IO_vfprintf(_IO_FILE  *__restrict  , const char  *__restrict  , __gnuc_va_list  );

extern __ssize_t _IO_padn(_IO_FILE  * , signed int  , __ssize_t  );

extern size_t _IO_sgetn(_IO_FILE  * , void  * , size_t  );

extern __off64_t _IO_seekoff(_IO_FILE  * , __off64_t  , signed int  , signed int  );

extern __off64_t _IO_seekpos(_IO_FILE  * , __off64_t  , signed int  );

extern void _IO_free_backup_area(_IO_FILE  * ) __attribute__((__nothrow__, __leaf__));

typedef _G_fpos_t fpos_t;

extern struct _IO_FILE  *stdin;

extern struct _IO_FILE  *stdout;

extern struct _IO_FILE  *stderr;

extern signed int remove(const char  * __filename) __attribute__((__nothrow__, __leaf__));

extern signed int rename(const char  * __old, const char  * __new) __attribute__((__nothrow__, __leaf__));

extern FILE  *tmpfile(void);

extern char  *tmpnam(char  * __s) __attribute__((__nothrow__, __leaf__));

extern signed int fclose(FILE  * __stream);

extern signed int fflush(FILE  * __stream);

extern FILE  *fopen(const char  *__restrict  __filename, const char  *__restrict  __modes);

extern FILE  *freopen(const char  *__restrict  __filename, const char  *__restrict  __modes, FILE  *__restrict  __stream);

extern FILE  *fdopen(signed int  __fd, const char  * __modes) __attribute__((__nothrow__, __leaf__));

extern void setbuf(FILE  *__restrict  __stream, char  *__restrict  __buf) __attribute__((__nothrow__, __leaf__));

extern signed int setvbuf(FILE  *__restrict  __stream, char  *__restrict  __buf, signed int  __modes, size_t  __n) __attribute__((__nothrow__, __leaf__));

extern signed int fprintf(FILE  *__restrict  __stream, const char  *__restrict  __format, ...);

extern signed int printf(const char  *__restrict  __format, ...);

extern signed int sprintf(char  *__restrict  __s, const char  *__restrict  __format, ...) __attribute__((__nothrow__));

extern signed int vfprintf(FILE  *__restrict  __s, const char  *__restrict  __format, __gnuc_va_list  __arg);

extern signed int vprintf(const char  *__restrict  __format, __gnuc_va_list  __arg);

extern signed int vsprintf(char  *__restrict  __s, const char  *__restrict  __format, __gnuc_va_list  __arg) __attribute__((__nothrow__));

extern signed int snprintf(char  *__restrict  __s, size_t  __maxlen, const char  *__restrict  __format, ...) __attribute__((__nothrow__)) __attribute__((__format__(__printf__, 3, 4)));

extern signed int vsnprintf(char  *__restrict  __s, size_t  __maxlen, const char  *__restrict  __format, __gnuc_va_list  __arg) __attribute__((__nothrow__)) __attribute__((__format__(__printf__, 3, 0)));

extern signed int fscanf(FILE  *__restrict  __stream, const char  *__restrict  __format, ...);

extern signed int scanf(const char  *__restrict  __format, ...);

extern signed int sscanf(const char  *__restrict  __s, const char  *__restrict  __format, ...) __attribute__((__nothrow__, __leaf__));

extern signed int vfscanf(FILE  *__restrict  __s, const char  *__restrict  __format, __gnuc_va_list  __arg) __attribute__((__format__(__scanf__, 2, 0)));

extern signed int vscanf(const char  *__restrict  __format, __gnuc_va_list  __arg) __attribute__((__format__(__scanf__, 1, 0)));

extern signed int vsscanf(const char  *__restrict  __s, const char  *__restrict  __format, __gnuc_va_list  __arg) __attribute__((__nothrow__, __leaf__)) __attribute__((__format__(__scanf__, 2, 0)));

extern signed int fgetc(FILE  * __stream);

extern signed int getc(FILE  * __stream);

extern signed int getchar(void);

extern signed int getc_unlocked(FILE  * __stream);

extern signed int getchar_unlocked(void);

extern signed int fputc(signed int  __c, FILE  * __stream);

extern signed int putc(signed int  __c, FILE  * __stream);

extern signed int putchar(signed int  __c);

extern signed int putc_unlocked(signed int  __c, FILE  * __stream);

extern signed int putchar_unlocked(signed int  __c);

extern char  *fgets(char  *__restrict  __s, signed int  __n, FILE  *__restrict  __stream);

extern signed int fputs(const char  *__restrict  __s, FILE  *__restrict  __stream);

extern signed int puts(const char  * __s);

extern signed int ungetc(signed int  __c, FILE  * __stream);

extern size_t fread(void  *__restrict  __ptr, size_t  __size, size_t  __n, FILE  *__restrict  __stream);

extern size_t fwrite(const void  *__restrict  __ptr, size_t  __size, size_t  __n, FILE  *__restrict  __s);

extern signed int fseek(FILE  * __stream, signed long  __off, signed int  __whence);

extern signed long ftell(FILE  * __stream);

extern void rewind(FILE  * __stream);

extern signed int fgetpos(FILE  *__restrict  __stream, fpos_t  *__restrict  __pos);

extern signed int fsetpos(FILE  * __stream, const fpos_t  * __pos);

extern void clearerr(FILE  * __stream) __attribute__((__nothrow__, __leaf__));

extern signed int feof(FILE  * __stream) __attribute__((__nothrow__, __leaf__));

extern signed int ferror(FILE  * __stream) __attribute__((__nothrow__, __leaf__));

extern void perror(const char  * __s);

extern signed int fileno(FILE  * __stream) __attribute__((__nothrow__, __leaf__));

extern char  *ctermid(char  * __s) __attribute__((__nothrow__, __leaf__));

extern void flockfile(FILE  * __stream) __attribute__((__nothrow__, __leaf__));

extern signed int ftrylockfile(FILE  * __stream) __attribute__((__nothrow__, __leaf__));

extern void funlockfile(FILE  * __stream) __attribute__((__nothrow__, __leaf__));

struct Expr {
  enum  {
    AND,
    OR,
    LITERAL
  } tag;
  union ExprVariant {
    struct  {
      struct Expr  *lhs;
      struct Expr  *rhs;
      
    } and;
    struct  {
      struct Expr  *lhs;
      struct Expr  *rhs;
      
    } or;
    _Bool literal;
    
  } variant;
  
};

signed int eval(struct Expr  * e)
{

  {
    signed int val = 999;;
    switch (((e)->tag))
    {
      {
        case (AND):
          ((val) = (((eval)(((({
            union ExprVariant  *_tmp15 = (&((e)->variant));;
            ({
              if ((((e)->tag) != (AND)))
              {
                ((fprintf)((stderr), "example1.xc:25:13:ERROR: mismatched tag\n"));
                ((exit)(255));
              } else {
                
              }
              (_tmp15); })
            ; })
          ->and).lhs))) && ((eval)(((({
            union ExprVariant  *_tmp17 = (&((e)->variant));;
            ({
              if ((((e)->tag) != (AND)))
              {
                ((fprintf)((stderr), "example1.xc:25:41:ERROR: mismatched tag\n"));
                ((exit)(255));
              } else {
                
              }
              (_tmp17); })
            ; })
          ->and).rhs)))));
        
        break;
        case (OR):
          ((val) = (((eval)(((({
            union ExprVariant  *_tmp19 = (&((e)->variant));;
            ({
              if ((((e)->tag) != (OR)))
              {
                ((fprintf)((stderr), "example1.xc:30:13:ERROR: mismatched tag\n"));
                ((exit)(255));
              } else {
                
              }
              (_tmp19); })
            ; })
          ->or).lhs))) || ((eval)(((({
            union ExprVariant  *_tmp21 = (&((e)->variant));;
            ({
              if ((((e)->tag) != (OR)))
              {
                ((fprintf)((stderr), "example1.xc:30:40:ERROR: mismatched tag\n"));
                ((exit)(255));
              } else {
                
              }
              (_tmp21); })
            ; })
          ->or).rhs)))));
        
        break;
        case (LITERAL):
          ((val) = (({
            union ExprVariant  *_tmp23 = (&((e)->variant));;
            ({
              if ((((e)->tag) != (LITERAL)))
              {
                ((fprintf)((stderr), "example1.xc:33:8:ERROR: mismatched tag\n"));
                ((exit)(255));
              } else {
                
              }
              (_tmp23); })
            ; })
          ->literal));
        
        break;
      }
    }
    
    return (val);
  }
}

signed int main(void)
{

  {
    struct Expr true_expr = {(LITERAL)};;
    ((({
      union ExprVariant  *_tmp25 = (&((true_expr).variant));;
      ({
        if ((((true_expr).tag) != (LITERAL)))
        {
          ((fprintf)((stderr), "example1.xc:43:1:ERROR: mismatched tag\n"));
          ((exit)(255));
        } else {
          
        }
        (_tmp25); })
      ; })
    ->literal) = 1);
    struct Expr false_expr = {(LITERAL)};;
    ((({
      union ExprVariant  *_tmp27 = (&((false_expr).variant));;
      ({
        if ((((false_expr).tag) != (LITERAL)))
        {
          ((fprintf)((stderr), "example1.xc:46:1:ERROR: mismatched tag\n"));
          ((exit)(255));
        } else {
          
        }
        (_tmp27); })
      ; })
    ->literal) = 0);
    struct Expr e = {(OR)};;
    (((({
      union ExprVariant  *_tmp31 = (&((e).variant));;
      ({
        if ((((e).tag) != (OR)))
        {
          ((fprintf)((stderr), "example1.xc:49:1:ERROR: mismatched tag\n"));
          ((exit)(255));
        } else {
          
        }
        (_tmp31); })
      ; })
    ->or).lhs) = (&(true_expr)));
    (((({
      union ExprVariant  *_tmp35 = (&((e).variant));;
      ({
        if ((((e).tag) != (OR)))
        {
          ((fprintf)((stderr), "example1.xc:50:1:ERROR: mismatched tag\n"));
          ((exit)(255));
        } else {
          
        }
        (_tmp35); })
      ; })
    ->or).rhs) = (&(false_expr)));
    ((printf)("true || false = %d\n", ((eval)((&(e))))));
    return 0;
  }
}
