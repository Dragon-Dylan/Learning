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


//��ѧ�������·������
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////����������Ϻ���
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
////������ϵ���֤����
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
//    printf("������ A ����һ�������䣬��Ҫ�ߵ�Ŀ�� B �㡣�����ߵĹ��򣺿������¡��������ҡ�ͬʱ�������� C ����һ���Է������������ڵĵ��������Ծһ���ɴ�ĵ��Ϊ�Է���Ŀ��Ƶ㡣��˳�֮Ϊ�����������䡱��\n�����������ʾ��A �� (0,0)��B �� (n,m)��C(a,b)��ͬ�����λ����������Ҫ�����ġ�\nһ���ĸ����������ֱ��ʾ B(n,m) ������� ��C(a,b) �����ꡣ\n");
//    printf("�������λ���ǹ̶������ģ�����������һ������һ����\n");
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
//    printf("\n\n�������ϳ����A���ܹ�����B���·����������Ϊ %d\n", sum);
//    return 0;
//}


//Tic-Tac-Tic Game(������)
//int main()
//{
//	const int size = 3;
//	int board[3][3];
//	int i, j;
//	int numOfX;
//	int numOfO;
//	int result = -1;//-1��û��Ӯ��1��XӮ��0��OӮ
//
//	//�������
//	for (i = 0; 1 < size; i++)
//	{
//		for (j = 0; j < size; j++)
//		{
//			scanf("%d", &board[i][j]);
//		}
//	}
//
//	//�����
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
//	//�����
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
//	//������Խ���
//	numOfO = numOfX = 0;
//	for (i = 0; i < size; i++)
//	{
//		if (board[i][i] == 1)	numOfX++;
//		else numOfO++;
//	}
//	if (numOfO == size) 	result = 0;
//	else if (numOfX == size)	result = 1;
//
//	//��鷴�Խ���
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


////ð������ĸ���д����
//#include <stdio.h>
//#include <stdlib.h>
////ð������ԭʼд��
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
////�Ľ���ð��������һ��ð�ݵĹ����У����û�з������������Ѿ�����
//void ImprovedBubbleSort(int* array, int n)
//{
//	int flag, temp;
//	for (int i = n - 1; i > 0; i--)
//	{
//		flag = 0;//ÿ��ð��ǰ��flag��0
//		for (int j = 0; j < i; j++)
//		{
//			if (*(array + j) > *(array + j + 1))
//			{
//				temp = *(array + j);
//				*(array + j) = *(array + j + 1);
//				*(array + j + 1) = temp;
//				flag = 1;//ֻҪ������һ�ν�����flag��1
//			}
//		}
//		//��һ��ð�ݹ��̺�flag��ȻΪ0����ʾδ�������������������
//		if (0 == flag)
//		{
//			break;
//		}
//	}
//}
////��һ���Ľ���ð�����������ĳ��ð�ݹ����У����һ�ν��н�����λ��Ϊflag����
////��ʾflag֮��������Ѿ�������ô��һ��ð�ݾ�����Ƚ�flag֮������У���ֻҪ��
////�ϵ�flag�Ϳ��Խ����˴�ð�ݹ��̡���flag=0ʱ����ʾĳ��ð��û�з������������ɽ�����
//void BetterBubbleSort(int* array, int n)
//{
//	int temp, flag, bound = n - 1;//bound��¼ÿ��ð�ݵı߽�
//	while (bound != 0)
//	{
//		flag = 0;//flag��ʼ��Ϊ0��һ��ð�ݺ����flag��ȻΪ0�����Ѿ������������
//		for (int j = 0; j < bound; j++)
//		{
//			if (*(array + j) > *(array + j + 1))
//			{
//				temp = *(array + j);
//				*(array + j) = *(array + j + 1);
//				*(array + j + 1) = temp;
//				flag = j;//flag���ڼ�¼һ��ð�ݹ��������һ�ν�����λ��
//			}
//		}
//		bound = flag;
//	}
//}
////˫��ð������һ��ð�ݵĹ����У��ֱ����ļ�¼����С�ļ�¼���ŵ����յ�λ��
//void DoubleBubbleSort(int* array, int n)
//{
//	int temp, j;
//	int maxFlag, minFlag;//�ֱ���Ϊ˫��ð�ݵı�־
//	int maxBound = n - 1, minBound = 0;//�ֱ��¼������С�ı߽�
//	while (maxBound > minBound)
//	{
//		//��ʼ����־λ��Ϊ0��ĳ�ν������̺��־λ��ȻΪ0�����������
//		maxFlag = 0;
//		minFlag = 0;
//		//�˴ν��������ֵ�³�
//		for (j = minBound; j < maxBound; j++)
//		{
//			if (*(array + j) > *(array + j + 1))
//			{
//				temp = *(array + j);
//				*(array + j) = *(array + j + 1);
//				*(array + j + 1) = temp;
//				maxFlag = j;//��¼�³����������һ�ν�����λ��
//			}
//		}
//		//�³��Ĺ���û�з����������������
//		if (0 == maxFlag)
//		{
//			break;
//		}
//		//�³����̽��������������±߽磨�������߽磩
//		maxBound = maxFlag;
//		//�˴ν�������Сֵ�ϸ�
//		for (j = maxBound; j > minBound; j--)
//		{
//			if (*(array + j) < *(array + j - 1))
//			{
//				temp = *(array + j);
//				*(array + j) = *(array + j - 1);
//				*(array + j - 1) = temp;
//				minFlag = j;//��¼�ϸ����������һ�ν�����λ��
//			}
//		}
//		//�ϸ��Ĺ���û�з����������������
//		if (0 == minFlag)
//		{
//			break;
//		}
//		//�ϸ����̽��������������ϱ߽磨��С����߽磩
//		minBound = minFlag;
//	}
//}
////���Ժ�����
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
