#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

size_t _strlen(const char* str)
{
	assert(str);

	size_t count = 0;
	while (*str++)
		count++;

	return count;
}

int main()
{
	char str[] = "hello bit";
	size_t len = _strlen(str);

	printf("%zd\n", len);
	
	return 0;
}