#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
    int input1= 0;
    printf("是否想进入大厂\n");
    printf("请输入1(想) or 0(不想) :>(1/0)\n");
    scanf("%d", &input1);//输入yes或者no

    if (input1 == 1)
    {
        printf("You are right!\n");
        printf("冲向进入大厂\n");
        int input2 = 0;
        printf("begin(1) or not(0),please type 1 or 0 :>(1/0)\n");
        scanf("%d", &input2);

        if (input2 == 1)
        {
            int line = 0;
            while (line < 20000)
            {
                line++;
                printf("敲多一行代码：%d\n", line);

            }
            if (line >= 20000)
                printf("可以得到一份好Offer\nCongratulate!!!\n");
        }
        else
            printf("No problem!\n做好准备再出发！\n");
    }
    else
        printf("No problem!\n一定要找到自己的方向喔！\n");
        
    return 0;
}

