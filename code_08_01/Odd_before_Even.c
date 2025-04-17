#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

//调整数组使奇数全部都位于偶数前面。
void order(int* arr, int sz)
{
	assert(arr);

	if (sz <= 0)
		return;

	int* left = arr;
	int* right = arr + sz - 1;

	while (left < right)
	{
		while (left < right && *left % 2 != 0)
			left++;//从前往后找到第一个偶数

		while (left < right && *right % 2 == 0)
			right--;//从后往前找到第一个奇数

		if (left < right)
		{
			//交换奇数和偶数位置
			int tmp = *left;
			*left = *right;
			*right = tmp;
			left++;
			right--;
		}
	}
}

int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
		scanf("%d", &arr[i]);

	order(arr, sz);

	for (i = 0; i < sz; i++)
		printf("%d ", arr[i]);
	return 0;
}