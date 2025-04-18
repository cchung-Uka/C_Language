#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#define ROW 9
#define COL 9

int main()
{
	int arr[ROW][COL] = { 0 };

	//杨辉三角
	for (int i = 0; i < ROW; i++)
	{
		for (int k = 0; k < COL - i; k++)
		{
			printf("  ");
		}

		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || i == j)//每行首尾
				arr[i][j] = 1;

			if (i > 1 && j > 0)
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];

			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}