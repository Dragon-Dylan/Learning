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


//��������m��n�����Լ��
// ����һ��ö�ٷ�����
//int main()
//{
//	int a, b, min;
//	printf("����������Ҫ�����Լ����������(������֮���ö��Ÿ���)��>  ");
//	scanf("%d,%d", &a, &b);
//
//	if (a < b)
//		min = a;
//	else
//		min = b;
//
//	int ret = 0;
//	int i;
//	for (i = 1; i < min; i++)
//	{
//		if (a % i == 0)
//		{
//			if (b % i == 0)
//			{
//				ret = i;
//			}
//		}
//	}
//	
//	printf("\n\n��%dhe%d�������Լ��Ϊ��> %d",a,b,ret);
//	return 0;
//}
// ��������ʹ�� շת�������ŷ������㷨�� �����Լ������
//int main()
//{
//	int m, n;
//	printf("����������Ҫ�����Լ����������(������֮���ö��Ÿ���)��>  ");
//	scanf("%d,%d", &m, &n);
//
//	if (m < n)
//	{
//		int i;
//		i = m;
//		m = n;
//		n = i;
//	}
//	
//	/*շת�������ŷ������㷨��*/
//	int r = m % n;
//	while (r != 0)
//	{
//		m = n;
//		n = r;
//		r = m % n;
//	}
//	
//	printf("\n\n�������������Լ��Ϊ��> %d\n", n);
//	return 0;
//}


//�ж�ĳһ�������껹�Ƿ�����
//int main()
//{
//	int year;
//	printf("�����������ж��ǲ����������ݣ�>  ");
//	scanf("%d", &year);
//
//	if (year % 4 == 0)
//	{
//		if (year % 100 != 0)
//		{
//			printf("\n\n%d�� ������", year);
//		}
//		else
//		{
//			if (year % 400 == 0)
//			{
//			printf("\n\n%d�� ������", year);
//			}
//			else
//				printf("\n\n%d�� ��ƽ��", year);
//		}
//	}
//	else
//		printf("\n\n%d�� ��ƽ��", year);
//
//	return 0;
//}


//��һ�ǡ����Ǻ���ǵ�Ӳ�Ҵճ�10Ԫ���µ����������������
//int main()
//{
//	int money;
//	printf("�����Ӳ�ҵ��ܽ�> \n");
//	scanf("%d", &money);
//
//	int one, two, five;
//	for (one = 0; one < money * 10/1; one++)
//	{
//		for (two = 0; two < money * 10/2; two++)
//		{
//			for (five = 0; five < money * 10 / 5; five++)
//			{
//				if (one * 1 + two * 2 + five * 5 == money * 10)
//				{
//					printf("������ %d ��һ��Ӳ�ҡ�%d ������Ӳ�Һ� %d �����Ӳ�� �õ�%dԪ\n", one, two, five, money);
//				}
//			}
//		}
//	}
//
//	return 0;
//}


//��һ�ǡ����Ǻ���ǵ�Ӳ�Ҵճ�10Ԫ���µ���������һ������
//д��һ��
//int main()
//{
//	int money;
//	printf("�����Ӳ�ҵ���������> \n");
//	scanf("%1d", &money);//%nd��ʾֻ��ȡ��������ǰnλ
//
//	int one, two, five;
//	int exit = 0;//ͨ��exit��ֵ����ѭ��
//	for (one = 1; one < money * 10/1; one++)
//	{
//		for (two = 1; two < money * 10/2; two++)
//		{
//			for (five = 1; five < money * 10 / 5; five++)
//			{
//				if (one + two * 2 + five * 5 == money * 10)
//				{
//					printf("������ %d ��һ��Ӳ�ҡ�%d ������Ӳ�Һ� %d �����Ӳ�� �õ�%dԪ\n", one, two, five, money);
//					exit = 1;
//					break;
//				}
//			}
//			if (exit == 1)break;
//		}if (exit == 1)break;
//	}//����break����ѭ��д��������breakֻ�ܶ������ڵ��ǲ�ѭ���ṹ�����ã�
//
//	return 0;
//}
//д������
//int main()
//{
//	int money;
//	printf("�����Ӳ�ҵ���������> \n");
//	scanf("%d", &money);
//
//	int one, two, five;
//	for (one = 1; one < money * 10/1; one++)
//	{
//		for (two = 1; two < money * 10/2; two++)
//		{
//			for (five = 1; five < money * 10 / 5; five++)
//			{
//				if (one + two * 2 + five * 5 == money * 10)
//				{
//					printf("������ %d ��һ��Ӳ�ҡ�%d ������Ӳ�Һ� %d �����Ӳ�� �õ�%dԪ\n", one, two, five, money);
//					goto out;//��goto�����ת����Ҫ���е�λ�ã�ע��goto��ӵĴʿ�����
//				}
//			}
//		}
//	}
//	out:
//
//	return 0;
//}


