#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "handler.h"

typedef void (*FunctionHandler)(void);

typedef struct _FunctionEntry
{
	char * declaration;
	FunctionHandler handler;
} FunctionEntry;

FunctionEntry * pEntrys = NULL;
const int count = 24;

// �ڴ���亯��
// ��ʵ�Ƕ� calloc �ķ�װ
// ֮����Ҫ�ٷ�װ������ calloc �Ļ����϶������ڴ����ʧ��ʱ�Ĵ������
// ����ڴ治�㣬���̽������򣬲��ټ���ִ��
// ���ǱȽϴֲڵĴ����ַ������ǿ��Ա�֤�����ٷ���������������
// �ڱ���Ŀ�в��漰�û����ݵı��棬��˴ֱ��Ľ�������
// ������������ݶ�ʧ������
void * memoryAllocate(size_t size)
{
	void * p = calloc(1, size);
	if (p == NULL)
	{
		// ����ڴ治�㣬���̽������򣬲��ټ���ִ��
		// �ȽϴֲڵĴ����ַ������ǿ��Ա�֤�����ٷ���������������
		// �ڱ���Ŀ�в��漰�û����ݵı��棬��˴ֱ��Ľ�������
		// ������������ݶ�ʧ������
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
	// �����������������������Ϊ��
	assert(pEntry);
	assert(declaration);
	assert(handler);

	// ��� pEntry �� declaration Ŀǰ�������ݵģ��Ƚ�������ɾ��
	// Ȼ�����滻Ϊ������ ���漰�ڴ���ͷ����ٷ��䣩
	if (pEntry->declaration != NULL)
	{
		free(pEntry->declaration);
		pEntry->declaration = NULL;
	}

	pEntry->declaration = (char *)memoryAllocate(strlen(declaration) + 1);
	strcpy(pEntry->declaration, declaration);

	// ����ָ�������ͷţ����������������ֵ������ֵ
	// ֱ������Ϊ�µ�ֵ����
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
	createEntry(1, "double asin(double x)", asin_handler);
	createEntry(2, "double atan(double x)", atan_handler);
	createEntry(3, "double cos(double x)", cos_handler);
	createEntry(4, "double sin(double x)", sin_handler);
	createEntry(5, "double tan(double x)", tan_handler);
	createEntry(6, "double cosh(double x)", cosh_handler);
	createEntry(7, "double sinh(double x)", sinh_handler);
	createEntry(8, "double tanh(double x)", tanh_handler);
	createEntry(9, "double atan2(double x, double y)", atan2_handler);
	createEntry(10, "double fabs(double x)", fabs_handler);
	createEntry(11, "double abs(int x)", abs_handler);
	createEntry(12, "double ceil(double x)", ceil_handler);
	createEntry(13, "double floor(double x)", floor_handler);
	createEntry(14, "double exp(double x)", exp_handler);
	createEntry(15, "double fmod(double x, double y)", fmod_handler);
	createEntry(16, "double frexp(double x, int *exp)", frexp_handler);
	createEntry(17, "double hpyot(double x, double y)", hypot_handler);
	createEntry(18, "double ldexp(double x, int exp)", ldexp_handler);
	createEntry(19, "double log(double x)", log_handler);
	createEntry(20, "double log10(double x)", log10_handler);
	createEntry(21, "double modf(double x, double *i)", modf_handler);
	createEntry(22, "double pow(double x, double y)", pow_handler);
	createEntry(23, "double sqrt(double x)", sqrt_handler);
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
		printf("select (-1 for quit): ");
		int i = -1;
		int ret = scanf("%d", &i);
		if (ret != 0)
		{
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
		}
		else
		{
			printf("please input number\n");
		}
		system("pause");
		system("cls");
	} while (true);
}

int main()
{
	initEntrys();
	begin();
	return 0;
}