#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

int _strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);

	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;

		str1++;
		str2++;
	}
	/*if (*str1 > *str2)
		return 1;
	else
		return -1;*/

	return *str1 - *str2;
}

int main()
{
	char str1[] = "abcd";
	char str2[] = "abef";
	
	if (_strcmp(str1, str2) < 0)
		printf("<\n");
	else
		printf(">=\n");

	return 0;
}