//���沢����ѧ����ѧ���������λ100�ˣ���ƽ���ɼ�
//int main()
//{
//	printf("����������ѧ����ѧ���������λ100�ˣ����Եĳɼ���>>>\n\n");
//
//	int point;
//	double sum = 0;
//	int num = 1;
//	int number[100];//�������飬���ڴ����ֵ��[]��ʾ������С��һ���������޷��ı��ˣ�
//	printf("�������1��ͬѧ�ĳɼ�������ȫ��������ϣ�������-1���س�ȷ������>\n");
//	scanf("%d", &point);
//	while (point != -1)
//	{
//		number[num-1] = point;
//		sum += point;
//		num++;
//		printf("�������%d��ͬѧ�ĳɼ�������ȫ��������ϣ�������-1���س�ȷ������>\n",num);
//		scanf("%d", &point);
//	}
//
//	printf("���ڼ����У����Եȡ���\n");
//
//	if (num > 0)
//	{
//		num--;
//		double average = sum / num;
//		printf("\n\n%.2lf\n", average);//C��������%.nlf��ʾ����nλ��Ч���֣�����%.2lf��ʾ����2λ��Ч����
//	}
//
//	return 0;
//}


//���沢����n��ѧ����ƽ���ɼ�
//int main()
//{
//	int ALL;
//	printf("������Ҫ����ƽ������ѧ��������>");
//	scanf("%d", &ALL);
//
//	if (ALL > 0)
//	{
//		printf("\n����������ѧ�����Եĳɼ���>>>\n\n");
//
//		int point;
//		double sum = 0;
//		int num;
//		int number[ALL];//��C99��׼�������飬���ڴ����ֵ��[]��ʾ������С��һ���������޷��ı��ˣ�
//		for(num=1;num<=ALL;num++)
//		{
//			printf("�������%d��ͬѧ�ĳɼ���>\n", num);
//			scanf("%d", &point);
//			number[num - 1] = point;
//			sum += point;
//		}
//
//		printf("\n\n���ڼ����У����Եȡ���\n");
//
//		if (num > 0)
//		{
//			num--;
//			double average = sum / num;
//			printf("\n%.2lf\n", average);//C��������%.nlf��ʾ����nλ��Ч���֣�����%.2lf��ʾ����2λ��Ч����
//		}
//	}
//
//	return 0;
//}
//ע�����ϴ��� C99 ONLY !!!������VS��C99�Ĳ�֧�֣����Բ�����VS��������У�


//�������� ( ? : )
//int main()
//{
//	int a = 52, b = 25;
//	int c, d;
//	c = ((a > b) ? a : b);//a>b����c=a������c=b
//	d = ((a < b) ? a : b * b);//a<b����d=a������d=b*b
//	printf("%d\n", c);
//	printf("%d\n", d);
//	return 0;
//}


//#include<math.h>//������ѧ������
//int main()
//{
//	int a = pow(3, 4);//ƽ������pow(����,��)
//	double b = sqrt(3);//ƽ��������sqrt(����)
//	printf("%d\n%.2f\n", a,b);
//	return 0;
//}


//int main()
//{
//    /*
//    printf("Please input your password(Five Digits):>");
//    char c1,c2,c3,c4,c5;
//    c1 = getchar();
//    c2 = getchar();
//    c3 = getchar();
//    c4 = getchar();
//    c5 = getchar();
//    c1 += 4;
//    c2 += 4;
//    c3 += 4;
//    c4 += 4;
//    c5 += 4;
//    printf("\n\nYour changed-word is ");
//    putchar(c1);
//    putchar(c2);
//    putchar(c3);
//    putchar(c4);
//    putchar(c5);
//    putchar('.\n');
//    return 0;
//    */
//
//    /*
//    int c1,c2,c3,c4,c5;
//    printf("Please input your password(Five Digits):>");
//    scanf("%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5);
//    c1 += 4;
//    c2 += 4;
//    c3 += 4;
//    c4 += 4;
//    c5 += 4;
//    printf("\n\nYour changed-word is %c%c%c%c%c.\n",c1,c2,c3,c4,c5);
//    return 0;
//    */
//
//}


