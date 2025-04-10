#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）

//递归
int Fac(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac(n - 1);
}

//非递归
int Fac(int n)
{
	int ret = 1;

	for (int i = 1; i <= n; i++)
		ret = ret * i;

	return ret;
}

int main()
{
	int n = 0;

	scanf("%d", &n);
	printf("%d",Fac(n));
	
	return 0;
}