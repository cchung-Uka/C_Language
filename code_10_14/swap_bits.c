#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#define SWAP_BITS(num)	(num = ((num & 0x55555555) << 1) + ((num & 0xAAAAAAAA) >> 1)) 

int main()
{
	int a = 10;

	SWAP_BITS(a);
	printf("%d\n", a);

	SWAP_BITS(a);
	printf("%d\n", a);

	return 0;
}