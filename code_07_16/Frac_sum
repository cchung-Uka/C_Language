#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
int main()
{
	double sum = 0;
	int flag = 1;
	
	for (i = 1; i <= 100; i++)
	{
		sum += (1.0 / i) * flag;
		flag = -flag;
	}

	printf("%lf", sum);

	return 0;
}
