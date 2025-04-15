#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//字符串逆序
void reverse_str(char* str)
{
	size_t len = strlen(str);
	char tmp = *str;
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (strlen(str + 1) >= 2)
		reverse_str(str + 1);
	*(str + len - 1) = tmp;
}

int main()
{
	char str[10000] = { 0 };
	scanf("%[^\n]", str);

	reverse_str(str);
	printf("%s", str);
	
	return 0;
}