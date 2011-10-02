
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
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

/////////////////////////////////////////////////////
//////////////string_handler////////////////////////
////////////////////////////////////////////////////////

void memchr_handler(void)
{
	char *s = getString("s = ");
	char c = getChar("c = ");
	size_t n = getSize_t("n = ");
	printf("memchr(%s, %c, %lu) = %s\n", s, c, n, memchr(s, c, n));
}

void memcmp_handler(void)
{
	char *s1 = getString("s1 = ");
	char *s2 = getString("s2 = ");
	size_t n = getSize_t("n = ");
	printf("memcmp(%s, %s, %lu) = %d\n", s1, s2, n, memcmp(s1, s2, n));
}

void memcpy_handler(void)
{
	char *s1 = getString("s1 = ");
	char *s2 = getString("s2 = ");
	size_t n = getSize_t("n = ");
	printf("memcpy(%s, %s, %lu) = %s\n", s1, s2, n, memcpy(s1, s2, n));
}
void memmove_handler(void)
{
	char *s1 = getString("s1 = ");
	char *s2 = getString("s2 = ");
	size_t n = getSize_t("n = ");
	printf("memmove(%s, %s, %lu) = %s\n", s1, s2, n, memmove(s1, s2, n));
}
void memset_handler(void)
{
	char *s = getString("s = ");
	char c = getChar("c = ");
	size_t n = getSize_t("n = ");
	printf("memset(%s, %c, %lu) = %s\n", s, c, n, memset(s, c, n));
}
void strcat_handler(void)
{
	char *s1 = getString("s1 = ");
	char *s2 = getString("s2 = ");
	printf("strcat(%s, %s) = %s\n", s1, s2, strcat(s1, s2));
}
void strchr_handler(void)
{
	char *s = getString("s = ");
	char c = getChar("c = ");
	printf("strchr(%s, %c) = %s\n", s, c, strchr(s, c));
}
void strcmp_handler(void)
{
	char *s1 = getString("s1 = ");
	char *s2 = getString("s2 = ");
	printf("strcmp(%s, %s) = %d\n", s1, s2, strcmp(s1, s2));
}
void strcoll_handler(void)
{
	char *s1 = getString("s1 = ");
	char *s2 = getString("s2 = ");
	printf("strcoll(%s, %s) = %d\n", s1, s2, strcoll(s1, s2));
}
void strcpy_handler(void)
{
	char *s1 = getString("s1 = ");
	char *s2 = getString("s2 = ");
	printf("strcpy(%s, %s) = %s\n", s1, s2, strcpy(s1, s2));
}
void strcspn_handler(void)
{
	char *s1 = getString("s1 = ");
	char *s2 = getString("s2 = ");
	printf("strcspn(%s, %s) = %lu\n", s1, s2, strcspn(s1, s2));
}
void strerror_handler(void)
{
	char errcode = getChar("c = ");
	printf("strerror(%c) = %s\n", errcode, strerror(errcode));
}
void strlen_handler(void)
{
	char *s = getString("s = ");
	printf("strlen(%s) = %lu\n", s, strlen(s));
}
void strncat_handler(void)
{
	char *s1 = getString("s1 = ");
	char *s2 = getString("s2 = ");
	size_t n = getSize_t("n = ");
	printf("strncat(%s, %s, %lu) = %s\n", s1, s2, n, strncat(s1, s2, n));
}
void strncmp_handler(void)
{
	char *s1 = getString("s1 = ");
	char *s2 = getString("s2 = ");
	size_t n = getSize_t("n = ");
	printf("strncmp(%s, %s, %lu) = %lu\n", s1, s2, n, strncmp(s1, s2, n));
}
void strncpy_handler(void)
{
	char *s1 = getString("s1 = ");
	char *s2 = getString("s2 = ");
	size_t n = getSize_t("n = ");
	printf("strncpy(%s, %s, %lu) = %s\n", s1, s2, n, strncpy(s1, s2, n));
}
void strpbrk_handler(void)
{
	char *s1 = getString("s1 = ");
	char *s2 = getString("s2 = ");
	printf("strpbrk(%s, %s) = %s\n", s1, s2, strpbrk(s1, s2));
}
void strrchr_handler(void)
{
	char *s = getString("s = ");
	char c = getChar("c = ");
	printf("strrchr(%s, %c) = %s\n", s, c, strrchr(s, c));
}
void strspn_handler(void)
{
	char *s1 = getString("s2 = ");
	char *s2 = getString("s2 = ");
	printf("strspn(%s, %s) = %lu\n", s1, s2, strspn(s1, s2));
}
void strstr_handler(void)
{
	char *s1 = getString("s1 = ");
	char *s2 = getString("s2 = ");
	printf("strstr(%s, %s) = %s\n", s1, s2, strstr(s1, s2));
}
void strtok_handler(void)
{
	char *s1 = getString("s1 = ");
	char *s2 = getString("s2 = ");
	printf("strtok(%s, %s) = %s\n", s1, s2, strtok(s1, s2));
}
void strxfrm_handler(void)
{
	char *s1 = getString("s1 = ");
	char *s2 = getString("s2 = ");
	size_t n = getSize_t("n = ");
	printf("strxfrm(%s, %s, %lu) = %lu\n", s1, s2, n, strxfrm(s1, s2, n));
}
/////////////////////////////////////////////////////
//////////////stdlib_handler////////////////////////
////////////////////////////////////////////////////////
void abs_handler(void)
{
	int x=getInt("x=");
	printf("abs(%d)=>%d\n",x,abs(x));
}
void atof_handler(void)
{
	const char *s=getString("s=");
	printf("atof(%s)=%lf\n",s,atof(s));
}
void atoi_handler(void)
{
	const char *s=getString("s=");
	printf("atoi(%s)=%d",s,atoi(s));
}
void bsearch_handler(void)
{
	printf("Sorry!暂时不能实现\n");
}
void div_handler(void)
{
	int number=getInt("number=");
	int denom=getInt("denome=");
	printf("div(%d,%d)=%d\n",number,denom,div(number,denom));
}
void getenv_handler(void)
{
	const char *name=getString("name=");
	printf("getenv(%s)=%s\n",name,getenv(name));
}
void qsort_handler(void)
{
	printf("SORRY!该函数暂时无法实现\n");
}
void rand_handler(void)
{
	int a;
	printf("rand(void)=%d\n",rand());
}