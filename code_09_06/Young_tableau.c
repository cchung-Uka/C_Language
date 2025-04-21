#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#define ROWS 4
#define COLS 4

//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。要求：时间复杂度小于O(N);
void search_YoungTableau(int matrix[][4], int target)
{
    int row = 0;
    int col = COLS - 1; //从矩阵的右上角开始查找

    while (row < ROWS && col >= 0) 
    {
        if (matrix[row][col] == target)
        {
            printf("找到目标数字%d，矩阵位置：[%d,%d]\n", target, row + 1, col + 1); // 找到目标数字
            return;
        }
        else if (matrix[row][col] < target)
            row++;//如果当前元素小于目标数字，则在当前列的下一行继续查找
        else
            col--;//如果当前元素大于目标数字，则在当前行的前一列继续查找
    }
    printf("未找到目标数字\n",target);
}

int main()
{
    int matrix[][4] = { {1, 4, 7, 11},
                        {2, 5, 8, 12},
                        {3, 6, 9, 16},
                        {10, 13, 14, 17} };

    int target = 11;
    search_YoungTableau(matrix, target);
    
    return 0;
}