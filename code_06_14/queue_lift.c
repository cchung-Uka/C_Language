#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int n = 0;
	int m = 0;

	scanf("%d", &n);
	if (n >= 12)
	{
		m = n / 12 * 4 + 2;
	}
	else
	{
		m = 2;
	}
	printf("%d", m);

	return 0;
}