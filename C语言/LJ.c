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


//数学排列组合路线问题
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////定义排列组合函数
//int Factorial(int z)
//{
//    int in = z;
//    int out = 0;
//    for (out = 1; in >= 1; in--)
//    {
//        out *= in;
//    }
//    return out;
//}
//int PermutationC(int f, int g)
//{
//    int C = 0;
//    C = Factorial(g) / (Factorial(f) * Factorial(g - f));
//    return C;
//}
//
///*
////排列组合的验证代码
//int main()
//{
//    int a, b;
//    scanf("C %d %d", &a, &b);
//    int c = PermutationC(a, b);
//    printf("%d\n", c);
//    return 0;
//}
//*/
//
//int main()
//{
//    printf("棋盘上 A 点有一个过河卒，需要走到目标 B 点。卒行走的规则：可以向下、或者向右。同时在棋盘上 C 点有一个对方的马，该马所在的点和所有跳跃一步可达的点称为对方马的控制点。因此称之为“马拦过河卒”。\n棋盘用坐标表示，A 点 (0,0)、B 点 (n,m)、C(a,b)，同样马的位置坐标是需要给出的。\n一行四个正整数，分别表示 B(n,m) 点坐标和 马C(a,b) 的坐标。\n");
//    printf("假设马的位置是固定不动的，并不是卒走一步马走一步。\n");
//    int n;
//    printf("\n n=");
//    scanf("%d", &n);
//    int m;
//    printf("\n m=");
//    scanf("%d", &m);
//    int a;
//    printf("\n a=");
//    scanf("%d", &a);
//    int b;
//    printf("\n b=");
//    scanf("%d", &b);
//
//    int x = 0, y = 0, sum = 0;
//    x = PermutationC(a, (a + b));
//    y = PermutationC((n - a), (n + m - a - b));
//    sum = x * y;
//
//    printf("\n\n则棋盘上出卒从A点能够到达B点的路径的总条数为 %d\n", sum);
//    return 0;
//}


//Tic-Tac-Tic Game(井字棋)
//int main()
//{
//	const int size = 3;
//	int board[3][3];
//	int i, j;
//	int numOfX;
//	int numOfO;
//	int result = -1;//-1：没人赢；1：X赢；0：O赢
//
//	//读入矩阵
//	for (i = 0; 1 < size; i++)
//	{
//		for (j = 0; j < size; j++)
//		{
//			scanf("%d", &board[i][j]);
//		}
//	}
//
//	//检查行
//	for (i = 0; i < size && result == -1; i++)
//	{
//		numOfO = numOfX = 0;
//		for (j = 0; j < size; j++)
//		{
//			if (board[i][j] == 1)	numOfX++;
//			else	numOfO++;
//		}
//		if (numOfO == size)	result == 0;
//		else if (numOfX == size)	result = 1;
//	}
//
//	//检查列
//	if (result == -1)
//	{
//		for (j = 0; j < size && result == -1; j++)
//		{
//			numOfO = numOfX = 0;
//			for (i = 0; i < size; i++)
//			{
//				if (board[i][j] == 1)	numOfX++;
//				else	numOfO++;
//			}
//			if (numOfO == size)	result == 0;
//			else if (numOfX == size)	result = 1;
//		}
//	}
//
//	//检查正对角线
//	numOfO = numOfX = 0;
//	for (i = 0; i < size; i++)
//	{
//		if (board[i][i] == 1)	numOfX++;
//		else numOfO++;
//	}
//	if (numOfO == size) 	result = 0;
//	else if (numOfX == size)	result = 1;
//
//	//检查反对角线
//	numOfO = numOfX = 0;
//	for (i = 0; i < size; i++)
//	{
//		if (board[i][size - i - 1] == 1)	numOfX++;
//		else	numOfO++;
//	}
//
//	//
//
//
//}


