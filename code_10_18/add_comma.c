#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	char str[14] = { 0 };
	int N = 0;
	scanf("%d", &N);

	int i = 0;
	int k = 0;

	while (N)
	{
		if (i > 0 && k % 3 == 0)
			str[i++] = ',';

		str[i++] = N % 10 + '0';
		N /= 10;

		k++;
	}

	for (i--; i >= 0; i--)
	{
		printf("%c", str[i]);
	}

	return 0;
}