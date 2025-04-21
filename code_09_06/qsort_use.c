#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void qsort(void* base, //待排序数组的第一个元素的地址
//			 size_t num, //待排序数组的元素个数
//			 size_t size,//待排序数组中一个元素的大小
//			 int (* cmp)(const void* e1, const void* e2)//函数指针-cmp指向了一个函数，这个函数是用来比较两个元素的
//														  e1和e2中存放的是需要比较的两个元素的地址
//          );

//比较整型
int int_cmp(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

//比较浮点数
int float_cmp(const void* e1, const void* e2)
{
	float f_e1 = *(float*)e1;
	float f_e2 = *(float*)e2;

	if (f_e1 < f_e2)
		return -1;
	else if (f_e1 > f_e2)
		return 1;
	else
		return 0;
}

//比较双精度浮点数
int double_cmp(const void* e1, const void* e2)
{
	double d_e1 = *(double*)e1;
	double d_e2 = *(double*)e2;

	if (d_e1 < d_e2)
		return -1;
	else if (d_e1 > d_e2)
		return 1;
	else
		return 0;
}

//比较单个字符
int char_cmp(const void* e1, const void* e2)
{
	return *(char*)e1 - *(char*)e2;
}

//比较字符串
int str_cmp(const void* e1, const void* e2)
{
	return strcmp(*(const char**)e1, *(const char**)e2);
}

int main() 
{
    // 整数排序示例
    int int_arr[] = { 5, 2, 9, 1, 6 };
    int int_sz = sizeof(int_arr) / sizeof(int_arr[0]);
    qsort(int_arr, int_sz, sizeof(int), int_cmp);
    printf("Sorted integer array: ");
    for (int i = 0; i < int_sz; ++i) 
    {
        printf("%d ", int_arr[i]);
    }
    printf("\n");

    // 浮点数排序示例
    float f_arr[] = { 5.2, 2.6, 9.1, 1.7, 6.3 };
    int f_sz = sizeof(f_arr) / sizeof(f_arr[0]);
    qsort(f_arr, f_sz, sizeof(float), float_cmp);
    printf("Sorted float array: ");
    for (int i = 0; i < f_sz; ++i) 
    {
        printf("%.1f ", f_arr[i]);
    }
    printf("\n");

    // 双精度浮点数排序示例
    double d_arr[] = { 5.21, 2.62, 9.13, 1.74, 6.35 };
    int d_sz = sizeof(d_arr) / sizeof(d_arr[0]);
    qsort(d_arr, d_sz, sizeof(double), double_cmp);
    printf("Sorted double array: ");
    for (int i = 0; i < d_sz; ++i) 
    {
        printf("%.2f ", d_arr[i]);
    }
    printf("\n");

    // 单个字符排序示例
    char ch_arr[] = { 'c', 'a', 'd', 'b', 'e' };
    int ch_sz = sizeof(ch_arr) / sizeof(ch_arr[0]);
    qsort(ch_arr, ch_sz, sizeof(char), char_cmp);
    printf("Sorted character array: ");
    for (int i = 0; i < ch_sz; ++i) 
    {
        printf("%c ", ch_arr[i]);
    }
    printf("\n");

    // 字符串排序示例
    const char* str_arr[] = { "banana", "apple", "orange", "grape", "pineapple" };
    int str_sz = sizeof(str_arr) / sizeof(str_arr[0]);
    qsort(str_arr, str_sz, sizeof(char*), str_cmp);
    printf("Sorted string array: ");
    for (int i = 0; i < str_sz; ++i)
    {
        printf("%s ", str_arr[i]);
    }
    printf("\n");

    return 0;
}