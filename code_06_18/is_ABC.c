#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	char ch;
	while ((ch = getchar()) != EOF)
	{
		if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
			printf("%c is an alphabet.\n", ch);
		else
			printf("%c is not an alphabet.\n", ch);

		getchar();
	}
	
	return 0;
}