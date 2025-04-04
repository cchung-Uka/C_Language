#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//写一个代码打印1-100之间所有3的倍数的数字
int main()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%d ", i);
	}

	return 0;
}
