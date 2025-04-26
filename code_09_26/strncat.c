#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//char* _strncat(char* dest, const char* src, size_t num) 
//{
//    assert(dest && src);
//
//    char* ret = dest;
//
//    //找到dest指向字符串末尾
//    while (*dest)
//    {
//        dest++;
//    }
//
//    //追加
//    while (*src && num > 0)
//    {
//        *dest++ = *src++;
//        num--;
//    }
//
//    *dest = '\0';
//
//    return ret;
//}

char* _strncat(char* dest, const char* src, size_t num)
{
    char* tmp = dest;

    while (*dest)
    {
        dest++;
    }

    int i;
    for (i = 0; src[i] && i < num; i++)
    {
        dest[i] = src[i];
    }

    dest[i] = 0;

    return tmp;
}

int main()
{
	char str1[20] = "hello";
	char str2[] = " bit!";

	printf("%s\n", _strncat(str1, str2, 5));

	return 0;
}