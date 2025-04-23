#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

const char* _strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);

	if (*str2 == '\0')
		return str1;

	const char* p1 = str1;//记录str2 in str1开始匹配的位置

	while (*p1)
	{
		const char* s1 = p1;//遍历str1指向的字符串
		const char* s2 = str2;//遍历str2指向的字符串

		while (*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return p1;

		p1++;
	}

	return NULL;
}

int main()
{
	char str1[] = "aabbbccccd";
	char str2[] = "bbc";

	printf("%s\n", _strstr(str1, str2));

	return 0;
}