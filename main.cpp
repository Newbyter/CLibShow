#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "util.h"
#include "handler.h"

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
const int count = 24;

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


//////////////////////////////////////////////////////////////////////////
// 函数实现
//////////////////////////////////////////////////////////////////////////

int main()
{
	// 首先进行初始化
	// 然后不停的与用户进行交互
	// 直到用户要求退出
	initialize();
	while(interactWithUser()){}
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
	addEntry("double abs(int x)", abs_handler);
	addEntry("double ceil(double x)", ceil_handler);
	addEntry("double floor(double x)", floor_handler);
	addEntry("double exp(double x)", exp_handler);
	addEntry("double fmod(double x, double y)", fmod_handler);
	addEntry("double frexp(double x, int *exp)", frexp_handler);
	addEntry("double hpyot(double x, double y)", hypot_handler);
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
		printf("%d %s\n", i, pEntrys[i].description);
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