#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）。
//int drink(int money)
//{
//	if (money == 1)
//		return 1;
//	else
//		return 2 + drink(money - 1);
//}

int drink(int money)
{
	int total = money;
	int empty = money;
	
	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	return total;
}
