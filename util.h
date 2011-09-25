#pragma once

// 让用户输入一个 int 型的数字
int getInt(const char * message);

// 让用户输入一个 double 型的数字
double getDouble(const char * message);

// 内存分配函数
// 其实是对 calloc 的封装
// 之所以要再封装，是在 calloc 的基础上定义了内存分配失败时的处理策略
// 如果内存不足，立刻结束程序，不再继续执行
// 这是比较粗糙的处理手法，但是可以保证不会再发生其他致命错误
// 在本项目中不涉及用户数据的保存，因此粗暴的结束程序
// 并不会带来数据丢失等问题
void * memoryAllocate(size_t size);

void run(const char * exe, const char * params);