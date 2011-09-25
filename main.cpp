#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "handler.h"
#include "util.h"

//////////////////////////////////////////////////////////////////////////
// 数据类型定义
//////////////////////////////////////////////////////////////////////////

typedef void (*FunctionHandler)(void);

typedef struct _FunctionEntry
{
	char * description;
	FunctionHandler handler;
} FunctionEntry;

//////////////////////////////////////////////////////////////////////////
// 全局变量定义
//////////////////////////////////////////////////////////////////////////

FunctionEntry * pEntrys = NULL;
const int count = 22;

int g_argc = 0;
char ** g_argv = NULL;

//static char cmdBuffer[65535]; // callHandler() 函数用其作为字符串缓冲

//////////////////////////////////////////////////////////////////////////
// 函数原型声明
//////////////////////////////////////////////////////////////////////////

// 初始化，所有条目都会在这里面添加
void initialize();
// 添加一条新条目
void addEntry(char * description, FunctionHandler handler);
// 设置地 i 个条目的内容
void setEntry(int i, const char * description, FunctionHandler handler);
// 把所有条目显示在屏幕上
void showEntrys();
// 与用户进行一次交互（让用户选择，然后执行）
bool interactWithUser();
// 显示可以调用的函数列表，并让用户进行选择
void browseAndSelect();
// 调用第 i 个函数对应的 Handler
// 会打开一个新的控制台窗口
void callHandler(int i);


//////////////////////////////////////////////////////////////////////////
// 函数实现
//////////////////////////////////////////////////////////////////////////

int main(int argc, char ** argv)
{
	// 把参数信息保存到全局变量中去
	// 后边的 callHandler 要用到
	g_argc = argc;
	g_argv = argv;

	// 进行初始化，注册各个条目
	initialize();

	// 根据函数参数不同，表现出不同的行为
	// 一个参数时（相当于直接运行本程序），只是显示可调用的函数列表，让用户选择
	// 两个参数时，进入到具体的函数执行具体的操作
	// 注意这一点可能让人迷惑，其实这是因为要实现一种特殊的交互体验
	// 建议编译运行看看，会比较容易体会到
	if (argc == 1)
	{
		// 只有一个参数，说明是直接运行本程序
		// 这唯一的一个参数是操作系统传递进来的，
		// 代表了当前程序的完整文件名（含路径）
		// 我们的程序用不到这个信息
		// 在这种情况下，不断的显示可以调用的函数列表
		// 然后让用户选择就可以了
		system("color 1f");
		while(true){browseAndSelect();}
	}
	else if (argc == 2)
	{
		// 有两个参数，说明想要调用某个具体的函数功能
		// 当然前提是这第二个参数得是合法的——是数字，且在合适的范围内
		system("color 8f");
		int i = 0;
		int success = sscanf(argv[1], "%d", &i);
		if (success > 0)
		{
			if (i > -1 && i < count)
			{
				while(true)
				{
					system("cls");
					printf("%s\n\n", pEntrys[i].description);
					pEntrys[i].handler();
					system("pause");
				}
			}
			else
			{
				printf("index %d out of range [%d, %d]\n", i, 0, count - 1);
				system("pause");
			}
		}
	}

	return 0;
}

void setEntry(int index, const char * description, FunctionHandler handler)
{
	assert(index > -1 && index < count);
	FunctionEntry * pEntry = &pEntrys[index];

	// 如果 pEntry 的 declaration 目前是有内容的，先将该内容删除
	// 然后再替换为新内容 （涉及内存的释放与再分配）
	if (pEntry->description != NULL)
	{
		free(pEntry->description);
		pEntry->description = NULL;
	}

	// 新内容可以是 NULL
	// 如果不是 NULL 则要分配合适大小的内存
	// 并进行字符串拷贝
	if (description != NULL)
	{
		pEntry->description = (char *)memoryAllocate(strlen(description) + 1);
		strcpy(pEntry->description, description);
	}

	// 函数指针无需释放，因此无乱现在是有值还是无值
	// 直接设置为新的值即可
	// 新的值也可以是 NULL
	pEntry->handler = handler;
}

void addEntry(char * description, FunctionHandler handler)
{
	static int index = 0;
	assert(index < count);
	setEntry(index++, description, handler);
}

void initialize()
{
	// 为条目列表分配存储空间
	pEntrys = (FunctionEntry *)memoryAllocate(sizeof(FunctionEntry) * count);

	// 添加各个条目，注意条目数目要和内存空间吻合，不多不少
	addEntry("double acos(double x)", acos_handler);
	addEntry("double asin(double x)", asin_handler);
	addEntry("double atan(double x)", atan_handler);
	addEntry("double cos(double x)", cos_handler);
	addEntry("double sin(double x)", sin_handler);
	addEntry("double tan(double x)", tan_handler);
	addEntry("double cosh(double x)", cosh_handler);
	addEntry("double sinh(double x)", sinh_handler);
	addEntry("double tanh(double x)", tanh_handler);
	addEntry("double atan2(double x, double y)", atan2_handler);
	addEntry("double fabs(double x)", fabs_handler);
	addEntry("double ceil(double x)", ceil_handler);
	addEntry("double floor(double x)", floor_handler);
	addEntry("double exp(double x)", exp_handler);
	addEntry("double fmod(double x, double y)", fmod_handler);
	addEntry("double frexp(double x, int *exp)", frexp_handler);
	addEntry("double ldexp(double x, int exp)", ldexp_handler);
	addEntry("double log(double x)", log_handler);
	addEntry("double log10(double x)", log10_handler);
	addEntry("double modf(double x, double *i)", modf_handler);
	addEntry("double pow(double x, double y)", pow_handler);
	addEntry("double sqrt(double x)", sqrt_handler);
}

void showEntrys()
{
	assert(pEntrys);
	for (int i = 0; i < count; i++)
	{
		printf(" %-2d: %s\n", i, pEntrys[i].description);
	}
}

bool interactWithUser()
{
	printf("function list:\n");
	showEntrys();
	int i = getInt("select (-1 for quit): ");
	if (i == -1)
	{
		return false;
	}
	else if (i > -1 && i < count)
	{
		pEntrys[i].handler();
		system("pause");
		system("cls");
	}
	else
	{
		printf("index out of range [%d, %d]\n", 0, count - 1);
		system("pause");
		system("cls");
	}
	return true;
}

void browseAndSelect()
{
	system("cls");
	showEntrys();
	int i = getInt("\n select > ");
	if (i > -1 && i < count)
	{
		callHandler(i);
	}
	else
	{
		printf("index out of range [%d, %d]\n", 0, count - 1);
		system("pause");
	}
}

void callHandler( int i )
{
	// 重新启动本 exe 程序的另一个副本
	// 并把 i 作为参数传入即可
	assert(g_argc > 0);
	assert(g_argv[0] != NULL);
	//sprintf(cmdBuffer, "%s %d", g_argv[0], i);
	//system(cmdBuffer);
	char buffer[50];
	sprintf(buffer, "%d", i);
	run(g_argv[0], buffer);
}
