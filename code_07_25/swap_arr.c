#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 6,7,8,9,0 };

	int sz = sizeof(arr1) / sizeof(arr1[0]);

	for (int i = 0; i < sz; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}

	for (int i = 0; i < sz; i++)
		printf("%d ", arr1[i]);

	printf("\n");

	for (int i = 0; i < sz; i++)
		printf("%d ", arr2[i]);

	return 0;
}