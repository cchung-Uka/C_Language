#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//递归方式实现打印一个整数的每一位
void Print(int n)
{
	if (n > 9)
		Print(n / 10);

	printf("%d ", n % 10);
}

int main()
{
	int n = 0;

	scanf("%d", &n);
	Print(n);

	return 0;
}