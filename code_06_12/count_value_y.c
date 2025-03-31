#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int x = 0;
    int y = 0;

    scanf("%d", &x);

    if(x == 0)
        y = 0;
    else if(x > 0)
        y = -1;
    else
        y = 1;

    printf("%d", y);
    
    return 0;
}