#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>



//计算长方体体积代码：

//int main()
//{
//	int Long;
//	int Width;
//	int Height;
//	int result;
//
//	printf("长：\n");
//	scanf("%d", &Long);
//
//	printf("宽：\n");
//	scanf("%d", &Width);
//
//	printf("高：\n");
//	scanf("%d", &Height);
//
//	//在C语言中scanf是一种不安全的函数，所以要在代码开头输入#define _CRT_SECURE_NO_WARNINGS 1以忽略不安全的警告从而才能运行此代码
//
//	result = calculate(Long, Width, Height);
//
//	printf("长方体的体积是：\n");
//	printf("%d\n", result);
//	return 0;
//}
//
//int calculate(int Long, int Width, int Height)
//{
//	int result = Long * Width * Height;
//	return result;
//}



//计算圆面积代码：

//#define PAI 3.141593
//int main()
//{
//	double fRadius;
//	double fResult=0;
//
//	printf("圆的半径为：\n");
//	scanf("%lf", &fRadius);
//
//	fResult = fRadius * fRadius * PAI;
//
//	printf("圆的面积为：%lf\n", fResult);
//	return 0;
//}



//打印空心正方形代码：

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



//选择语句和循环语句的混用例子：

//int main()
//{
//    int input1= 0;
//    printf("是否想进入大厂\n");
//    printf("请输入1(想) or 0(不想) :>(1/0)\n");
//    scanf("%d", &input1);//输入yes或者no
//
//    if (input1 == 1)
//    {
//        printf("You are right!\n");
//        printf("冲向进入大厂\n");
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
//                printf("敲多一行代码：%d\n", line);
//
//            }
//            if (line >= 20000)
//                printf("可以得到一份好Offer\nCongratulate!!!\n");
//        }
//        else
//            printf("No problem!\n做好准备再出发！\n");
//    }
//    else
//        printf("No problem!\n一定要找到自己的方向喔！\n");
//        
//    return 0;
//}

