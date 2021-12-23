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


//求两个数m、n的最大公约数
// 方法一（枚举法）：
//int main()
//{
//	int a, b, min;
//	printf("请输入你想要求最大公约数的两个数(两个数之间用逗号隔开)：>  ");
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
//	printf("\n\n这%dhe%d数的最大公约数为：> %d",a,b,ret);
//	return 0;
//}
// 方法二（使用 辗转相除法（欧几里德算法） 求最大公约数）：
//int main()
//{
//	int m, n;
//	printf("请输入你想要求最大公约数的两个数(两个数之间用逗号隔开)：>  ");
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
//	/*辗转相除法（欧几里德算法）*/
//	int r = m % n;
//	while (r != 0)
//	{
//		m = n;
//		n = r;
//		r = m % n;
//	}
//	
//	printf("\n\n这两个数的最大公约数为：> %d\n", n);
//	return 0;
//}


//判断某一年是闰年还是非闰年
//int main()
//{
//	int year;
//	printf("请输入你想判断是不是闰年的年份：>  ");
//	scanf("%d", &year);
//
//	if (year % 4 == 0)
//	{
//		if (year % 100 != 0)
//		{
//			printf("\n\n%d年 是闰年", year);
//		}
//		else
//		{
//			if (year % 400 == 0)
//			{
//			printf("\n\n%d年 是闰年", year);
//			}
//			else
//				printf("\n\n%d年 是平年", year);
//		}
//	}
//	else
//		printf("\n\n%d年 是平年", year);
//
//	return 0;
//}


//用一角、两角和五角的硬币凑出10元以下的整数金额（所有情况）
//int main()
//{
//	int money;
//	printf("你想凑硬币的总金额：> \n");
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
//					printf("可以用 %d 个一角硬币、%d 个两角硬币和 %d 个五角硬币 得到%d元\n", one, two, five, money);
//				}
//			}
//		}
//	}
//
//	return 0;
//}


//用一角、两角和五角的硬币凑出10元以下的整数金额（单一方案）
//写法一：
//int main()
//{
//	int money;
//	printf("你想凑硬币的总整数金额：> \n");
//	scanf("%1d", &money);//%nd表示只读取输入数的前n位
//
//	int one, two, five;
//	int exit = 0;//通过exit的值跳出循环
//	for (one = 1; one < money * 10/1; one++)
//	{
//		for (two = 1; two < money * 10/2; two++)
//		{
//			for (five = 1; five < money * 10 / 5; five++)
//			{
//				if (one + two * 2 + five * 5 == money * 10)
//				{
//					printf("可以用 %d 个一角硬币、%d 个两角硬币和 %d 个五角硬币 得到%d元\n", one, two, five, money);
//					exit = 1;
//					break;
//				}
//			}
//			if (exit == 1)break;
//		}if (exit == 1)break;
//	}//接力break跳出循环写法（由于break只能对它所在的那层循环结构起作用）
//
//	return 0;
//}
//写法二：
//int main()
//{
//	int money;
//	printf("你想凑硬币的总整数金额：> \n");
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
//					printf("可以用 %d 个一角硬币、%d 个两角硬币和 %d 个五角硬币 得到%d元\n", one, two, five, money);
//					goto out;//用goto语句跳转到想要运行的位置，注：goto后接的词可自设
//				}
//			}
//		}
//	}
//	out:
//
//	return 0;
//}


//储存并计算学生（学生人数最大位100人）的平均成绩
//int main()
//{
//	printf("下面请输入学生（学生人数最大位100人）各自的成绩：>>>\n\n");
//
//	int point;
//	double sum = 0;
//	int num = 1;
//	int number[100];//建立数组，用于储存各值，[]表示容量大小（一旦创建就无法改变了）
//	printf("请输入第1名同学的成绩（若已全部输入完毕，请输入-1并回车确定）：>\n");
//	scanf("%d", &point);
//	while (point != -1)
//	{
//		number[num-1] = point;
//		sum += point;
//		num++;
//		printf("请输入第%d名同学的成绩（若已全部输入完毕，请输入-1并回车确定）：>\n",num);
//		scanf("%d", &point);
//	}
//
//	printf("正在计算中，请稍等……\n");
//
//	if (num > 0)
//	{
//		num--;
//		double average = sum / num;
//		printf("\n\n%.2lf\n", average);//C语言中用%.nlf表示保留n位有效数字，比如%.2lf表示保留2位有效数字
//	}
//
//	return 0;
//}


//储存并计算n个学生的平均成绩
//int main()
//{
//	int ALL;
//	printf("请输入要计算平均数的学生个数：>");
//	scanf("%d", &ALL);
//
//	if (ALL > 0)
//	{
//		printf("\n下面请输入学生各自的成绩：>>>\n\n");
//
//		int point;
//		double sum = 0;
//		int num;
//		int number[ALL];//用C99标准建立数组，用于储存各值，[]表示容量大小（一旦创建就无法改变了）
//		for(num=1;num<=ALL;num++)
//		{
//			printf("请输入第%d名同学的成绩：>\n", num);
//			scanf("%d", &point);
//			number[num - 1] = point;
//			sum += point;
//		}
//
//		printf("\n\n正在计算中，请稍等……\n");
//
//		if (num > 0)
//		{
//			num--;
//			double average = sum / num;
//			printf("\n%.2lf\n", average);//C语言中用%.nlf表示保留n位有效数字，比如%.2lf表示保留2位有效数字
//		}
//	}
//
//	return 0;
//}
//注：以上代码 C99 ONLY !!!（由于VS对C99的不支持，所以不能在VS软件上运行）


