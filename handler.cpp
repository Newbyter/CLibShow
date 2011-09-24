#include <stdio.h>
#include <math.h>

void acos_handler(void)
{
	double x = 0.0;
	printf("x=");
	int ret = scanf("%lf", &x);
	if (ret > 0)
	{
		printf("acos(%f) => %f\n", x, acos(x));
	}
	else
	{
		printf("please input number\n");
	}
}


void asinl_handler(void)  
{
	double x = 0.0;
	printf("x=");
	int ret = scanf("%lf", &x);
	if (ret > 0)
	{
		printf("asinl(%f) => %f\n", x, asinl(x));
	}
	else
	{
		printf("please input number\n");
	}
}

void atanl_handler(void)  
{
	double x = 0.0;
	printf("x=");
	int ret = scanf("%lf", &x);
	if (ret > 0)
	{
		printf("atanl(%f) => %f\n", x, atanl(x));
	}
	else
	{
		printf("please input number\n");
	}
}



void atan2l_handler(void) 
{
	double x = 0.0,y=0.0;
	printf("x=\ny=");
	int ret = scanf("%lf %lf", &x,&y);
	if (ret > 0)
	{
		printf("atan2l(%f,%f) => %f\n", x,y, atan2l(x,y));
	}
	else
	{
		printf("please input number\n");
	}
}


void ceill_handler(void)
{
	double x = 0.0;
	printf("x=");
	int ret = scanf("%lf", &x);
	if (ret > 0)
	{
		printf("ceill(%f) => %f\n", x, ceill(x));
	}
	else
	{
		printf("please input number\n");
	}
}


void cosl_handler(void) 
{
	double x = 0.0;
	printf("x=");
	int ret = scanf("%lf", &x);
	if (ret > 0)
	{
		printf("cosl(%f) => %f\n", x, cosl(x));
	}
	else
	{
		printf("please input number\n");
	}
}



void coshl_handler(void)
{
	double x = 0.0;
	printf("x=");
	int ret = scanf("%lf", &x);
	if (ret > 0)
	{
		printf("coshl(%f) => %f\n", x,coshl(x));
	}
	else
	{
		printf("please input number\n");
	}
}



void expl_handler(void)
{
	double x = 0.0;
	printf("x=");
	int ret = scanf("%lf", &x);
	if (ret > 0)
	{
		printf("expl(%f) => %f\n", x,expl(x));
	}
	else
	{
		printf("please input number\n");
	}
}


void fabsl_handler(void)  
{
	double x = 0.0;
	printf("x=");
	int ret = scanf("%lf", &x);
	if (ret > 0)
	{
		printf("fabsl(%f) => %f\n", x,fabsl(x));
	}
	else
	{
		printf("please input number\n");
	}
}



void floorl_handler(void)
{
	double x = 0.0;
	printf("x=");
	int ret = scanf("%lf", &x);
	if (ret > 0)
	{
		printf("floorl(%f) => %f\n", x,floorl(x));
	}
	else
	{
		printf("please input number\n");
	}
}


void fmodl_handler(void) 
{
	double x = 0.0,y=0.0;
	printf("x=\ny=");
	int ret = scanf("%lf %lf", &x,&y);
	if (ret > 0)
	{
		printf("fmodl(%f,%f) => %f\n", x,y,fmodl(x,y));
	}
	else
	{
		printf("please input number\n");
	}
}

/*void frexpl_handler(void)
{
	double x = 0.0,y=0.0;
	printf("x=\ny=");
	int ret = scanf("%lf %lf", &x,&y);
	if (ret > 0)
	{
		printf("frexpl(%f,%f) => %f\n", x,y,frexpl(x,y));
	}
	else
	{
		printf("please input number\n");
	}
}
*/

/*void hypotl_handler(void) 
{
	double x = 0.0,y=0.0;
	printf("x=\ny=");
	int ret = scanf("%lf %lf", &x,&y);
	if (ret > 0)
	{
		printf("hypotl(%f,%f) => %f\n", x,y,hypotl(x,y));
	}
	else
	{
		printf("please input number\n");
	}
}*/

void ldexpl_handler(void)

{
	double x = 0.0,y=0.0;
	printf("x=\ny=");
	int ret = scanf("%lf %lf", &x,&y);
	if (ret > 0)
	{
		printf("ldexpl(%f,%f) => %f\n", x,y,ldexpl(x,y));
	}
	else
	{
		printf("please input number\n");
	}
}


void logl_handler(void) 
{
	double x = 0.0;
	printf("x=");
	int ret = scanf("%lf", &x);
	if (ret > 0)
	{
		printf("logl(%f) => %f\n", x, logl(x));
	}
	else
	{
		printf("please input number\n");
	}
}

void log10l_handler(void) 
{
	double x = 0.0;
	printf("x=");
	int ret = scanf("%lf", &x);
	if (ret > 0)
	{
		printf("log10l(%f) => %f\n", x, log10l(x));
	}
	else
	{
		printf("please input number\n");
	}
}


 

/*void ldexpl_handler(void)

{
	double x = 0.0,y=0.0;
	printf("x=\ny=");
	int ret = scanf("%lf %lf", &x,&y);
	if (ret > 0)
	{
		printf("ldexpl(%f,%f) => %f\n", x,y,ldexpl(x,y));
	}
	else
	{
		printf("please input number\n");
	}
}
*/


void sinl_handler(void) 
{
	double x = 0.0;
	printf("x=");
	int ret = scanf("%lf", &x);
	if (ret > 0)
	{
		printf("sinl(%f) => %f\n", x, sinl(x));
	}
	else
	{
		printf("please input number\n");
	}
}


void sinhl_handler(void)         //((long double)sinh((double)(x)))
{
	double x = 0.0;
	printf("x=");
	int ret = scanf("%lf", &x);
	if (ret > 0)
	{
		printf("sinhl(%f) => %f\n", x, sinhl(x));
	}
	else
	{
		printf("please input number\n");
	}
}
void sqrtl_handler(void)         //((long double)sqrt((double)(x)))
{
	double x = 0.0;
	printf("x=");
	int ret = scanf("%lf", &x);
	if (ret > 0)
	{
		printf("sqrtl(%f) => %f\n", x, sqrtl(x));
	}
	else
	{
		printf("please input number\n");
	}
}
void tanl_handler(void)          //((long double)tan((double)(x)))
{
	double x = 0.0;
	printf("x=");
	int ret = scanf("%lf", &x);
	if (ret > 0)
	{
		printf(" tanl(%f) => %f\n", x,  tanl(x));
	}
	else
	{
		printf("please input number\n");
	}
}
void tanhl_handler(void)         //((long double)tanh((double)(x)))
{
	double x = 0.0;
	printf("x=");
	int ret = scanf("%lf", &x);
	if (ret > 0)
	{
		printf("tanhl(%f) => %f\n", x, tanhl(x));
	}
	else
	{
		printf("please input number\n");
	}
}



/*void frexpf_handler(void) 
{
	double x = 0.0,y=0.0;
	printf("x=\ny=");
	int ret = scanf("%lf %lf", &x,&y);
	if (ret > 0)
	{
		printf("frexpf(%f,%f) => %f\n", x,y,frexpf(x,y));
	}
	else
	{
		printf("please input number\n");
	}
}*/