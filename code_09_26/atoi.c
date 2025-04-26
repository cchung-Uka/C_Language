#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>

enum State
{
	VALID,
	INVALID
}sta = INVALID;

int _atoi(const char* str)
{
	assert(str);

	//处理空格
	while (isspace(*str))
	{
		str++;
	}

	int sign = 1;
	//处理符号
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
	{
		str++;
	}

	long long ret = 0;

	//转换数字
	while (isdigit(*str))
	{
		ret = ret * 10 + sign * (*str - '0');
		if (ret < INT_MIN || ret > INT_MAX)
		{
			if (sign == 1)
			{
				return INT_MAX;
			}
			else
			{
				return INT_MIN;
			}
		}
		str++;
	}
	sta = VALID;

	return (int)ret;
}

int main()
{
	char str[256];

	fgets(str, 256, stdin);
	int n = _atoi(str);

	if (sta == VALID)
		printf("The value entered is %d.\nIts double is %d.\n", n, n * 2);
	else
		printf("Illegal conversion.\n");
		
	return 0;
}