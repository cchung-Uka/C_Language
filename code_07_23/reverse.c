#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

size_t _strlen(char* str)
{
	if (*str == '\0')
		return 0;
	else
		return 1 + _strlen(str + 1);
}

//void reverse_str(char* arr)
//{
//	char* left = arr;
//	char* right = arr + strlen(arr) - 1;
//
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//		left++;
//		right--;
//	}
//}

//void reverse_str(char* str)
//{
//	size_t len = strlen(str);

//	char tmp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';

//	if (strlen(str + 1) >= 2)
//		reverse_str(str + 1);

//	*(str + len - 1) = tmp;
//}

void reverse_str(char str[])
{
	size_t len = _strlen(str);

	char tmp = str[0];
	str[0] = str[len - 1];
	str[len - 1] = '\0';

	if (_strlen(str + 1) >= 2)
		reverse_str(str + 1);

	str[len - 1] = tmp;
}

int main()
{
	char arr[] = "abcdef";

	reverse_str(arr);
	printf("%s\n", arr);
	
	return 0;
}