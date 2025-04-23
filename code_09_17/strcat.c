#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

char* _strcat(char* dest, const char* src)
{
	assert(dest && src);

	char* ret = dest;

	//1.找到目标字符串的'\0'
	while (*dest != '\0')
	{
		dest++;
	}

	//2.追加
	while (*dest++ = *src++)
	{
		;
	}

	return ret;
}

int main()
{
	char str1[20] = "abc";
	char str2[] = "def";
	
	printf("%s\n", _strcat(str1, str2));

	return 0;
}