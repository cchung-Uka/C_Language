#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(int);

	int k = 0;
	scanf("%d", &k);

	int left = 0;
	int right = sz - 1;
	int flag = 0;

	while (left <= right)
	{
		int mid = (left + right) / 2;

		if (arr[mid] < k)
			left = mid + 1;
		else if (arr[mid] > k)
			right = mid - 1;
		else
		{
			printf("找到了，下标是:%d\n", mid);
			flag = 1;
			break;
		}
	}

	if (flag == 0)
		printf("找不到\n");
		
	return 0;
}