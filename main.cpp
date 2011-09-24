#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "util.h"
#include "handler.h"

typedef void (*FunctionHandler)(void);

typedef struct _FunctionEntry
{
	char * declaration;
	FunctionHandler handler;
} FunctionEntry;

FunctionEntry * pEntrys = NULL;
const int count = 1;

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


void setEntry(FunctionEntry * pEntry, char * declaration, FunctionHandler handler)
{
	// 三个参数都必须给出，不能为空
	assert(pEntry);
	assert(declaration);
	assert(handler);

	// 如果 pEntry 的 declaration 目前是有内容的，先将该内容删除
	// 然后再替换为新内容 （涉及内存的释放与再分配）
	if (pEntry->declaration != NULL)
	{
		free(pEntry->declaration);
		pEntry->declaration = NULL;
	}

	pEntry->declaration = (char *)memoryAllocate(strlen(declaration) + 1);
	strcpy(pEntry->declaration, declaration);

	// 函数指针无需释放，因此无乱现在是有值还是无值
	// 直接设置为新的值即可
	pEntry->handler = handler;
}

void createEntry(int index, char * declaration, FunctionHandler handler)
{
	assert(index < count);
	assert(declaration);
	assert(handler);
	setEntry(&pEntrys[index], declaration, handler);
}

void initEntrys()
{
	pEntrys = (FunctionEntry *)memoryAllocate(sizeof(FunctionEntry) * count);
	createEntry(0, "double acos(double x)", acos_handler);
}

void showEntrys()
{
	assert(pEntrys);
	for (int i = 0; i < count; i++)
	{
		printf("%d %s\n", i, pEntrys[i].declaration);
	}
}

void begin()
{
	do 
	{
		puts("function list:");
		showEntrys();
		int i = getInt("select (-1 for quit): ");
		if (i == -1)
		{
			break;
		}
		else if (i > -1 && i < count)
		{
			pEntrys[i].handler();
		}
		else
		{
			printf("index out of range [%d, %d]\n", 0, count - 1);
		}
	} while (true);
}

int main()
{
	initEntrys();
	begin();
	return 0;
}