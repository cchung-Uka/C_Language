#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。（旋转字符串）
//e.g.：
	/*给定s1 = AABCD和s2 = BCDAA，返回1
	给定s1 = abcd和s2 = ACBD，返回0*/

	//AABCD左旋一个字符得到ABCDA
	//AABCD左旋两个字符得到BCDAA
	//AABCD右旋一个字符得到DAABC

//int is_Rotation(char* s1, char* s2)
//{
//	int len = strlen(s1);
//
//	for (int i = 0; i < len; i++)
//	{
//		char tmp = *s1;
//
//		for (int j = 0; j < len - 1; j++)
//		{
//			*(s1 + j) = *(s1 + j + 1);
//		}
//		*(s1 + len - 1) = tmp;
//
//		if (strcmp(s1, s2) == 0)
//		{
//			return 1;
//		}
//	}
//
//	return 0;
//}

int is_Rotation(char* s1, char* s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	//如果两个字符串长度不相等，则肯定不是旋转字符串
	if (len1 != len2)
		return 0;

	//将s1连接到自身
	char tmp[256] = " ";
	strcpy(tmp, s1);
	strcat(tmp, s1);

	//判断s2是否为tmp的子字符串
	/*if (strstr(tmp, s2) != NULL)
		return 1;
	else 
		return 0;*/

	return (strstr(tmp, s2) != NULL);
}

int main()
{ 
	char s1[] = "AABCD";
	char s2[] = "BCDAA";

	if (is_Rotation(s1, s2))
		printf("%s是%s的旋转字符串\n", s2, s1);
	else
		printf("%s不是%s的旋转字符串\n", s2, s1);

	char s3[] = "abcd";
	char s4[] = "ABCD";

	if (is_Rotation(s3, s4))
		printf("%s是%s的旋转字符串\n", s4, s3);
	else
		printf("%s不是%s的旋转字符串\n", s4, s3);
		
	return 0;
}