#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int n = 0;

    while(scanf("%d", &n) != EOF)
    {
        if(n % 2 == 0)
            printf("Even\n");
        else
            printf("Odd\n");
    }
    
    return 0;
}