//int main(int a,int b,int c)
//{
//	a = 1234;
//	b = 4567;
//	int x = max(a % 1000);
//	int y = max(b % 1000);
//	c = x * 1000 + y;
//
//	printf("a=%d,b=%d,c=%d\n", a, b, c);//output->432765
//	return 0;
//}
//int max(int i)
//{
//	int out = (i % 10) * 100 + ((i % 100 )/ 10) * 10 + i / 100;
//	return out;
//}


//output a=3,b=7,x=8.5,y=71.82,c1='A', c2 = 'a'
//int main()
//{
//	int a, b;
//	float x, y;
//	char c1, c2;
//	scanf("a=%db=%d", &a, &b);//a=3b=7
//	printf("%d %d\n\n", a, b);
//	scanf("%f%e", &x, &y);//8.5 71.82
//	printf("%f %f\n\n", x, y);
//	scanf("%c%c", &c1, &c2);//
//	printf("%c %c\n\n",c1, c2);
//	return 0;
//}


//ʮ����������С���������ð������
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int a[10] = { 55,66,985,211,365,110,120,119,12,1 };
//    int j = 0;
//    int tmp = 0;
//    int m = sizeof(a) / sizeof(a[0]);  //s�����С
//    for (i = 0; i < m - 1; i++)    //�Ƚ�m-1��
//    {
//        for (j = 0; j < m - i - 1; j++)   // ���һ�αȽ�a[m-i-1]��a[m-i-2]
//        {
//            if (a[j] > a[j + 1])    //���a[j]��a[j+1]���򽻻�����
//            {
//                tmp = a[j + 1];
//                a[j + 1] = a[j];
//                a[j] = tmp;
//            }
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        printf(" %d ", a[i]);   //��ӡ
//    }
//    printf(" \n ");
//    return 0;
//}


//ʮ����������С����������Զ���sort��������
//#include<stdio.h>
//void sort(int a[], int m)
//{
//    int i = 0;
//    int j = 0;
//    int tmp = 0;
//    for (i = 0; i < m - 1; i++)
//    {
//        for (j = 0; j < m - i - 1; j++)
//        {
//            if (a[j] > a[j + 1])
//            {
//                tmp = a[j + 1];
//                a[j + 1] = a[j];
//                a[j] = tmp;
//            }
//        }
//    }
//}
//int main()
//{
//    int i = 0;
//    int a[10] = { 55,66,985,211,365,110,120,119,12,1 };
//    int m = sizeof(a) / sizeof(a[0]);
//    sort(a, m);
//    for (i = 0; i < m; i++)
//    {
//        printf(" %d ", a[i]);
//    }
//    printf(" \n ");
//    return 0;
//}


//��ά����
// ���磺
//int main()
//{
//	int a[][5] = { {0,1,2,3,4},{1,2,3,4,5} };//��������ʡ�ԣ�����������ʡ��
//}


//����Ĵ�С
//int main()
//{
//	int a[] = { 99,66,21,1,3,5,6,4,8,55,62,34,11, };//���������һ�������ǲ�Ӱ�����ı������ģ�ֻ��һ�ַ�����ڼ��������ϰ�߶���
//	int length = sizeof(a) / sizeof(a[0]);
//	printf("a[]������һ��װ�� %d ����\n", length);
//}


//���������벢�洢��һ�������������Ϻ��ܴ��������ҵ���Ҫ������λ��
//int search(int key, int a[], int length)
//{
//	int ret = -1;
//	for (int i = 0; i < length; i++)
//	{
//		if (a[i] == key)
//		{
//			ret = i;
//			break;
//		}
//	}
//	return ret;
//}
//int main(void)
//{
//	//��������
//	int num[100];
//
//	//���������
//	int m=0;
//	printf("����������洢�ķǸ�������ÿ��������������س��������������Ϊ100��������ֹ���룬������-1���س�����>>>\n");
//	for (int i = 0; m >= 0; i++)
//	{
//		scanf("%d", &m);
//		num[i] = m;
//	}
//
//	//����Ķ�ȡ
//	int n=0;
//	int loc;
//	while(n >= 0)
//	{
//		printf("\n-*����λ�ò�ѯ*-\n������һ�������ڻز������������ֹ���룬������-1���س�����>>> \n");
//		scanf("%d", &n);
//
//		if (n == -1)		goto out;
//
//		loc = search(n, num, sizeof(num) / sizeof(num[0]));
//
//		if (loc != -1)		printf("%d �ڵ� %d ��λ���ϡ�\n", n, loc + 1);
//		else	printf("%d ������......\n", n);
//	}
//	out:
//
//	return 0;
//}


