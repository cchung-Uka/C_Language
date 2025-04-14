#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//获得月份天数 (tips:还可以通过数组存放天数
int is_leap_year(int year)
{
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		return 1;
	else
		return 0;
}

int main()
{
	int year = 0;
	int month = 0;
	int day = 31;

	while (scanf("%d %d", &year, &month) != EOF)
	{
		switch (month)
		{
			case 2:
				printf("%d\n", is_leap_year(year) ? 29 : 28);
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				printf("%d\n", day - 1);
				break;
			default:
				printf("%d\n", day);
				break;
		}
	}

	return 0;
}