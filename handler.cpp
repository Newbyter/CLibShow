
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>
#include "util.h"

void acos_handler(void)
{
	double x = getDouble("x = ");
	printf("acos(%f) => %f\n", x, acos(x));
}

void fabs_handler(void)
{
	double x = getDouble("x = ");
	printf("fabs(%lf) => %lf\n", x, fabs(x));	
}

void asin_handler(void)
{
	double x = getDouble("x = ");
	printf("asin(%lf) => %lf\n", x, asin(x));
}

void atan_handler(void)
{
	double x = getDouble("x = ");
	printf("atan(%lf) => %lf\n", x, atan(x));
}

void atan2_handler(void)
{
	double x = getDouble("x = "), y = getDouble("y = ");
	printf("atan2(%lf, %lf) => %lf\n", y, x, atan2(y, x));
}

void cos_handler(void)
{
	double x = getDouble("x = ");
	printf("cos(%f) => %f\n", x, cos(x));
}

void sin_handler(void)
{
	double x = getDouble("x = ");
	printf("sin(%f) => %f\n", x, sin(x));
}

void tan_handler(void)
{
	double x = getDouble("x = ");
	printf("tan(%f) => %f\n", x, tan(x));
}

void cosh_handler(void)
{
	double x = getDouble("x = ");
	printf("cosh(%f) => %f\n", x, cosh(x));
}
void sinh_handler(void)
{
	double x = getDouble("x = ");
	printf("tan(%f) => %f\n", x, sinh(x));
}
void tanh_handler(void)
{
	double x = getDouble("x = ");
	printf("tan(%f) => %f\n", x, tanh(x));
}

void ceil_handler(void)
{
	double x = getDouble("x = ");
	printf("ceil(%lf) => %lf\n", x, ceil(x));
}

void floor_handler(void)
{
	double x = getDouble("x = ");
	printf("floor(%lf) => %lf\n", x, floor(x));
}

void exp_handler(void)
{
	double x = getDouble("x = ");
	printf("exp(%lf) => %lf\n", x, exp(x));
}

void fmod_handler(void)
{
	double x = getDouble("x = "), y = getDouble("y = ");
	printf("fmod(%lf, %lf) => %lf\n", x, y, fmod(x, y));
}

void frexp_handler(void)
{
	double x = getDouble("x = "), y = 0.0;
	int exp;
	y = frexp(x, &exp);
	printf("%lf = %lf * 2 ^ %d\n", x, y, exp);
}

void ldexp_handler(void)
{
	double x = getDouble("x = ");
	int exp = getInt("exp = ");
	printf("ldexp(%lf, %d) => %lf\n", x, exp, ldexp(x, exp));
}

void log_handler(void)
{
	double x = getDouble("x = ");
	printf("log(%lf) => %lf\n", x, log(x));
}

void log10_handler(void)
{
	double x = getDouble("x = ");
	printf("log10(%lf) => %lf\n", x, log10(x));
}

void modf_handler(void)
{
	double x = getDouble("x = "), y = 0.0, i = 0.0;
	y = modf(x, &i);
	printf("%lf = %lf + %lf\n", x, i, y);
}

void pow_handler(void)
{
	double x = getDouble("x = "), exp = getDouble("exp = ");
	printf("%lf ^ %lf = %lf\n", x, exp, pow(x, exp));
}

void sqrt_handler(void)
{
	double x = getDouble("x = ");
	printf("sqrt(%lf) = %lf\n", x, sqrt(x));
}

