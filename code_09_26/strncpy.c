#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//char* _strncpy(char* dest, const char* src, size_t num)
//{
//    assert(dest && src);
//
//    char* ret = dest;
//
//    while (*src && num > 0)
//    {
//        *dest++ = *src++;
//        num--;
//    }
//
//    while (num)
//    {
//        *dest++ = '\0';
//        num--;
//    }
//
//    return ret;
//}

char* _strncpy(char* dest, const char* src, size_t num)
{
    int i;
    for (i = 0; src[i] && i < num; i++)
    {
        dest[i] = src[i];
    }

    if (i < num)
    {
        dest[i] = 0;
    }
    
    return dest;
}

int main()
{
    char str1[] = "hello bit!";
    char str2[20] = "xxxxxxxxxxxxxxx";

    printf("%s\n", _strncpy(str2, str1, 14));

    return 0;
}