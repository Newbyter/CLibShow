#pragma once

void acos_handler(void);
void asin_handler(void);
void atan_handler(void);
void cos_handler(void);
void sin_handler(void);
void tan_handler(void);
void cosh_handler(void);
void sinh_handler(void);
void tanh_handler(void);
void atan2_handler(void);
void fabs_handler(void);
void ceil_handler(void);
void floor_handler(void);
void exp_handler(void);
void fmod_handler(void);
void frexp_handler(void);
void ldexp_handler(void);
void log_handler(void);
void log10_handler(void);
void modf_handler(void);
void pow_handler(void);
void  sqrt_handler(void);

// ctype.h库函数: 13个
void isalnum_handler(void);
void isalpha_handler(void);
void iscntrl_handler(void);
void isdigit_handler(void);
void isgraph_handler(void);
void islower_handler(void);
void isprint_handler(void);
void ispunct_handler(void);
void isspace_handler(void);
void isupper_handler(void);
void isxdigit_handler(void);
void tolower_handler(void);
void toupper_handler(void);

// 部分stdlib.h库函数
void strtod_handler(void);
void strtol_handler(void);
void strtoul_handler(void);
void system_handler(void);
void mblen_handler(void);
void mbstowcs_handler(void);
void mbtowc_handler(void);
void wcstombs_handler(void);
int wctomb_handler(void);

/******stdlib.h库中其他函数(没有实现handler)*******
void abort(void);
int atexit(void (*func)void));
void *calloc(size_t nelem, size_t size);
void exit(int status);
void free(void *ptr);
long labs(long i);
ldiv_t ldiv(long numer, long denom);
void *malloc(size_t size);
void *realloc(void *ptr, size_t size);
***************************************************/