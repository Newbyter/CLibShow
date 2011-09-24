#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "handler.h"
#include "util.h"

//////////////////////////////////////////////////////////////////////////
// �������Ͷ���
//////////////////////////////////////////////////////////////////////////

typedef void (*FunctionHandler)(void);

typedef struct _FunctionEntry
{
	char * description;
	FunctionHandler handler;
} FunctionEntry;

//////////////////////////////////////////////////////////////////////////
// ȫ�ֱ�������
//////////////////////////////////////////////////////////////////////////

FunctionEntry * pEntrys = NULL;
const int count = 24;

//////////////////////////////////////////////////////////////////////////
// ����ԭ������
//////////////////////////////////////////////////////////////////////////

// ��ʼ����������Ŀ���������������
void initialize();
// ���һ������Ŀ
void addEntry(char * description, FunctionHandler handler);
// ���õ� i ����Ŀ������
void setEntry(int i, const char * description, FunctionHandler handler);
// ��������Ŀ��ʾ����Ļ��
void showEntrys();
// ���û�����һ�ν��������û�ѡ��Ȼ��ִ�У�
bool interactWithUser();


//////////////////////////////////////////////////////////////////////////
// ����ʵ��
//////////////////////////////////////////////////////////////////////////

int main()
{
	// ���Ƚ��г�ʼ��
	// Ȼ��ͣ�����û����н���
	// ֱ���û�Ҫ���˳�
	initialize();
	while(interactWithUser()){}
	return 0;
}

void setEntry(int index, const char * description, FunctionHandler handler)
{
	assert(index > -1 && index < count);
	FunctionEntry * pEntry = &pEntrys[index];

	// ��� pEntry �� declaration Ŀǰ�������ݵģ��Ƚ�������ɾ��
	// Ȼ�����滻Ϊ������ ���漰�ڴ���ͷ����ٷ��䣩
	if (pEntry->description != NULL)
	{
		free(pEntry->description);
		pEntry->description = NULL;
	}

	// �����ݿ����� NULL
	// ������� NULL ��Ҫ������ʴ�С���ڴ�
	// �������ַ�������
	if (description != NULL)
	{
		pEntry->description = (char *)memoryAllocate(strlen(description) + 1);
		strcpy(pEntry->description, description);
	}

	// ����ָ�������ͷţ����������������ֵ������ֵ
	// ֱ������Ϊ�µ�ֵ����
	// �µ�ֵҲ������ NULL
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
	// Ϊ��Ŀ�б����洢�ռ�
	pEntrys = (FunctionEntry *)memoryAllocate(sizeof(FunctionEntry) * count);

	// ��Ӹ�����Ŀ��ע����Ŀ��ĿҪ���ڴ�ռ��Ǻϣ����಻��
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