#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void print_arr(int* arr, size_t sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", *(arr + i));
	}
}

int main()
{
	int arr[5] = { 0,1,2,3,4, };
	size_t sz = sizeof(arr) / sizeof(int);
	
	print_arr(arr, sz);
	
	return 0;
}