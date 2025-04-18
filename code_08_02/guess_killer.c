#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

/*以下为4个嫌疑犯的供词:

	A：不是我。//!=A;
	B：是C。   //=C;
	C：是D。   //=D;
	D：C在胡说 //!=D;
	已知3个人说了真话，1个人说的是假话。

	现在请根据这些信息，写一个程序来确定到底谁是凶手。*/
int main()
{
	char k = 0;
	for (k = 'A'; k <= 'D'; k++)
		if (3 == (k != 'A') + (k == 'C') + (k == 'D') + (k != 'D'))
			printf("killer is %c", k);

	return 0;
}