#include <stdio.h>
#include <math.h>
#include "util.h"

void acos_handler(void)
{
	double x = getDouble("x=");
	printf("acos(%f) => %f\n", x, acos(x));
}