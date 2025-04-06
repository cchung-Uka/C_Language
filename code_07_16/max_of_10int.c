#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//求10个整数中最大值
int main()
{
	int arr[10] = { 0 };
	
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	int max = arr[0];
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	printf("%d", max);
	
	return 0;
}