//����
//��һ��
//int main()
//{
//    int num;
//    scanf("%d", &num);
//    int n[100];
//    for (int i = 0; i < num; i++)
//    {
//        scanf("%d", &n[i]);
//    }
//
//    for (int x = 1; x < num; x++)
//    {
//        for (int y = x; y > 0; y--)
//        {
//            if (n[y] < n[y - 1])
//            {
//                int z = n[y - 1];
//                n[y - 1] = n[y];
//                n[y] = z;
//            }
//            else
//                break;
//        }
//    }
//
//    printf("\n");
//    for (int t = 0; t < num; t++)
//    {
//        printf("%d ", n[t]);
//    }
//    printf("\n");
//
//    return 0;
//}
//������
//int BubbleSorting(int num, int n[])
//{
//    for (int x = 1; x < num; x++)
//    {
//        for (int y = x; y > 0; y--)
//        {
//            if (n[y] < n[y - 1])
//            {
//                int z = n[y - 1];
//                n[y - 1] = n[y];
//                n[y] = z;
//            }
//            else
//                break;
//        }
//    }
//}
//int main()
//{
    /*int num;
    printf("�������ֵĸ���������10000����\n");
    scanf("%d", &num);
    int n[10000];
    printf("����������֣�\n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &n[i]);
    }*/
//
//    BubbleSorting(num, n);
//
    //printf("\n��С��������Ϊ��\n");
    //for (int t = 0; t < num; t++)
    //{
    //    printf("%d ", n[t]);
    //}
    //printf("\n");

    //return 0;
//}
//������ð�������鱾���ݣ��ֳ� ���ݷ���
//int main()
//{
//    int num;
//    printf("�������ֵĸ���������10000����\n");
//    scanf("%d", &num);
//    int n[10000];
//    printf("����������֣�\n");
//    for (int i = 0; i < num; i++)
//    {
//        scanf("%d", &n[i]);
//    }
//
//    for (int j = 0; j < num - 1; j++)
//        for (int i = 0; i < num - 1 - j; i++)
//            if(n[i]>n[i+1])
//            {
//                int t = n[i + 1];
//                n[i + 1] = n[i];
//                n[i] = t;
//            }
//
//    printf("\n��С��������Ϊ��\n");
//  for (int t = 0; t < num; t++)
//  {
//    printf("%d ", n[t]);
//  }
//    printf("\n");
//    return 0;
//}


