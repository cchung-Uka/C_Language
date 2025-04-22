#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e2 - *(int*)e1;// 调整排序方式，升序/降序
}

void swap(char* buf1, char* buf2, size_t sz)
{
	for (int i = 0; i < sz; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

// 泛型编程
void bubble_sort(void* base, size_t num, size_t sz, int (*cmp)(const void* e1, const void* e2))
{
	// 趟数
	for (int i = 0; i < num - 1; i++)
	{
		int flag = 0;

		// 一次冒泡排序
		for (int j = 0; j < num - 1 - i; j++)
		{
			if (cmp((char*)base + j * sz, (char*)base + (j + 1) * sz) > 0)
			{
				swap((char*)base + j * sz, (char*)base + (j + 1) * sz, sz);

				flag = 1;// 已进行交换
			}
				
		}

		if (flag == 0)// 如果一轮遍历中没有发生交换，说明数组已经有序，提前结束排序
			break;
	}
}

void print_arr(int* arr, size_t sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr, sz, sizeof(int), cmp_int);
	print_arr(arr, sz);

	return 0;
}