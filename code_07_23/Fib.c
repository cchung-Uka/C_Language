#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//递归和非递归分别实现求第n个斐波那契数

//递归
int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}

//非递归
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;

// while (n >= 3)
// {
// 	c = a + b;
// 	a = b;
// 	b = c;
// 	n--;
// }

//	return c;
//}

int main()
{
	int n = 0;

	scanf("%d", &n);
	printf("%d", Fib(n));

	return 0;
}