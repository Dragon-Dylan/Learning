#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int outside = 2020;//ȫ�ֱ����������е�Դ�ļ��������ã�Ч����Դ�ļ��� ѧϰC����.c �ĵ�195-200��

//��λ���ĵ���
// 
//int main()
//{
//	int a, b, c;
//	printf("������3�������֣�������֮���ÿո��������>\n");
//	scanf("%d %d %d", &a, &b, &c); 
//	printf("%d %d %d\n", c, b, a);
//	return 0;
//}


//��һ����λ������д
// 
//��д�Ĵ��룺
//int main()
//{
//	int number;
//	printf("���뵹��д����λ����>\n");
//	scanf("%d", &number);
//
//	int number1, number2, number3;
//	number1 = number / 100;
//	number2 = number / 10;
//	number3 = number / 1;
//
//	int result;
//	result = (number3 - number2 * 10) * 100 + (number2 - number1 * 10) * 10 + number1;
//	printf("�����%d\n", result);
//	return 0;
//}
//����д�Ĵ��룺
//int main(int argc,char **argv)
//{
//	int i = 0;
//	printf("���뵹��д����λ����>\n");
//	scanf("%d", &i);
//	printf("�����%d\n", (i % 10) * 100 + (i % 100 / 10) * 10 + i / 100);
//	return 0;
//}


// ����ʱ���
// 
// ��д�Ĵ��룺
//int main()
//{
//    int hour1, minute1;
//    int hour2, minute2;
//
//    printf("��ʼʱ�䣺>\n");
//    scanf("%d:%d", &hour1, &minute1);
//    printf("��ֹʱ�䣺>\n");
//    scanf("%d:%d", &hour2, &minute2);
//
//    int a, b, c, d;
//    a = 60 + minute2 - minute1;
//    b = hour2 - hour1 - 1;
//    c = minute2 - minute1;
//    d = hour2 - hour1;
//
//    if (minute2 < minute1)
//        printf("���ʱ��Ϊ��%d:%d\n", b, a);
//    else
//        printf("���ʱ��Ϊ��%d:%d\n", d, c);
//    return 0;
//}
//����д�Ĵ��룺
//int main()
//{
//	int hour1,minute1;
//	int hour2,minute2;
//	
//	printf("��ʼʱ�䣺>\n");
//	scanf("%d:%d",&hour1,&minute1);
//	
//	printf("��ֹʱ�䣺>\n");
//	scanf("%d:%d",&hour2,&minute2);
//	
//	int ih=hour2-hour1;
//	int im=minute2-minute1;
//	
//	if(im<0)
//	{
//		im=60+im;
//		ih--;
//	}
//	
//	printf("ʱ���Ϊ��> %d Сʱ %d ����\n",ih,im);
//	return 0;
// } 


//�Ƚ��������Ĵ�С
// 
//int main()
//{
//	int a,b;
//	printf("������������Ҫ�Ƚϵ���(�м��ö��Ÿ���)��>\n");
//	scanf("%d,%d",&a,&b);
//	int c;
//	c = max(a, b);
//	printf("������ǣ�> %d\n", c);
//	return 0;
//}
//int max(int x,int y)
//{
//	int z;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//		z = y;
//}


//�Ƚ��������Ĵ�С
// 
//int main()
//{
//	int a, b, c;
//	printf("������������Ҫ�Ƚϵ���(�м��ö��Ÿ���)��>\n");
//	scanf("%d,%d,%d", &a, &b, &c);
//	int d;
//	d = max(a, b, c);
//	printf("������ǣ�> %d\n", d);
//	return 0;
//}
//int max(int x, int y, int z)
//{
//	int m;
//	if (x > y)
//	{
//		m = x;
//	}
//	else
//		m = y;
//
//	int n;
//	if (m > z)
//	{
//		n = m;
//	}
//	else
//		n = z;
//}


//�ڼ����˵ĳɼ���ѡ����߷�
// 
//int main()
//{
//	int SUM;
//	printf("��Ҫ�����ͬѧ������>\n");
//	scanf("%d", &SUM);
//
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	while (i < SUM)
//	{
//		printf("��%d��ͬѧ�ĳɼ�����������Ϊ�����������룩��>\n", ++i);
//		scanf("%d", &b);
//		a = max(a, b);
//	}
//	printf("��%d��ͬѧ����߷�Ϊ��>%d\n", SUM, a);
//	return 0;
//}
//int max(int x, int y)
//{
//	int z;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//		z = y;
//	return z;
//}


//��������
//
//int main()
//{
//	double price;
//	double bill;
//
//	printf("������˿�Ҫ���Ľ�>\n");
//	scanf("%lf", &price);
//
//	printf("������˿͸�����>\n");
//	scanf("%lf", &bill);
//
//	double overprice = price - bill;
//	double returnprice = bill - price;
//	if (price > bill)
//	{
//		printf("�˿ͻ���Ҫ֧���Ľ��Ϊ��%lf\n", overprice);
//	}
//	else
//		printf("��Ҫ���㣺%lf\n", returnprice);
//
//	return 0;
//}


