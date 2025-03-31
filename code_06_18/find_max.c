#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i;
	int n1,n2;
	scanf("%d", &n1);
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &n2);
		if (n2 > n1)
			n1 = n2;
	}
	printf("%d", n1);
	return 0;
}