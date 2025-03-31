#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	long long n = 0;
	long long sum = 0;
	long long i = 1;

	scanf("%lld", &n);

	while (i <= n)
	{
		sum += i;
		i++;
	}
	printf("%lld", sum);
	
	return 0;
}