#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
int main()
{
	int n = 0;
	scanf("%d", &n);
	
	printf("二进制数：");

	int i = 31;
	while (i >= 0)
	{
		printf("%d", (n >> i) & 1);
		i--;
	}
	printf("\n");

	printf("奇数位序列：");
	for (i = 30; i >= 0; i -= 2)
		printf("%d", (n >> i) & 1);

	printf("\n");

	printf("偶数位序列：");
	for (i = 31; i >= 1; i -= 2)
		printf("%d", (n >> i) & 1);
		
	printf("\n");

	return 0;
}