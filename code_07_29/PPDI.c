#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

//求出0～100000之间的所有“水仙花数”并输出。
int count_bit(int n)
{
	int count = 1;
	while (n / 10)
	{
		n /= 10;
		count++;
	}

	return count;
}

int Pow_Sum(int n, int count)
{
	int sum = 0;
	while (n)
	{
		sum += pow(n % 10, count);
		n /= 10;
	}

	return sum;
}

int main()
{
	for (int i = 0; i <= 100000; i++)
	{
		int count = Count(i);
		if (i == Pow_Sum(i, count))
			printf("%d ", i);
	}

	return 0;
}