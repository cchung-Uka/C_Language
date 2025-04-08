#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("**************************\n");
	printf("******  1. play     ******\n");
	printf("******  0. exit     ******\n");
	printf("**************************\n");
}

//猜数字
void game()
{
	int ret = rand() % 100 + 1;

	int guess = 0;
	while (1)
	{
		printf("请输入要猜的数字(1~100):>");
		scanf("%d", &guess);

		if (guess < ret)
			printf("猜小了\n");
		else if(guess > ret)
			printf("猜大了\n");
		else
		{
			printf("恭喜你，猜对啦！\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();

		printf("请选择:>");
		scanf("%d", &input);
		
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误，重新选择\n");
				break;
		}
	} while (input);

	return 0;
}