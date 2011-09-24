
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
	double x = 0;
	printf("x = ");
	int ret = scanf("%lf", &x);
	if (ret > 0)
	{
		printf("abs(%d) => %d\n", (int)x, abs((int)x));
	}
	else
	{
		printf("please input number\n");
	}
}

void asin_handler(void)
{
	double x = 0.0;
	printf("x=");
	int ret = scanf("%lf", &x);
	if (ret > 0)
	{
		printf("asin(%lf) => %lf\n", x, asin(x));
	}
	else
	{
		printf("please input number\n");
	}
}

void atan_handler(void)
{
	double x = 0.0;
	printf("x=");
	int ret = scanf("%lf", &x);
	if (ret > 0)
	{
		printf("atan(%lf) => %lf\n", x, atan(x));
	}
	else
	{
		printf("please input number\n");
	}
}

void atan2_handler(void)
{
	double x = 0.0, y = 0.0;
	printf("x=");
	int ret1 = scanf("%lf", &x);
	printf("y=");
	int ret2 = scanf("%lf", &y);
	if (ret1 > 0 && ret2 > 0)
	{
		printf("atan2(%lf, %lf) => %lf\n", y, x, atan2(y, x));
	}
	else
	{
		printf("please input number\n");
	}
}

void cos_handler(void)
{
	double x = 0.0;
	printf("x=");
	int ret = scanf("%lf", &x);
	if (ret > 0)
	{
		printf("cos(%f) => %f\n", x, cos(x));
	}
	else
	{
		printf("please input number\n");
	}
}

void sin_handler(void)
{
	double x = 0.0;
	printf("x=");
	int ret = scanf("%lf", &x);
	if (ret > 0)
	{
		printf("sin(%f) => %f\n", x, sin(x));
	}
	else
	{
		printf("please input number\n");
	}
}

void tan_handler(void)
{
	double x = 0.0;
	printf("x=");
	int ret = scanf("%lf", &x);
	if (ret > 0)
	{
		printf("tan(%f) => %f\n", x, tan(x));
	}
	else
	{
		printf("please input number\n");
	}
}

void cosh_handler(void)
{
	double x = 0.0;
	printf("x=");
	int ret = scanf("%lf", &x);
	if (ret > 0)
	{
		printf("cosh(%f) => %f\n", x, cosh(x));
	}
	else
	{
		printf("please input number\n");
	}
}
void sinh_handler(void)
{
	double x = 0.0;
	printf("x=");
	int ret = scanf("%lf", &x);
	if (ret > 0)
	{
		printf("tan(%f) => %f\n", x, sinh(x));
	}
	else
	{
		printf("please input number\n");
	}
}
void tanh_handler(void)
{
	double x = 0.0;
	printf("x=");
	int ret = scanf("%lf", &x);
	if (ret > 0)
	{
		printf("tan(%f) => %f\n", x, tanh(x));
	}
	else
	{
		printf("please input number\n");
	}
}

void ceil_handler(void)
{
	double x = 0.0;
	printf("x=");
	int ret = scanf("%lf", &x);
	if (ret > 0)
	{
		printf("ceil(%lf) => %lf\n", x, ceil(x));
	}
	else
	{
		printf("please input number\n");
	}
}

void floor_handler(void)
{
	double x = 0.0;
	printf("x=");
	int ret = scanf("%lf", &x);
	if (ret > 0)
	{
		printf("floor(%lf) => %lf\n", x, floor(x));
	}
	else
	{
		printf("please input number\n");
	}
}

void exp_handler(void)
{
	double x = 0.0;
	printf("x=");
	int ret = scanf("%lf", &x);
	if (ret > 0)
	{
		printf("exp(%lf) => %lf\n", x, exp(x));
	}
	else
	{
		printf("please input number\n");
	}
}

void fmod_handler(void)
{
	double x = 0.0, y = 0.0;
	printf("x=");
	int ret1 = scanf("%lf", &x);
	printf("y=");
	int ret2 = scanf("%lf", &y);
	if (ret1 > 0 && ret2 > 0)
	{
		printf("fmod(%lf, %lf) => %lf\n", x, y, fmod(x, y));
	}
	else
	{
		printf("please input number\n");
	}
}

void frexp_handler(void)
{
	double x = 0.0, y = 0.0;
	int exp;
	printf("x=");
	int ret = scanf("%lf", &x);
	if (ret > 0)
	{
		y = frexp(x, &exp);
		printf("%lf = %lf * 2 ^ %d\n", x, y, exp);
	}
	else
	{
		printf("please input number\n");
	}
}

void hypot_handler(void)
{
	double x = 0.0, y = 0.0;
	printf("x=");
	int ret1 = scanf("%lf", &x);
	printf("y=");
	int ret2 = scanf("%lf", &y);
	if (ret1 > 0 && ret2 > 0)
	{
		printf("hypot(%lf, %lf) => %lf\n", x, y, _hypot(x, y));
	}
	else
	{
		printf("please input number\n");
	}
}

void ldexp_handler(void)
{
	double x = 0.0;
	int exp;
	printf("x=");
	int ret1 = scanf("%lf", &x);
	printf("exp=");
	int ret2 = scanf("%d", &exp);
	if (ret1 > 0 && ret2 > 0)
	{
		printf("ldexp(%lf, %d) => %lf\n", x, exp, ldexp(x, exp));
	}
	else
	{
		printf("please input number\n");
	}
}

void log_handler(void)
{
	double x = 0.0;
	printf("x=");
	int ret = scanf("%lf", &x);
	if (ret > 0)
	{
		printf("log(%lf) => %lf\n", x, log(x));
	}
	else
	{
		printf("please input number\n");
	}
}

void log10_handler(void)
{
	double x = 0.0;
	printf("x=");
	int ret = scanf("%lf", &x);
	if (ret > 0)
	{
		printf("log10(%lf) => %lf\n", x, log10(x));
	}
	else
	{
		printf("please input number\n");
	}
}

void modf_handler(void)
{
	double x = 0.0, y = 0.0, i = 0.0;
	printf("x=");
	int ret = scanf("%lf", &x);
	if (ret > 0)
	{
		y = modf(x, &i);
		printf("%lf = %lf + %lf\n", x, i, y);
	}
	else
	{
		printf("please input number\n");
	}
}

void pow_handler(void)
{
	double x = 0.0, exp = 0.0;
	printf("x=");
	int ret1 = scanf("%lf", &x);
	printf("exp=");
	int ret2 = scanf("%lf", &exp);
	if (ret1 > 0 && ret2 > 0)
	{
		printf("%lf ^ %lf = %lf\n", x, exp, pow(x, exp));
	}
	else
	{
		printf("please input number\n");
	}
}

void sqrt_handler(void)
{
	double x = 0.0, exp = 0.0;
	printf("x=");
	int ret = scanf("%lf", &x);
	if (ret > 0)
	{
		printf("sqrt(%lf) = %lf\n", x, sqrt(x));
	}
	else
	{
		printf("please input number\n");
	}
}