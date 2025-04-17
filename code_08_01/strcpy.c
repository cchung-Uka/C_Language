#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

char* _strcpy(char* dest, const char* src)
{
	assert(src != NULL);//断言 等同于assert(src)
	assert(dest != NULL);

	char* ret = dest;
	while (*dest++ = *src++)
	{
		;
	}

	return ret;
}

//void _strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);
//	assert(dest != NULL);

//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;//'\0'
//}

int main()
{
	char str1[] = "i like bit.";
	char str2[20] = { 0 };
	
	printf("%s\n", _strcpy(str2, str1));

	return 0;
}