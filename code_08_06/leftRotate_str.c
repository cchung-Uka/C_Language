#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

//void leftRotate_str(char* str, int k)
//{
//	int len = strlen(str);
//	k %= len;//长度为5的情况下，旋转6、11、16...次相当于1次，7、12、17...次相当于2次，以此类推。

//	for (int i = 0; i < k; i++)
//	{
//		char tmp = *str;
//		for (int j = 0; j < len - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		*(str + len - 1) = tmp;
//	}
//}

//实现一个函数，可以左旋字符串中的k个字符。（字符串左旋）
//e.g.：
	/*ABCD左旋一个字符得到BCDA
	ABCD左旋两个字符得到CDAB*/

//以左旋k个字符为分界
void leftRotate_str(char* str, int k)
{
	size_t len = strlen(str);
	k %= len;
	
	reverse(str, str + k - 1);//1.前半部分逆序
	reverse(str + k, str + len - 1);//2.后半部分逆序
	reverse(str, str + len - 1);//3.整个字符串逆序
}

int main()
{
	char str[] = "ABCD";

	int k = 0;
	scanf("%d", &k);

	leftRotate_str(str, k);
	printf("%s", str);
	
	return 0;
}