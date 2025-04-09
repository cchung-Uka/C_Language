#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

//实现一个函数is_prime，判断一个数是不是素数。
//利用上面实现的is_prime函数，打印100到200之间的素数。
int is_prime(int n)
{
	for (int j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
			return 0;
	}

	return 1;
}

int main()
{
	for (int i = 101; i <= 200; i += 2)
	{
		if (is_prime(i))
			printf("%d ", i);
	}
	
	return 0;
}