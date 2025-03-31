#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char ch;
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 97 && ch <= 122)
			ch -= 32;
		else if (ch >= 65 && ch <= 106)
			ch += 32;
		putchar(ch);
	}
	return 0;
}