//��С��������
// ��д���룺
//int BubbleSortingMinToMax(int num1, int num2, int n[])
//{
//    for (int x = num1; x < num2; x++)
//    {
//        for (int y = x; y >= num1-1; y--)
//        {
//            if (n[y] < n[y - 1])
//            {
//                int z = n[y];
//                n[y] = n[y - 1];
//                n[y - 1] = z;
//            }
//        }
//    }
//}
// ð�ݷ���
//int BubbleSortingMinToMax(int num1, int num2, int n[])
//{
//    int num = num2 - num1;
//    for (int x = 0; x < num; x++)
//    {
//        for (int y = num1 - 1; y < num2 - 1 - x; y++)
//        {
//            if (n[y] > n[y + 1])
//            {
//                int z = n[y + 1];
//                n[y + 1] = n[y];
//                n[y] = z;
//            }
//        }
//    }
//}
//int main()
//{
//    int n[] = { 1,165,9,16545,131,4564,166,13,22,99 };
//    int num = 10;
//
//    BubbleSortingMinToMax(2, 8, n);
//
//    for (int t = 0; t < num; t++)
//    {
//        printf("%d ", n[t]);
//    }
//    printf("\n");
//}
// 
// 
//�Ӵ�С����
// ��д���룺
//int BubbleSortingMaxToMin(int num1, int num2, int n[])
//{
//    for (int x = num1; x < num2; x++)
//    {
//        for (int y = x; y >= num1; y--)
//        {
//            if (n[y] > n[y - 1])
//            {
//                int z = n[y];
//                n[y] = n[y - 1];
//                n[y - 1] = z;
//            }
//        }
//    }
//}
// ð�ݷ���
//int BubbleSortingMaxToMin(int num1, int num2, int n[])
//{
//    int num = num2 - num1;
//    for (int x = 0; x < num; x++)
//    {
//        for (int y = num1 - 1; y < num2 -1 - x; y++)
//        {
//            if (n[y] < n[y + 1])
//            {
//                int z = n[y + 1];
//                n[y + 1] = n[y];
//                n[y] = z;
//            }
//        }
//    }
//}
//int main()
//{
//    int n[] = { 1,9,165,16545,131,4564,166,13,22,99 };
//    int num = 10;
//
//    BubbleSortingMaxToMin(2, 8, n);
//
//    for (int t = 0; t < num; t++)
//    {
//        printf("%d ", n[t]);
//    }
//    printf("\n");
//}
//ʵ����
//���ֶ�����
//int BubbleSortingMaxToMin(int num1, int num2, int n[]) //�ӵ�num1���num2��֮��ʹ�����ݷ��Ӵ�С����
//{
//    int num = num2 - num1;
//    for (int x = 0; x < num; x++)
//    {
//        for (int y = num1 - 1; y < num2 - 1 - x; y++)
//        {
//            if (n[y] < n[y + 1])
//            {
//                int z = n[y + 1];
//                n[y + 1] = n[y];
//                n[y] = z;
//            }
//        }
//    }
//}
//int BubbleSortingMinToMax(int num1, int num2, int n[]) //�ӵ�num1���num2��֮��ʹ�����ݷ���С��������
//{
//    int num = num2 - num1;
//    for (int x = 0; x < num; x++)
//    {
//        for (int y = num1 - 1; y < num2 - 1 - x; y++)
//        {
//            if (n[y] > n[y + 1])
//            {
//                int z = n[y + 1];
//                n[y + 1] = n[y];
//                n[y] = z;
//            }
//        }
//    }
//}
//int main()
//{
//    int n = 7;
//    int length = 11;
//    int a[] = { 18,58,66,77,31,68,69,34,70,63,0 };
//
//    float average = 0;  // ���ڱ���ǰn��Ԫ�ص�ƽ��ֵ
//
//     // Add your code here
//
//    if (n % 2 == 1)
//    {
//        int m = (n + 1) / 2;
//        BubbleSortingMaxToMin(1, m - 1, a);
//        BubbleSortingMinToMax(m + 1, n, a);
//    }
//    else if (n % 2 == 0)
//    {
//        int m = n / 2;
//        BubbleSortingMaxToMin(1, m, a);
//        BubbleSortingMinToMax(m + 1, n, a);
//    }
//
//    int sum = 0;
//    for (int e = 0; e < n; e++)   sum += a[e];
//    average = (float)sum / n;
//
//
//    for (int i = 0; i < length; i++) {
//        printf("%d ", a[i]);
//    }
//    printf("\nƽ��ֵ:%0.3f\n", average);
//}


//����������(�������ź����)
//int search(int key, int a[], int len)
//{
//    int ret = -1;
//    int left = 0;
//    int right = len - 1;
//    while (right > left)
//    {
//        int mid = (left + right) / 2;
//        if (a[mid] == key)
//        {
//            ret = mid;
//            break;
//        }
//        else if (a[mid] > key)
//            right = mid - 1;
//        else if (a[mid] < key)
//            left = mid + 1;
//    }
//
//    return ret;
//}
//int BubbleSortingMinToMax(int num1, int num2, int n[]) //�ӵ�num1���num2��֮��ʹ�����ݷ���С��������
//{
//    int num = num2 - num1;
//    for (int x = 0; x < num; x++)
//        for (int y = num1 - 1; y < num2 - 1 - x; y++)
//            if (n[y] > n[y + 1])
//            {
//                int z = n[y + 1];
//                n[y + 1] = n[y];
//                n[y] = z;
//            }
//}
//int main()
//{
//    printf("Input the amount[]:(the max number of the amount is 100 & input 0 to stop)\n");
//    int amount[100];
//    int num = 0;
//    for (num = 0; num < 100; num++)
//    {
//        int t;
//        scanf("%d", &t);
//
//        if (t == 0) break;
//        amount[num] = t;
//    }
//    BubbleSortingMinToMax(1, num, amount);
//    printf("\n\namount:\n");
//    for (int i = 0; i < num; i++)
//        printf("%d ", amount[i]);
//    printf("\n\n");
//
//    int key;
//    printf("Input the number which you wanna find:");
//    scanf("%d", &key);
//    int r = search(key, amount, num);
//    if (r == -1)
//        printf("\nNo this number!\n");
//    else if (r >= 0)
//        printf("This number is No.%d!\n", r + 1);
//    return 0;
//}









































