#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int max = 0;
	int n = 0;

	scanf("%d", &max);

	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &n);

		if (n > max)
			max = n;
	}
	printf("%d", max);

	return 0;
}