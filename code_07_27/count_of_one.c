#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//统计二进制中1的个数
int count_one(int n) 
{
	int count = 0;
	for (int i = 0; i < 32; i++)
		if ((n >> i) & 1)
			count++;

	return count;
}

//int count_one(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//			count++;
//
//		n /= 2;
//	}
//
//	return count;
//}

//int NumberOf1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
// 
//	return count;
//}

int main()
{
	int n = 0;
	
	scanf("%d", &n);
	printf("%d", NumberOf1(n));

	return 0;
}