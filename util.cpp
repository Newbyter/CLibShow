#include <stdio.h>
#include <stdlib.h>

// ������뻺����
static void clearInputBuffer()
{
	// �򵥵�������뻺�����İ취
	// ����ֲ�Բ��ѣ�����Ŀǰû���ⷽ�������
	// δ����Ҫ��ʱ�������Ľ�
	fflush(stdin);
}

// ���û�����һ�� int �͵�����
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
			// ����û��������������ݣ���Ҫ���û���������
			// �ڴ�֮ǰ���������ǰ���뻺���е��ַ�����������
			// �´� scanf() Ҳ��ʧ�ܣ���������ѭ��
			clearInputBuffer();
		}
	}
}

// ���û�����һ�� double �͵�����
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
			// ����û��������������ݣ���Ҫ���û���������
			// �ڴ�֮ǰ���������ǰ���뻺���е��ַ�����������
			// �´� scanf() Ҳ��ʧ�ܣ���������ѭ��
			clearInputBuffer();
		}
	}
}

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
		puts("allocate memory failed!\n");
		exit(0);
	}
	else
	{
		return p;
	}
}