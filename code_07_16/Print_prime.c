#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

//写一个代码：打印100~200之间的素数
int main()
{
	for (int i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (i == j)
			printf("%d ", i);
	}

	for (int i = 101; i <= 200; i += 2)
	{
		//判断i是否为素数
		//2->i-1
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		//...
		if (j > sqrt(i))
		{
			printf("%d ", i);
		}
	}
	
	return 0;
}