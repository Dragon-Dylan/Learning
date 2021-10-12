#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int outside = 2020;//全局变量，在所有的源文件都起作用，效果见源文件中 学习C语言.c 的第195-200行

//三位数的倒序
// 
//int main()
//{
//	int a, b, c;
//	printf("请输入3个单数字（俩个数之间用空格隔开）：>\n");
//	scanf("%d %d %d", &a, &b, &c); 
//	printf("%d %d %d\n", c, b, a);
//	return 0;
//}


//将一个三位数倒着写
// 
//我写的代码：
//int main()
//{
//	int number;
//	printf("你想倒着写的三位数：>\n");
//	scanf("%d", &number);
//
//	int number1, number2, number3;
//	number1 = number / 100;
//	number2 = number / 10;
//	number3 = number / 1;
//
//	int result;
//	result = (number3 - number2 * 10) * 100 + (number2 - number1 * 10) * 10 + number1;
//	printf("输出：%d\n", result);
//	return 0;
//}
//教授写的代码：
//int main(int argc,char **argv)
//{
//	int i = 0;
//	printf("你想倒着写的三位数：>\n");
//	scanf("%d", &i);
//	printf("输出：%d\n", (i % 10) * 100 + (i % 100 / 10) * 10 + i / 100);
//	return 0;
//}


// 计算时间差
// 
// 我写的代码：
//int main()
//{
//    int hour1, minute1;
//    int hour2, minute2;
//
//    printf("初始时间：>\n");
//    scanf("%d:%d", &hour1, &minute1);
//    printf("终止时间：>\n");
//    scanf("%d:%d", &hour2, &minute2);
//
//    int a, b, c, d;
//    a = 60 + minute2 - minute1;
//    b = hour2 - hour1 - 1;
//    c = minute2 - minute1;
//    d = hour2 - hour1;
//
//    if (minute2 < minute1)
//        printf("相差时间为：%d:%d\n", b, a);
//    else
//        printf("相差时间为：%d:%d\n", d, c);
//    return 0;
//}
//教授写的代码：
//int main()
//{
//	int hour1,minute1;
//	int hour2,minute2;
//	
//	printf("初始时间：>\n");
//	scanf("%d:%d",&hour1,&minute1);
//	
//	printf("终止时间：>\n");
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
//	printf("时间差为：> %d 小时 %d 分钟\n",ih,im);
//	return 0;
// } 


//比较俩个数的大小
// 
//int main()
//{
//	int a,b;
//	printf("请输入俩个想要比较的数(中间用逗号隔开)：>\n");
//	scanf("%d,%d",&a,&b);
//	int c;
//	c = max(a, b);
//	printf("最大数是：> %d\n", c);
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


//比较三个数的大小
// 
//int main()
//{
//	int a, b, c;
//	printf("请输入三个想要比较的数(中间用逗号隔开)：>\n");
//	scanf("%d,%d,%d", &a, &b, &c);
//	int d;
//	d = max(a, b, c);
//	printf("最大数是：> %d\n", d);
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


//在几个人的成绩中选出最高分
// 
//int main()
//{
//	int SUM;
//	printf("需要输入的同学数量：>\n");
//	scanf("%d", &SUM);
//
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	while (i < SUM)
//	{
//		printf("第%d名同学的成绩（四舍五入为整数后再输入）：>\n", ++i);
//		scanf("%d", &b);
//		a = max(a, b);
//	}
//	printf("这%d名同学中最高分为：>%d\n", SUM, a);
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


//超市找零
//
//int main()
//{
//	double price;
//	double bill;
//
//	printf("请输入顾客要付的金额：>\n");
//	scanf("%lf", &price);
//
//	printf("请输入顾客给的面额：>\n");
//	scanf("%lf", &bill);
//
//	double overprice = price - bill;
//	double returnprice = bill - price;
//	if (price > bill)
//	{
//		printf("顾客还需要支付的金额为：%lf\n", overprice);
//	}
//	else
//		printf("需要找零：%lf\n", returnprice);
//
//	return 0;
//}


//判断四位数一下的正整数的位数
//
//int main()
//{
//	int x;
//	int n;
//
//	printf("请输入一个四位数一下的正整数：>\n");
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
//	printf("输入的数字为 %d位数\n", n);
//	return 0;
//}


//判断一个十位数一下的正整数的位数
//
//int main()
//{
//	int x=0;
//	int i=0;
//
//	printf("请输入一个十位数一下的正整数：>\n");
//	scanf("%d", &x);
//
//	//while循环写法
//	//i++;
//	//x = x / 10;
//	///*while循环前重复这段是为了避免0是0位数的结果*/
//	//while (x > 0)
//	//{
//	//	i++;
//	//	x = x / 10;
//	//}
//
//	//do…while循环写法
//	do
//	{
//		i++;
//		x = x / 10;
//	} while (x > 0);
//	
//	printf("输入的数字为 %d位数\n", i);
//	return 0;
//}


//如何用代码计算n!(n的阶乘)
// 
// while循环写法1；
//int main()
//{
//	int n;//阶乘的层数
//
//	printf("请输入你想计算的阶乘(仅填阶乘的数)：>\n");
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
// for循环写法：
// 正向计算：n!=1*2*…*n
//int main()
//{
//	int n;//阶乘的层数
//
//	printf("请输入你想计算的阶乘(仅填阶乘的数)：>\n");
//	scanf("%d", &n);
//
//	int a = 1;//阶乘的初始值为1
//	int b = 1;
//	for (a = 1; a <= n; a++)
//	{
//		b *= a;//等价于 b = b*a
//	}
//
//	printf("%d!=%d\n",n, b);
//	return 0;
//}
//逆向计算：n!=n*(n-1)*…*1
//int main()
//{
//	int num;
//
//	printf("请输入你想计算的阶乘(仅填阶乘的数)：>\n");
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


