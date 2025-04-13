#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？

//输入例子 :1999 2299
//输出例子 : 7
int main()
{
	int a = 0;
	int b = 0;

	scanf("%d %d", &a, &b);

	int count = 0;
	for (int i = 0; i < 32; i++)
	{
		if (((a >> i) & 1) != ((b >> i) & 1))
			count++;
	}
	printf("%d", count);
	
	return 0;
}