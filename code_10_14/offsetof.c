#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 计算结构体某变量相对于首地址的偏移
#define OFFSETOF(type, member)	(size_t)&(((type*)0)->member)

struct S
{
	int a;
	char b;
	double c;
};

int main()
{
	printf("%zd\n", OFFSETOF(struct S, a));
	printf("%zd\n", OFFSETOF(struct S, b));
	printf("%zd\n", OFFSETOF(struct S, c));

	return 0;
}