// ctype.h库函数: 13个
// ctype.h库函数参数为int类型，而我们需要接受一个字符（注意：不是 int 类型，是 char 类型），然后传递给库函数
void isalnum_handler(void)
{
	char x = getChar("input a character x = ");
	printf("character is %c, corresponding ASCII is %d, isalnum(%d) = %d\n", x, x, x, isalnum(x));
}
void isalpha_handler(void)
{
	char x = getChar("input a character x = ");
	printf("character is %c, corresponding ASCII is %d, isalpha(%d) = %d\n", x, x, x, isalpha(x));
}
void iscntrl_handler(void)
{
	char x = getChar("input a character x = ");
	printf("character is %c, corresponding ASCII is %d, iscntrl(%d) = %d\n", x, x, x, iscntrl(x));
}
void isdigit_handler(void)
{
	char x = getChar("input a character x = ");
	printf("character is %c, corresponding ASCII is %d, isdigit(%d) = %d\n", x, x, x, isdigit(x));
}
void isgraph_handler(void)
{
	char x = getChar("input a character x = ");
	printf("character is %c, corresponding ASCII is %d, isgraph(%d) = %d\n", x, x, x, isgraph(x));
}
void islower_handler(void)
{
	char x = getChar("input a character x = ");
	printf("character is %c, corresponding ASCII is %d, islower(%d) = %d\n", x, x, x, islower(x));
}
void isprint_handler(void)
{
	char x = getChar("input a character x = ");
	printf("character is %c, corresponding ASCII is %d, isprint(%d) = %d\n", x, x, x, isprint(x));
}
void ispunct_handler(void)
{
	char x = getChar("input a character x = ");
	printf("character is %c, corresponding ASCII is %d, ispunct(%d) = %d\n", x, x, x, ispunct(x));
}
void isspace_handler(void)
{
	char x = getChar("input a character x = ");
	printf("character is %c, corresponding ASCII is %d, isspace(%d) = %d\n", x, x, x, isspace(x));
}
void isupper_handler(void)
{
	char x = getChar("input a character x = ");
	printf("character is %c, corresponding ASCII is %d, isupper(%d) = %d\n", x, x, x, isupper(x));
}
void isxdigit_handler(void)
{
	char x = getChar("input a character x = ");
	printf("character is %c, corresponding ASCII is %d, isxdigit(%d) = %d\n", x, x, x, isxdigit(x));
}
void tolower_handler(void)
{
	char x = getChar("input a character x = ");
	printf("character is %c, corresponding ASCII is %d, tolower(%d) = %d\n", x, x, x, tolower(x));
}
void toupper_handler(void)
{
	char x = getChar("input a character x = ");
	printf("character is %c, corresponding ASCII is %d, toupper(%d) = %d\n", x, x, x, toupper(x));
}

// stdlib.h库
void strtod_handler(void)
{
	// double strtod(const char *s, char **endptr);
	char s[50], *endptr;
	printf("s = ");
	scanf("%s", s);
	printf("x = %lf\n", strtod(s, &endptr));
	if (endptr[0] != '\0')
	{
		printf("endptr = %s\n", endptr);
	}	
}

void strtol_handler(void)
{
	// long strtol(const char *s, char **endptr, int base);
	char s[50], *endptr;
	printf("s = ");
	scanf("%s", s);
	int base = getInt("base = ");
	
	// 防止base超出范围
	while (base != 0 && (base < 2 || base > 36))
	{
		printf("The base range is [2,36], or base is equal to 0\n");
		base = getInt("base = ");
	}
	printf("x = %ld\n", strtol(s, &endptr, base));

	// 如果字符串中的整数值超出long int的表示范围（上溢或下溢）
	// 则strtol返回它所能表示的最大（或最小）整数，并设置errno为ERANGE
	if (errno == ERANGE)
	{
		printf("%s\n", strerror(errno));
		errno = 0;		// 重置errno
	}
}

void strtoul_handler(void)
{
	// unsigned long strtoul(const char *s, char **endptr, int base);
	char s[50], *endptr;
	printf("s = ");
	scanf("%s", s);
	int base = getInt("base = ");
	
	// 防止base超出范围
	while (base != 0 && (base < 2 || base > 36))
	{
		printf("The base range is [2,36], or base is equal to 0\n");
		base = getInt("base = ");
	}
	printf("x = %lu\n", strtoul(s, &endptr, base));

	// 如果字符串中的整数值超出unsigned long的表示范围
	// 则strtoul返回它所能表示的最大整数，并设置errno为ERANGE
	if (errno == ERANGE)
	{
		printf("%s\n", strerror(errno));
		errno = 0;		// 重置errno
	}
}

void system_handler(void)
{
	// int system(const char *s);
	char s[200];
	printf("s = ");
	scanf("%s", s);
	system(s);
}

/**************以下函数还需进一步研究*****************************
void mblen_handler(void)
{
	// int mblen(const char *s, size_t n);
	char s[200];
	printf("s = ");
	scanf("%s", s);
	int n = getInt("n = ");
	setlocale (LC_ALL,"");
	printf("x = %d", mblen(s, n ? n : strlen(s)));
}

void mbstowcs_handler(void)
{
	// size_t mbstowcs(wchar_t *wcs, const char *s, size_t n);
	char mb[200];
	wchar_t wc[400];
	int n = getInt("n = ");
	setlocale (LC_ALL,"");
	printf("mb = ");
	scanf("%s", mb);
	mbstowcs(wc, mb, n ? n : strlen(mb));

}
//void mbtowc_handler(void);
//void wcstombs_handler(void);
//int wctomb_handler(void);

//int mbtowc(wchar_t *pwc, const char *s, size_t n);
//size_t wcstombs(char *s, const wchar_t *wcs, size_t n);
//int wctomb(char *s, wchar_t wchar);
*****************************************************************/