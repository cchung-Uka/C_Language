#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//打印菱形
int main()
{
	for (int i = 1; i <= 7; i++)
	{
		for (int j = 1; j <= 7 - i; j++)
			printf(" ");

		for (int k = 1; k <= 2 * i - 1; k++)
			printf("*");

		printf("\n");
	}

	for (int i = 1; i <= 6; i++)
	{
		for (int j = 1; j <= i; j++)
			printf(" ");

		for (int k = 1; k <= 2 * (7 - i) - 1; k++)
			printf("*");

		printf("\n");
	}

	////打印上半部分
	//for (i = 0; i < line; i++)
	//{
	//	//打印一行
	//	//打印空格
	//	int j = 0;
	//	for (j = 0; j < line - 1 - i; j++)
	//	{
	//		printf(" ");
	//	}
	//	//打印*
	//	for (j = 0; j < 2 * i + 1; j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	////打印下半部分
	//for (i = 0; i < line - 1; i++)
	//{
	//	//打印一行
	//	int j = 0;
	//	for (j = 0; j <= i; j++)
	//	{
	//		printf(" ");
	//	}
	//	for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	
	return 0;
}