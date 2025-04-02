#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//给定两个数，求这两个数的最大公约数
 
//递归
int Gcd(int a, int b)
{
	if (b == 0)
		return a;
	else
		return Gcd(b, a % b);
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	//printf("%d\n", Gcd(a, b));
	int divi = 0;
	if (b > a)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}

	while (a % b)
	{
		divi = a % b;
		a = b;
		b = divi;
	}
	printf("%d\n", b);
	
	return 0;
}