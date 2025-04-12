#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			board[i][j] = set;
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	printf("----------MineSweeper----------\n");

	for (int i = 0; i <= col; i++)
		printf("%d ", i);

	printf("\n");

	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);

		for (int j = 1; j <= col; j++)
			printf("%c ", board[i][j]);

		printf("\n");
	}

	printf("----------MineSweeper----------\n");
}

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

static int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';
}

static void Auto_Mine_Sweep(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y, int* win)
{
	if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
	{
		int ret = GetMineCount(mine, x, y);

		if (ret == 0)
		{
			show[x][y] = '0';

			for (int i = x - 1; i <= x + 1; i++)
			{
				for (int j = y - 1; j <= y + 1; j++)
				{
					if (show[i][j] == '*')
						Auto_Mine_Sweep(mine, show, i, j, win);
				}
			}
		}
		else
			show[x][y] = ret + '0';

		(*win)++;
	}
}

//void ScouringMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	int win = 0;
//	
//	while (win < row * col - EASY_COUNT)
//	{
//		printf("请输入排查坐标:>");
//		scanf("%d %d", &x, &y);
//		if (x >= 1 && x <= row && y >= 1 && y <= col)
//		{
//			if (show[x][y] != '*') 
//				printf("该坐标已被排查，重新输入坐标\n");
//			else if (mine[x][y] == '1')
//			{
//				printf("排雷失败，踩雷啦\n");
//				DisplayBoard(mine, ROW, COL);
//				break;
//			}
//			else
//			{
//				int c = GetMineCount(mine, x, y);
//				show[x][y] = c + '0';
//				DisplayBoard(show, ROW, COL);
//			}
//		}
//		else
//			printf("坐标无效，重新输入\n");
//	}
//	if (win == row * col - EASY_COUNT)
//	{
//		printf("哈哈，排雷成功！\n");
//		DisplayBoard(mine, ROW, COL);
//	}
//}

void ScouringMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;

	while (win < row * col - EASY_COUNT)
	{
		printf("请输入排查坐标:>");
		scanf("%d %d", &x, &y);

		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
				printf("该坐标已被排查，重新输入坐标\n");
			else if (mine[x][y] == '1')
			{
				printf("排雷失败，踩雷啦\n");

				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				Auto_Mine_Sweep(mine, show, x, y, &win);
				DisplayBoard(show, ROW, COL);
			}
		}
		else
			printf("坐标无效，重新输入\n");
	}

	if (win == row * col - EASY_COUNT)
	{
		printf("哈哈，排雷成功！\n");
		DisplayBoard(mine, ROW, COL);
	}
}