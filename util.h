#pragma once

// ���û�����һ�� int �͵�����
int getInt(const char * message);

// ���û�����һ�� double �͵�����
double getDouble(const char * message);

// �ڴ���亯��
// ��ʵ�Ƕ� calloc �ķ�װ
// ֮����Ҫ�ٷ�װ������ calloc �Ļ����϶������ڴ����ʧ��ʱ�Ĵ������
// ����ڴ治�㣬���̽������򣬲��ټ���ִ��
// ���ǱȽϴֲڵĴ����ַ������ǿ��Ա�֤�����ٷ���������������
// �ڱ���Ŀ�в��漰�û����ݵı��棬��˴ֱ��Ľ�������
// ������������ݶ�ʧ������
void * memoryAllocate(size_t size);

void run(const char * exe, const char * params);