//�ж���λ��һ�µ���������λ��
//
//int main()
//{
//	int x;
//	int n;
//
//	printf("������һ����λ��һ�µ���������>\n");
//	scanf("%d", &x);
//
//	if (x > 999)
//		n = 4;
//	else if (x > 99)
//		n = 3;
//	else if (x > 9)
//		n = 2;
//	else
//		n = 1;
//
//	printf("���������Ϊ %dλ��\n", n);
//	return 0;
//}


//�ж�һ��ʮλ��һ�µ���������λ��
//
//int main()
//{
//	int x=0;
//	int i=0;
//
//	printf("������һ��ʮλ��һ�µ���������>\n");
//	scanf("%d", &x);
//
//	//whileѭ��д��
//	//i++;
//	//x = x / 10;
//	///*whileѭ��ǰ�ظ������Ϊ�˱���0��0λ���Ľ��*/
//	//while (x > 0)
//	//{
//	//	i++;
//	//	x = x / 10;
//	//}
//
//	//do��whileѭ��д��
//	do
//	{
//		i++;
//		x = x / 10;
//	} while (x > 0);
//	
//	printf("���������Ϊ %dλ��\n", i);
//	return 0;
//}


//����ô������n!(n�Ľ׳�)
// 
// whileѭ��д��1��
//int main()
//{
//	int n;//�׳˵Ĳ���
//
//	printf("�������������Ľ׳�(����׳˵���)��>\n");
//	scanf("%d", &n);
//
//	int a = 1;
//	int b = 1;
//	while (b <= n)
//	{
//		a *= b;
//		b++;
//	}
//
//	printf("%d!=%d\n", n, a);
//	return 0;
//}
// 
// forѭ��д����
// ������㣺n!=1*2*��*n
//int main()
//{
//	int n;//�׳˵Ĳ���
//
//	printf("�������������Ľ׳�(����׳˵���)��>\n");
//	scanf("%d", &n);
//
//	int a = 1;//�׳˵ĳ�ʼֵΪ1
//	int b = 1;
//	for (a = 1; a <= n; a++)
//	{
//		b *= a;//�ȼ��� b = b*a
//	}
//
//	printf("%d!=%d\n",n, b);
//	return 0;
//}
//������㣺n!=n*(n-1)*��*1
//int main()
//{
//	int num;
//
//	printf("�������������Ľ׳�(����׳˵���)��>\n");
//	scanf("%d", &num);
//
//	int n = num;
//	int i = 1;
//	for (i = 1; n >= 1; n--)
//	{
//		i *= n;
//	}
//
//	printf("%d!=%d\n", num, i);
//	return 0;
//}


//switch��case����ѡ��ṹ�����÷�
// 
//�ٷ��Ƶķ����ܵõ�A��B��C��D�ĸ��ɼ��ȼ�
//int main()
//{
//	int i;
//	printf("��ķ����ǣ��ٷ��ƣ���>\n");
//	scanf("%d", &i);
//
//	int t = i / 10;
//	if (i <= 100 && i >= 0)
//	{
//		printf("��ĳɼ��ȼ�Ϊ��>\n");
//		switch (t)
//		{
//		case 10:
//		case 9:
//			printf("A\n");
//			break;
//		case 8:
//			printf("B\n");
//			break;
//		case 7:
//		case 6:
//			printf("C\n");
//			break;
//		default:
//			printf("D\n");
//			break;
//		}
//		printf("�������ͣ�����\n");
//	}
//	else
//		printf("��������ȷ�ĳɼ���лл������\n");
//
//	return 0;
//}
//
//����·ݶ�Ӧ��Ӣ��
//int main()
//{
//	int month;
//	printf("�������·ݶ�Ӧ�����֣�>\n");
//	scanf("%d", &month);
//
//	if (month >= 1 && month <= 12)
//	{
//		switch (month)
//		{
//		case 1:printf("%d�µ�Ӣ����January\n", month);break;
//		case 2:printf("%d�µ�Ӣ����February\n", month);break;
//		case 3:printf("%d�µ�Ӣ����March\n", month);break;
//		case 4:printf("%d�µ�Ӣ����April\n", month);break;
//		case 5:printf("%d�µ�Ӣ����May\n", month);break;
//		case 6:printf("%d�µ�Ӣ����June\n", month);break;
//		case 7:printf("%d�µ�Ӣ����July\n", month);break;
//		case 8:printf("%d�µ�Ӣ����August\n", month);break;
//		case 9:printf("%d�µ�Ӣ����September\n", month);break;
//		case 10:printf("%d�µ�Ӣ����October\n", month);break;
//		case 11:printf("%d�µ�Ӣ����November\n", month);break;
//		case 12:printf("%d�µ�Ӣ����December\n", month);break;
//		}
//	}
//	else
//		printf("��������ȷ���·�����\n");
//
//	return 0;
//}