////冒泡排序的各种写法：
//#include <stdio.h>
//#include <stdlib.h>
////冒泡排序原始写法
//void BubbleSort(int* array, int n)
//{
//	int temp;
//	for (int i = n - 1; i > 0; i--)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			if (*(array + j) > *(array + j + 1))
//			{
//				temp = *(array + j);
//				*(array + j) = *(array + j + 1);
//				*(array + j + 1) = temp;
//			}
//		}
//	}
//}
////改进的冒泡排序，在一次冒泡的过程中，如果没有发生交换，则已经有序
//void ImprovedBubbleSort(int* array, int n)
//{
//	int flag, temp;
//	for (int i = n - 1; i > 0; i--)
//	{
//		flag = 0;//每次冒泡前将flag置0
//		for (int j = 0; j < i; j++)
//		{
//			if (*(array + j) > *(array + j + 1))
//			{
//				temp = *(array + j);
//				*(array + j) = *(array + j + 1);
//				*(array + j + 1) = temp;
//				flag = 1;//只要发生了一次交换，flag置1
//			}
//		}
//		//在一次冒泡过程后，flag依然为0，表示未发生交换，则排序结束
//		if (0 == flag)
//		{
//			break;
//		}
//	}
//}
////进一步改进的冒泡排序，如果在某次冒泡过程中，最后一次进行交换的位置为flag，则
////表示flag之后的序列已经有序，那么下一次冒泡就无需比较flag之后的序列，即只要比
////较到flag就可以结束此次冒泡过程。当flag=0时，表示某趟冒泡没有发生交换，即可结束。
//void BetterBubbleSort(int* array, int n)
//{
//	int temp, flag, bound = n - 1;//bound记录每趟冒泡的边界
//	while (bound != 0)
//	{
//		flag = 0;//flag初始置为0，一趟冒泡后如果flag仍然为0，则已经有序，排序结束
//		for (int j = 0; j < bound; j++)
//		{
//			if (*(array + j) > *(array + j + 1))
//			{
//				temp = *(array + j);
//				*(array + j) = *(array + j + 1);
//				*(array + j + 1) = temp;
//				flag = j;//flag用于记录一次冒泡过程中最后一次交换的位置
//			}
//		}
//		bound = flag;
//	}
//}
////双向冒泡排序，一次冒泡的过程中，分别将最大的记录和最小的记录都放到最终的位置
//void DoubleBubbleSort(int* array, int n)
//{
//	int temp, j;
//	int maxFlag, minFlag;//分别作为双向冒泡的标志
//	int maxBound = n - 1, minBound = 0;//分别记录最大和最小的边界
//	while (maxBound > minBound)
//	{
//		//初始将标志位置为0，某次交换过程后标志位依然为0，则排序结束
//		maxFlag = 0;
//		minFlag = 0;
//		//此次交换将最大值下沉
//		for (j = minBound; j < maxBound; j++)
//		{
//			if (*(array + j) > *(array + j + 1))
//			{
//				temp = *(array + j);
//				*(array + j) = *(array + j + 1);
//				*(array + j + 1) = temp;
//				maxFlag = j;//记录下沉过程中最后一次交换的位置
//			}
//		}
//		//下沉的过程没有发生交换，排序结束
//		if (0 == maxFlag)
//		{
//			break;
//		}
//		//下沉过程结束后，重新设置下边界（最大有序边界）
//		maxBound = maxFlag;
//		//此次交换将最小值上浮
//		for (j = maxBound; j > minBound; j--)
//		{
//			if (*(array + j) < *(array + j - 1))
//			{
//				temp = *(array + j);
//				*(array + j) = *(array + j - 1);
//				*(array + j - 1) = temp;
//				minFlag = j;//记录上浮过程中最后一次交换的位置
//			}
//		}
//		//上浮的过程没有发生交换，排序结束
//		if (0 == minFlag)
//		{
//			break;
//		}
//		//上浮过程结束后，重新设置上边界（最小有序边界）
//		minBound = minFlag;
//	}
//}
////测试函数：
//int main(int argc, char* argv[])
//{
//	int array[8] = { 5,9,2,16,7,4,12,15 };
//	int i;
//	printf("Before Sort: ");
//	for (i = 0; i < 8; i++)
//	{
//		printf("%2d ", array[i]);
//	}
//
//	//BubbleSort(array,8);
//	//ImprovedBubbleSort(array,8);
//	//BetterBubbleSort(array,8);
//	DoubleBubbleSort(array, 8);
//
//	printf("\n After Sort: ");
//	for (i = 0; i < 8; i++)
//	{
//		printf("%2d ", array[i]);
//	}
//	printf("\n");
//	return 0;
//}
