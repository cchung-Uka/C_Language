#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//实现函数判断year是不是闰年。
int is_leap_year(int year)
{
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		return 1;
	else
		return 0;
}

int main()
{
	for (int year = 1000; year <= 2000; year++)
	{	
		if (is_leap_year(year))
		{
			printf("%d ", year);
		}
	}
	
	return 0;
}