//switch…case…（选择结构）的用法
// 
//百分制的分数能得到A、B、C、D哪个成绩等级
//int main()
//{
//	int i;
//	printf("你的分数是（百分制）：>\n");
//	scanf("%d", &i);
//
//	int t = i / 10;
//	if (i <= 100 && i >= 0)
//	{
//		printf("你的成绩等级为：>\n");
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
//		printf("继续加油！！！\n");
//	}
//	else
//		printf("请输入正确的成绩，谢谢！！！\n");
//
//	return 0;
//}
//
//输出月份对应的英文
//int main()
//{
//	int month;
//	printf("请输入月份对应的数字：>\n");
//	scanf("%d", &month);
//
//	if (month >= 1 && month <= 12)
//	{
//		switch (month)
//		{
//		case 1:printf("%d月的英文是January\n", month);break;
//		case 2:printf("%d月的英文是February\n", month);break;
//		case 3:printf("%d月的英文是March\n", month);break;
//		case 4:printf("%d月的英文是April\n", month);break;
//		case 5:printf("%d月的英文是May\n", month);break;
//		case 6:printf("%d月的英文是June\n", month);break;
//		case 7:printf("%d月的英文是July\n", month);break;
//		case 8:printf("%d月的英文是August\n", month);break;
//		case 9:printf("%d月的英文是September\n", month);break;
//		case 10:printf("%d月的英文是October\n", month);break;
//		case 11:printf("%d月的英文是November\n", month);break;
//		case 12:printf("%d月的英文是December\n", month);break;
//		}
//	}
//	else
//		printf("请输入正确的月份数字\n");
//
//	return 0;
//}


//求分数的平均值
//int main()
//{
//	float score=0;
//	int num = 0;
//	float sum = 0;
//	
//	do
//	{
//		num++;
//		printf("第%d位同学的成绩位\n(若要结束输入，请在成绩栏输入“-1”以结束程序)：>\n", num);
//		scanf("%f", &score);
//		if (score >= 0)
//		{
//			sum += score;
//		}
//		else if (score == -1)
//			break;
//			//break 跳出循环
//			//continue 跳过正在进行的循环剩下的语句进入下一轮循环
//		else
//		{
//			printf("数据出现错误！！！\n");
//			sum = 0;
//			break;
//		}
//	} while (score >= 0);
//
//	if (sum != 0)
//	{
//		float average = sum / --num;
//		printf("这些同学的成绩的平均分为：%f\n", average);
//	}
//	else
//	{
//		printf("提示：数据输入时先检查后再输入！\n");
//		printf("请重试......\n");
//	}
//
//	return 0;
//}


//猜数游戏
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	srand(time(0));
//	int number = rand() % 100 + 1;
//	int count = 0;
//	int a = 0;
//
//	printf("我已经想好了一个1至100的数\n请您猜猜我的数是多少？\n\n");
//	do
//	{
//		printf("请在1至100中选数来猜吧！\n");
//		scanf("%d", &a);
//		count++;
//		if (a > number)
//		{
//			printf("您猜的数大了\n\n");
//		}
//		else if (a < number)
//		{
//			printf("您猜的数小了\n\n");
//		}
//	} while (a != number);
//	printf("\n恭喜您答对了！！！\n");
//
//	if (count == 1)
//	{
//		printf("太厉害了吧，你只猜了1次就猜对了！！！\n");
//	}
//	else
//		printf("很遗憾，你用了%d机会才猜出来，不过已经很棒了！\n", count);
//	return 0;
//}


//判断一个数是不是素数（又称质数，指一个大于1且除了1和它本身以外不能被其他正整数整除的正整数）
//int main()
//{
//	int x;
//
//	printf("请输入你想判断的正整数：>\n");
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
//		printf("%d 是 素数\n", x);
//	}
//	else
//	{
//		printf("%d 不是 素数\n", x);
//	}
//
//	return 0;D
//}


//输出x以内的数有几个素数和几个合数
//int main()
//{
//	int num;
//	printf("\n你想求的x以内的全部数素数合数判断结果，请输入x\n");
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
//			printf("%d 既不是素数，又不是合数\n", x);
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
//				printf("%d 是 素数\n", x);
//			}
//			else
//			{
//				b++;
//				printf("%d 是 合数\n", x);
//			}
//		}
//
//		x++;
//	}
//
//	printf("\n%d 个数里面一共有 %d 个素数\n", num, a);
//	printf("%d 个数里面一共有 %d 个合数\n", num, b);
//	printf("还有一个：1 既不是素数，又不是合数\n");
//
//	return 0;
//}


//输出x以内的数所有素数
//int main()
//{
//	int num;
//	printf("\n你想求的x以内的全部数素数合数判断结果，请输入x\n");
//	scanf("%d", &num);
//	printf("\n");
//
//	printf("%d以内的素数有：",num);	
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
//	printf("\n\n%d 个数里面一共有 %d 个素数\n", num, y);
//	return 0;
//}


//
//int main()
//{
//
//
//	return 0;
//}









