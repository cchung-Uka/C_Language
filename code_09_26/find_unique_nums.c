#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。

//暴力解
//void find_unique_nums(int* arr, int sz)
//{
//    for (int i = 0; i < sz; i++)
//    {
//        int count = 0;
//        for (int j = 0; j < sz; j++)
//        {
//            if (i != j && arr[i] == arr[j])
//            {
//                count++;
//                break;
//            }
//        }
//
//        if (count == 0)
//        {
//            printf("%d ", arr[i]);
//        }
//    }
//}

//找出一个只出现过一次的数字的问题处理方法就是找一个数字把里面所有的数字都异或一遍，
//利用异或两次等于没异或的特点来处理(异或满足交换律)。那么如果有两个数字都只出现了一次，那么如此得到的应该是两个数异或的结果。
//首先这个结果肯定不是0（要不然就全都配对了），所以里面一定至少有一位是一。找出值为1的一位，以这一位的值将结果分为两组。
//分别异或两组数，即可找到这两个数。
 
void findUniqueNumbers(int* arr, int sz)
{
    int xor = 0;
    
    //1.遍历，异或结果
    for (int i = 0; i < sz; i++)
    {
        xor ^= arr[i];
    }

   /* xor - 1：将xor中最右边为1的位变为0，将这一位右边的所有位变为1。

    ~(xor - 1)，即将0变为1，将1变为0。这样，得到的结果是一个从最右边为1的位开始，右边所有位都为0，左边所有位都为1的数。

    xor & ~(xor -1) 将xor和~(xor -1)进行与操作。由于~(xor -1)中只有最右边为1的位是1，其他位都是0，
    所以与操作会将xor中除了最右边为1的位以外的所有位都置为0，只保留最右边为1的位。*/

    //找到xor中最右边为1的位
    int set_bit = xor & ~(xor - 1);

    int x = 0;
    int y = 0;

    //分组
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] & set_bit)
        {
            x ^= arr[i];
        }
        else
        {
            y ^= arr[i];
        }
    }

    printf("The two unique numbers are: %d and %d\n", x, y);
}

int main() 
{
    int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 6 };
    int sz = sizeof(arr) / sizeof(arr[0]);

    printf("The two unique numbers are: ");

    find_unique_nums(arr, sz);

    return 0;
}