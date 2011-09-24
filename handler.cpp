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