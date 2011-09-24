
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
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

void abs_handler(void)
{
	int x = getInt("x = ");
	printf("abs(%d) => %d\n", x, abs(x));
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

void hypot_handler(void)
{
	double x = getDouble("x = "), y = getDouble("y = ");
	printf("hypot(%lf, %lf) => %lf\n", x, y, hypot(x, y));
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