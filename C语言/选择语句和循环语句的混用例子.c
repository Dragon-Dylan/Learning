#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
    int input1= 0;
    printf("�Ƿ�������\n");
    printf("������1(��) or 0(����) :>(1/0)\n");
    scanf("%d", &input1);//����yes����no

    if (input1 == 1)
    {
        printf("You are right!\n");
        printf("��������\n");
        int input2 = 0;
        printf("begin(1) or not(0),please type 1 or 0 :>(1/0)\n");
        scanf("%d", &input2);

        if (input2 == 1)
        {
            int line = 0;
            while (line < 20000)
            {
                line++;
                printf("�ö�һ�д��룺%d\n", line);

            }
            if (line >= 20000)
                printf("���Եõ�һ�ݺ�Offer\nCongratulate!!!\n");
        }
        else
            printf("No problem!\n����׼���ٳ�����\n");
    }
    else
        printf("No problem!\nһ��Ҫ�ҵ��Լ��ķ���ร�\n");
        
    return 0;
}