//条件运算 ( ? : )
//int main()
//{
//	int a = 52, b = 25;
//	int c, d;
//	c = ((a > b) ? a : b);//a>b成立c=a，否则c=b
//	d = ((a < b) ? a : b * b);//a<b成立d=a，否则d=b*b
//	printf("%d\n", c);
//	printf("%d\n", d);
//	return 0;
//}


//#include<math.h>//调用数学函数库
//int main()
//{
//	int a = pow(3, 4);//平方函数pow(底数,幂)
//	double b = sqrt(3);//平方根函数sqrt(底数)
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


//十个正整数从小到大的排序（冒泡排序）
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int a[10] = { 55,66,985,211,365,110,120,119,12,1 };
//    int j = 0;
//    int tmp = 0;
//    int m = sizeof(a) / sizeof(a[0]);  //s数组大小
//    for (i = 0; i < m - 1; i++)    //比较m-1次
//    {
//        for (j = 0; j < m - i - 1; j++)   // 最后一次比较a[m-i-1]与a[m-i-2]
//        {
//            if (a[j] > a[j + 1])    //如果a[j]比a[j+1]大则交换内容
//            {
//                tmp = a[j + 1];
//                a[j + 1] = a[j];
//                a[j] = tmp;
//            }
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        printf(" %d ", a[i]);   //打印
//    }
//    printf(" \n ");
//    return 0;
//}


//十个正整数从小到大的排序（自定义sort函数排序）
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


//二维数组
// 例如：
//int main()
//{
//	int a[][5] = { {0,1,2,3,4},{1,2,3,4,5} };//行数可以省略，但列数不能省略
//}


//数组的大小
//int main()
//{
//	int a[] = { 99,66,21,1,3,5,6,4,8,55,62,34,11, };//数组内最后一个逗号是不影响程序的编译结果的，只是一种方便后期加入数组的习惯而已
//	int length = sizeof(a) / sizeof(a[0]);
//	printf("a[]数组里一共装有 %d 个数\n", length);
//}


//将数字输入并存储在一个数组里，输入完毕后能从数组中找到想要的数字位置
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
//	//构建数组
//	int num[100];
//
//	//数组的输入
//	int m=0;
//	printf("请输入你想存储的非负整数（每个数字输入完请回车；整数个数最大为100；若想终止输入，请输入-1并回车）：>>>\n");
//	for (int i = 0; m >= 0; i++)
//	{
//		scanf("%d", &m);
//		num[i] = m;
//	}
//
//	//数组的读取
//	int n=0;
//	int loc;
//	while(n >= 0)
//	{
//		printf("\n-*数字位置查询*-\n请输入一个你想在回查的数（若想终止输入，请输入-1并回车）：>>> \n");
//		scanf("%d", &n);
//
//		if (n == -1)		goto out;
//
//		loc = search(n, num, sizeof(num) / sizeof(num[0]));
//
//		if (loc != -1)		printf("%d 在第 %d 个位置上。\n", n, loc + 1);
//		else	printf("%d 不存在......\n", n);
//	}
//	out:
//
//	return 0;
//}


//排序
//法一：
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
//法二：
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
    printf("输入数字的个数（少于10000）：\n");
    scanf("%d", &num);
    int n[10000];
    printf("逐个输入数字：\n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &n[i]);
    }*/
//
//    BubbleSorting(num, n);
//
    //printf("\n从小到大排序为：\n");
    //for (int t = 0; t < num; t++)
    //{
    //    printf("%d ", n[t]);
    //}
    //printf("\n");

    //return 0;
//}
//法三：冒泡排序（书本内容，又称 起泡法）
//int main()
//{
//    int num;
//    printf("输入数字的个数（少于10000）：\n");
//    scanf("%d", &num);
//    int n[10000];
//    printf("逐个输入数字：\n");
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
//    printf("\n从小到大排序为：\n");
//  for (int t = 0; t < num; t++)
//  {
//    printf("%d ", n[t]);
//  }
//    printf("\n");
//    return 0;
//}


//从小到大排序
// 自写代码：
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
// 冒泡法：
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
//从大到小排序
// 自写代码：
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
// 冒泡法：
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
//实例：
//（分段排序）
//int BubbleSortingMaxToMin(int num1, int num2, int n[]) //从第num1项到第num2项之间使用起泡法从大到小排序
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
//int BubbleSortingMinToMax(int num1, int num2, int n[]) //从第num1项到第num2项之间使用起泡法从小到大排序
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
//    float average = 0;  // 用于保存前n个元素的平均值
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
//    printf("\n平均值:%0.3f\n", average);
//}


//二分搜索法(必须是排好序的)
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
//int BubbleSortingMinToMax(int num1, int num2, int n[]) //从第num1项到第num2项之间使用起泡法从小到大排序
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









































