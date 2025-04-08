#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//在屏幕上输出 9*9 乘法口诀表
int main()
{
	for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d*%d=%d ", j, i, i * j);

            if (i == j)
                printf("\n");
        }
    }
    
	return 0;
}