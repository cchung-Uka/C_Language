#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
int main()
{
	int a = 0;
	int n = 0;
	scanf("%d %d", &a, &n);
	
	/*for (int i = 0; i < 4; i++)
	{
		int tmp = 0;
		tmp = tmp * 10 + a;
		sum += tmp;
	}*/

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		int tmp = tmp * 10 + a;
		sum += tmp;
	}

	printf("%d\n", sum);
	
	return 0;
}