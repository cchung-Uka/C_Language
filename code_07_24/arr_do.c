#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//1.实现函数init() 初始化数组为全0
void init(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
		arr[i] = 0;
}

//2.实现print() 打印数组的每个元素
void print(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
		printf("%d ", arr[i]);
}

//3.实现reverse()  函数完成数组元素的逆置。
void reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

//使用函数实现数组操作
int main()
{
	int arr[] = { 1,2,3,4,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	reverse(arr, sz);
	print(arr, sz);
	printf("\n");
	init(arr, sz);
	print(arr, sz);

	return 0;
}