#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

void reverse(char* left, char* right)
{
	assert(left && right);

	while (left < right)
	{
		char tmp = *left;
		*left++ = *right;
		*right-- = tmp;
		//left++;
		//right--;
	}
}

//将一句话的单词进行倒置，标点不倒置。比如 I like beijing. 经过函数后变为：beijing. like I
int main()
{
	char str[101] = { 0 };
	gets(str);
	
	//逆序整句
	reverse(str, str + strlen(str) - 1);

	char* left = str;
	while (*left)
	{
		char* right = left;
		while (*right != ' ' && *right)
			right++;

		//逆序每个单词
		reverse(left, right - 1);

		if (*right)
			left = right + 1;
		else
			left = right;
	}
	printf("%s", str);
	
	return 0;
}