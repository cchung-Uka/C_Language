#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//递归和非递归分别实现strlen

//递归
size_t _strlen(char* str)
{
	if (*str == '\0')
		return 0;
	else
		return 1 + _strlen(str + 1);
}

//非递归
//size_t _strlen(char* str)
//{
//	size_t count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

int main()
{
	char arr[] = "I like bit!!";

	size_t len = _strlen(arr);
	printf("%zd\n", len);
	
	return 0;
}