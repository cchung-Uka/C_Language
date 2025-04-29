#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int is_exist(char str[], char ch)
//{
//	int i = 0;
//	while (str[i])
//	{
//		if (ch == str[i])
//			return 1;
//		i++;
//	}
//	return 0;
//}

int main()
{
	char str1[101] = { 0 };
	char str2[101] = { 0 };

	scanf("%[^\n]s", str1);
	getchar();  // 清空缓冲区
	scanf("%[^\n]s", str2);

	int i = 0;
	while (str1[i])
	{
		/*if (is_exist(str2, str1[i]) == 0)
			printf("%c", str1[i]);*/

		if (strchr(str2, str1[i]) == NULL)
			printf("%c", str1[i]);
		
		i++;
	}

	/*char* st = strtok(str1, str2);
	while (st != NULL)
	{
		printf("%s", st);
		st = strtok(NULL, str2);
	}*/

	return 0;
}