//�������ƽ��ֵ
//int main()
//{
//	float score=0;
//	int num = 0;
//	float sum = 0;
//	
//	do
//	{
//		num++;
//		printf("��%dλͬѧ�ĳɼ�λ\n(��Ҫ�������룬���ڳɼ������롰-1���Խ�������)��>\n", num);
//		scanf("%f", &score);
//		if (score >= 0)
//		{
//			sum += score;
//		}
//		else if (score == -1)
//			break;
//			//break ����ѭ��
//			//continue �������ڽ��е�ѭ��ʣ�µ���������һ��ѭ��
//		else
//		{
//			printf("���ݳ��ִ��󣡣���\n");
//			sum = 0;
//			break;
//		}
//	} while (score >= 0);
//
//	if (sum != 0)
//	{
//		float average = sum / --num;
//		printf("��Щͬѧ�ĳɼ���ƽ����Ϊ��%f\n", average);
//	}
//	else
//	{
//		printf("��ʾ����������ʱ�ȼ��������룡\n");
//		printf("������......\n");
//	}
//
//	return 0;
//}


//������Ϸ
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	srand(time(0));
//	int number = rand() % 100 + 1;
//	int count = 0;
//	int a = 0;
//
//	printf("���Ѿ������һ��1��100����\n�����²��ҵ����Ƕ��٣�\n\n");
//	do
//	{
//		printf("����1��100��ѡ�����°ɣ�\n");
//		scanf("%d", &a);
//		count++;
//		if (a > number)
//		{
//			printf("���µ�������\n\n");
//		}
//		else if (a < number)
//		{
//			printf("���µ���С��\n\n");
//		}
//	} while (a != number);
//	printf("\n��ϲ������ˣ�����\n");
//
//	if (count == 1)
//	{
//		printf("̫�����˰ɣ���ֻ����1�ξͲ¶��ˣ�����\n");
//	}
//	else
//		printf("���ź���������%d����Ų³����������Ѿ��ܰ��ˣ�\n", count);
//	return 0;
//}


//�ж�һ�����ǲ����������ֳ�������ָһ������1�ҳ���1�����������ⲻ�ܱ�������������������������
//int main()
//{
//	int x;
//
//	printf("�����������жϵ���������>\n");
//	scanf("%d", &x);
//
//	int i;
//	int isPrime = 1;
//	for (i = 2; i < x; i++)
//	{
//		if (x % i == 0)
//		{
//			isPrime = 0;
//		}
//	}
//	
//	if (isPrime == 1)
//	{
//		printf("%d �� ����\n", x);
//	}
//	else
//	{
//		printf("%d ���� ����\n", x);
//	}
//
//	return 0;D
//}


//���x���ڵ����м��������ͼ�������
//int main()
//{
//	int num;
//	printf("\n�������x���ڵ�ȫ�������������жϽ����������x\n");
//	scanf("%d", &num);
//	printf("\n");
//
//	int x = 1;
//	int a = 0;
//	int b = 0;
//	while (x <= num )
//	{
//		if (x == 1)
//		{
//			printf("%d �Ȳ����������ֲ��Ǻ���\n", x);
//		}
//		else
//		{
//			int i;
//			int isPrime = 1;
//			for (i = 2; i < x; i++)
//			{
//				if (x % i == 0)
//				{
//					isPrime = 0;
//				}
//			}
//
//			if (isPrime == 1)
//			{
//				a++;
//				printf("%d �� ����\n", x);
//			}
//			else
//			{
//				b++;
//				printf("%d �� ����\n", x);
//			}
//		}
//
//		x++;
//	}
//
//	printf("\n%d ��������һ���� %d ������\n", num, a);
//	printf("%d ��������һ���� %d ������\n", num, b);
//	printf("����һ����1 �Ȳ����������ֲ��Ǻ���\n");
//
//	return 0;
//}


//���x���ڵ�����������
//int main()
//{
//	int num;
//	printf("\n�������x���ڵ�ȫ�������������жϽ����������x\n");
//	scanf("%d", &num);
//	printf("\n");
//
//	printf("%d���ڵ������У�",num);	
//	int y = 0;
//	for (int x = 1; x <= num; x++)
//	{
//		int i;
//		int isPrime = 1;
//		for (i = 2; i < x; i++)
//		{
//			if (x % i == 0)
//			{
//				isPrime = 0;
//			}
//		}
//		if (isPrime == 1 && x != 1)
//		{
//			printf("%d ", x);
//			y++;
//		}
//	}
//
//	printf("\n\n%d ��������һ���� %d ������\n", num, y);
//	return 0;
//}


//
//int main()
//{
//
//
//	return 0;
//}









