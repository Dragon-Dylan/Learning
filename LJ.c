#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>



//���㳤����������룺

//int main()
//{
//	int Long;
//	int Width;
//	int Height;
//	int result;
//
//	printf("����\n");
//	scanf("%d", &Long);
//
//	printf("��\n");
//	scanf("%d", &Width);
//
//	printf("�ߣ�\n");
//	scanf("%d", &Height);
//
//	//��C������scanf��һ�ֲ���ȫ�ĺ���������Ҫ�ڴ��뿪ͷ����#define _CRT_SECURE_NO_WARNINGS 1�Ժ��Բ���ȫ�ľ���Ӷ��������д˴���
//
//	result = calculate(Long, Width, Height);
//
//	printf("�����������ǣ�\n");
//	printf("%d\n", result);
//	return 0;
//}
//
//int calculate(int Long, int Width, int Height)
//{
//	int result = Long * Width * Height;
//	return result;
//}



//����Բ������룺

//#define PAI 3.141593
//int main()
//{
//	double fRadius;
//	double fResult=0;
//
//	printf("Բ�İ뾶Ϊ��\n");
//	scanf("%lf", &fRadius);
//
//	fResult = fRadius * fRadius * PAI;
//
//	printf("Բ�����Ϊ��%lf\n", fResult);
//	return 0;
//}



//��ӡ���������δ��룺

//int main()
//{
//    int x, y, num;
//    printf("please input the num:\n");
//    scanf("%d", &num);
//
//
//    for (x = 0; x < num; x++)
//    {
//        for (y = 0; y < num; y++)
//        {
//            if (x == 0 || y == 0 || x == num - 1 || y == num - 1)
//            {
//                printf("* ");
//            }
//            else
//            {
//                printf("  ");
//            }
//        }
//        printf("\n");
//    }
//
//
//    return 0;
//}



//ѡ������ѭ�����Ļ������ӣ�

//int main()
//{
//    int input1= 0;
//    printf("�Ƿ�������\n");
//    printf("������1(��) or 0(����) :>(1/0)\n");
//    scanf("%d", &input1);//����yes����no
//
//    if (input1 == 1)
//    {
//        printf("You are right!\n");
//        printf("��������\n");
//        int input2 = 0;
//        printf("begin(1) or not(0),please type 1 or 0 :>(1/0)\n");
//        scanf("%d", &input2);
//
//        if (input2 == 1)
//        {
//            int line = 0;
//            while (line < 20000)
//            {
//                line++;
//                printf("�ö�һ�д��룺%d\n", line);
//
//            }
//            if (line >= 20000)
//                printf("���Եõ�һ�ݺ�Offer\nCongratulate!!!\n");
//        }
//        else
//            printf("No problem!\n����׼���ٳ�����\n");
//    }
//    else
//        printf("No problem!\nһ��Ҫ�ҵ��Լ��ķ���ร�\n");
//        
//    return 0;
//}

