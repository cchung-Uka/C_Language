#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

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
	//求最小公倍数
	int Lcm = (a * b) / Gcd(a, b);
	printf("%d\n", Lcm);
	
	return 0;
}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);

//	int i = 1;
//	while (a * i % b != 0)
//		i++;

//	printf("%d\n", a * i);
//	return 0;
//}