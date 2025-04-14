#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//变种水仙花数 - Lily Number：把任意的数字，从中间拆分成两个数字，比如1461 可以拆分成（1和461）,（14和61）,（146和1)，
//如果所有拆分后的乘积之和等于自身，则是一个Lily Number。
int main()
{
	for (int i = 10000; i <= 99999; i++)
	{
		int sum = 0;
		for (int j = 10; j <= 10000; j *= 10)
			sum += (i / j) * (i % j);

		if (sum == i)
			printf("%d ", i);
	}
	
	return 0;
}