#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

// 递归
size_t _strlen(const char* str)
{
    assert(str);

	if (*str == '\0')
		return 0;
	else
		return 1 + _strlen(str + 1);
}

// 计数器
size_t _strlen(const char* str)
{
	assert(str);

	size_t count = 0;
	while (*str++) count++;

	return count;
}

// 指针-指针
size_t _strlen(const char* str)
{
    const char* p = str;
    while (*p) ++p;
    
    return p - str;
}

int main()
{
	char str[] = "hello bit";
	size_t len = _strlen(str);

	printf("%zd\n", len);
	
	return 0;
}