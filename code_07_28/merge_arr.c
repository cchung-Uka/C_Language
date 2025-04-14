#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#define N 1000
#define M 1000

//有序序列合并
int main()
{
	int n = 0;
	int m = 0;

	int arr1[N] = { 0 };
	int arr2[M] = { 0 };

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
		scanf("%d", &arr1[i]);

	for (int i = 0; i < m; i++)
		scanf("%d", &arr2[i]);
	
	int i = 0, j = 0;
	while (i < n && j < m)
	{
		if (arr1[i] <= arr2[j])
		{
			printf("%d ", arr1[i]);
			i++;
		}
		else
		{
			printf("%d ", arr2[j]);
			j++;
		}
	}
	
	if (i == n)
		for (; j < m; j++)
			printf("%d ", arr2[j]);
	else
		for (; i < n; i++)
			printf("%d ", arr1[i]);

	return 0;
}