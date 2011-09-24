#include <stdio.h>
#include <stdlib.h>

// 清空输入缓冲区
static void clearInputBuffer()
{
	// 简单的清空输入缓冲区的办法
	// 可移植性不佳，但是目前没有这方面的需求
	// 未来需要的时候再做改进
	fflush(stdin);
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
		int success = scanf("%d", &v);
		if (success != 0)
		{
			clearInputBuffer();
			return v;
		}
		else
		{
			// 如果用户输入了垃圾数据，则将要求用户重新输入
			// 在此之前，先清除当前输入缓冲中的字符，否则会造成
			// 下次 scanf() 也会失败，导致无限循环
			clearInputBuffer();
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
			clearInputBuffer();
			return v;
		}
		else
		{
			// 如果用户输入了垃圾数据，则将要求用户重新输入
			// 在此之前，先清除当前输入缓冲中的字符，否则会造成
			// 下次 scanf() 也会失败，导致无限循环
			clearInputBuffer();
		}
	}
}

// 内存分配函数
// 其实是对 calloc 的封装
// 之所以要再封装，是在 calloc 的基础上定义了内存分配失败时的处理策略
// 如果内存不足，立刻结束程序，不再继续执行
// 这是比较粗糙的处理手法，但是可以保证不会再发生其他致命错误
// 在本项目中不涉及用户数据的保存，因此粗暴的结束程序
// 并不会带来数据丢失等问题
void * memoryAllocate(size_t size)
{
	void * p = calloc(1, size);
	if (p == NULL)
	{
		puts("allocate memory failed!\n");
		exit(0);
	}
	else
	{
		return p;
	}
}