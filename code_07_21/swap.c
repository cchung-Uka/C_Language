#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//实现一个函数来交换两个整数的内容。
void swap(int* p1, int* p2)
{
	int tmp = 0;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

int main()
{
	int n1 = 0;
	int n2 = 0;

	scanf("%d %d", &n1, &n2);
	printf("交换前：%d %d\n", n1, n2);

	swap(&n1, &n2);
	printf("交换后：%d %d\n", n1, n2);
	
	return 0;
}