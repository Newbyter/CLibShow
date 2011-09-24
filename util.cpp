#include <stdio.h>
#include <stdlib.h>

static const int bufferSize = 256;
static char inputBuffer[bufferSize];

static char * readLine()
{
	memset(inputBuffer, 0, bufferSize);
	char * p = gets(inputBuffer);
	return p;
}

// 让用户输入一个 int 型的数字
int getInt(const char * message)
{
	while (true)
	{
		if (message != NULL)
		{
			printf(message);
		}
		int v = 0;
		char * line = readLine();

		int success = scanf("%d\n", &v);
		if (success != 0)
		{
			return v;
		}
		else
		{
			// 如果用户输入了垃圾数据，则将要求用户重新输入
			// 在此之前，先清除当前输入缓冲中的字符，否则会造成
			// 下次 scanf() 也会失败，导致无限循环
			while (getchar() != '\n'){}
		}
	}
}

// 让用户输入一个 double 型的数字
double getDouble(const char * message)
{
	while (true)
	{
		if (message != NULL)
		{
			printf(message);
		}
		double v = 0.0;
		int success = scanf("%lf", &v);
		if (success != 0)
		{
			return v;
		}
		else
		{
			// 如果用户输入了垃圾数据，则将要求用户重新输入
			// 在此之前，先清除当前输入缓冲中的字符，否则会造成
			// 下次 scanf() 也会失败，导致无限循环
			while (getchar() != '\n'){}
		}
	}
}