#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
    int x, y, num;
    printf("please input the num:\n");
    scanf("%d", &num);


    for (x = 0; x < num; x++)
    {
        for (y = 0; y < num; y++)
        {
            if (x == 0 || y == 0 || x == num - 1 || y == num - 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }


    return 0;
}

