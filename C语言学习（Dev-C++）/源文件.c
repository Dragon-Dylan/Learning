#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<stdlib.h>
#include<malloc.h>

//int main()
//{
//    int hour1, minute1;
//    int hour2, minute2;
//
//    printf("初始时间：>\n");
//    scanf("%d:%d",&hour1,&minute1);
//    printf("终止时间：>\n");
//    scanf("%d:%d",&hour2,&minute2);
//
//    int a, b,c,d;
//    a = 60 + minute2 - minute1;
//    b = hour2 - hour1 - 1;
//    c = minute2 - minute1;
//    d = hour2 - hour1;
//
//    if (minute2 < minute1)
//        printf("相差时间为：%d:%d\n",b,a);
//    else
//        printf("相差时间为：%d:%d\n",d,c);
//    return 0;
//}


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


//int main()
//{
//	printf("************************\n");
//	printf("     Hello World!!!\n");
//	printf("************************\n\n\n");
//	printf("************************\n\n");
//	printf("     Hello World!!!\n\n");
//	printf("************************\n");
//	return 0;
//}

//int main()
//{
//	printf("******\n");
//	printf("  ******\n");
//	printf("    ******\n");
//	printf("      ******\n");
//	printf("        ******\n");
//	printf("          ******\n");
//	return 0;
//}

//int main()
//{
//	int a,b,c;
//	printf("请输入三个想要比较的数(中间用逗号隔开)：>\n");
//	scanf("%d,%d,%d",&a,&b,&c);
//	int d;
//	d = max(a, b,c);
//	printf("最大数是：> %d\n", d);
//	return 0;
//}
//int max(int x,int y,int z)
//{
//	int m;
//	if(x>y)
//	{
//		m=x;
//	}
//	else
//		m=y;
//
//	int n;
//	if(m>z)
//	{
//		n=m;
//	}
//	else
//		n=z;
//}


//int main()
//{
//	int t,i;
//	t=1;
//	i=2;
//	while(i<=5)
//	{
//		t=t*i;
//		i=i+1;
//	}
//	printf("%d\n",t);
//	return 0;
//}


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
//		printf("第%d名同学的成绩：>\n", ++i);
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

//int main()
//{
//	int money;
//	printf("你想凑硬币的总金额：> \n");
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
//				}
//			}
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	printf("下面请输入学生（学生人数最大位100人）各自的成绩：>>>\n\n");
//
//	int point;
//	double sum = 0;
//	int num = 1;
//	int number[100];//建立数组，用于储存各值
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
//		int number[ALL];//建立数组，用于储存各值，[]表示容量大小（一旦创建就无法改变了）
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
//注：以上代码 C99 ONLY !!!


//int main()
//{
//	int a,b,c,max;
//
//	scanf("%d,%d,%d",&a,&b,&c);
//
//	int i;
//	if(a>b && b>c)
//		i=1;
//	else if(a>c && c>b)
//		i=2;
//	else if(b>a && a>c)
//		i=3;
//	else if(b>c && c>a)
//		i=4;
//	else if(c>b && b>a)
//		i=5;
//	else if(c>a && a>b)
//		i=6;
//
//	switch(i)
//	{
//		case 1:max=a;break;
//		case 2:max=a;break;
//		case 3:max=b;break;
//		case 4:max=b;break;
//		case 5:max=c;break;
//		case 6:max=c;break;
//	}
//
//	printf("max(%d,%d,%d)=%d\n",a,b,c,max);
//	return 0;
// }


//??????
/*
int main()
{
	int x,a;
	x=(a=4,12);//C语言里私用逗号运算符的赋值语句中，只把最后一个逗号后面的值赋值给变量
	printf("%d\n",x);
	return 0;
}
*/

//??????
/*
int main()
{
	int x,a;
	x=a=4,6*2;
	printf("%d\n",x);
	return 0;
}
*/


//输入三个整数，并判断是否构成直角三角形
//int main()
//{
//
//	int a,b,c,result;
//	scanf("%d,%d,%d",&a,&b,&c);
//
//	int i,l1,l2,l3;
//	if(a>b && a>c)
//		i=1;
//	else if(b>c && b>a)
//		i=2;
//	else if(c>a && c>b)
//		i=3;
//	switch(i)
//	{
//		case 1:l1=a,l2=b,l3=c;break;
//		case 2:l1=b,l2=a,l3=c;break;
//		case 3:l1=c,l2=a,l3=b;break;
//	}
//
//	if( l1*l1 == (l2*l2+l3*l3) )
//		result=1;
//	else
//		result=0;
//
//	printf("%d\n",result);
//	return 0;
//}


//
//int main()
//{
//	int odd,even,i,n;
//
//	scanf("%d",&n);
//	odd=0;
//	even=0;
//	for(i=2;i<=n;i++)
//	{
//		if(i%2 == 1)
//			odd += i;
//		else if(i%2 == 0)
//			even += i;
//	}
//
//	printf("sum of odd = %d   ",odd);/*奇数之和*/
//	printf("sum of even = %d\n",even);/*偶数之和*/
//	return 0;
//}



//#include<stdio.h>
//#include<math.h>
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
//    printf("\n");
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
//    return 0;
//    */
//
//    /*
//    printf("Please input your password(Five Digits):>");
//    char c1,c2,c3,c4,c5;
//    c1 = getchar()+4;
//    c2 = getchar()+4;
//    c3 = getchar()+4;
//    c4 = getchar()+4;
//    c5 = getchar()+4;
//    printf("\nYour changed-word is ");
//    putchar(c1);
//    putchar(c2);
//    putchar(c3);
//    putchar(c4);
//    putchar(c5);
//    return 0;
//    */
//
//    /*
//    printf("Please input your password(Five Digits):>");
//    char c1,c2,c3,c4,c5;
//    c1 = getchar();
//    c2 = getchar();
//    c3 = getchar();
//    c4 = getchar();
//    c5 = getchar();
//    printf("\nYour changed-word is ");
//    putchar(c1+4);
//    putchar(c2+4);
//    putchar(c3+4);
//    putchar(c4+4);
//    putchar(c5+4);
//    return 0;
//    */
//
//    /*
//    char c[5];
//    printf("Please input your password(Five Digits):>");
//    scanf("%c%c%c%c%c",&c[0],&c[1],&c[2],&c[3],&c[4]);
//    printf("\nYour changed-word is ");
//    for(int i=0;i<5;i++)
//    {
//    	printf("%c",c[i]+4);
//    }
//    return 0;
//    */
//
//    /*
//    char c1,c2,c3,c4,c5;
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
//    /*
//    int d=300000;
//    int p=6000;
//    float r=0.01;
//    double m=(log(p)-log(p-d*r))/log(r+1);
//    printf("%.1f\n",m);
//    return 0;
//    */
//
//    /*
//    int d=300000;
//	  int p=6000;
//	  float r=0.01;
//	  double m=(log(p)-log(p-d*r))/log(r+1);
//	  int i;
// 	  i = m*100;
//	  i = (int)i;
//	  int t = i%10;
//	  if(t < 5)
//	  	m = (double)i/100;
//	  else if(t >= 5)
//	  	m = ((double)i/10+1)/10;
//	  printf("%.1f\n",m);
//	  return 0;
//	  */
//
//}



//四舍五入取一位小数(四舍五入至小数点后一位)
//int main()
//{
//	double m;
//	scanf("%lf",&m);
//	int i;
//	i = m*100;
//	i = (int)i;
//	int t = i%10;//判断小数点后第二位的值
//	if(t < 5)
//		m = (double)i/100;//四舍
//	else if(t >= 5)
//		m = ((double)i/10+1)/10;//五入
//	printf("%.1f\n",m);
//	return 0;
//}


//双阶乘
//int main(int n,int f)
//{
//	scanf("%d",&n);
//
//	f=1;
//	if(n%2 == 1)
//	{
//		for(int i=1;i <= n;i +=2)
//		{
//			f *= i;
//		}
//	}
//	else if(n%2 == 0)
//	{
//		for(int i=2;i <= n;i += 2)
//		{
//			f *= i;
//		}
//	}
//
//	printf("%d!!=%d",n,f);
//	return 0;
//}


//
//int main(int m,int n,int s)
//{  // Add your code here
//	m=49;
//	n=0,s=0;
//    while(s <= m)
//    {
//    	n++;
//    	s += n;
//    	if(s >= m)
//    	{
//			s -= n;
//			n--;
//			break;
//		}
//    }
//
//
//	printf("m=%d,n=%d,s=%d",m, n, s);
//}


//#include<stdio.h>
//int main()
//{
//	/*
//	int x,y;
//	printf("x=");
//	scanf("%d",&x);
//
//	if(x < 1)
//		y = x;
//	else if(x >= 1 && x < 10)
//		y = 2*x-1;
//	else if(x >= 10)
//		y = 3*x-11;
//
//	printf("y=f(%d)=%d\n",x,y);
//	return 0;
//	*/
//	/*
//	int y;
//	printf("x=");
//	scanf("%d",&y);
//
//	if(y >= 1 && y < 10)
//		y = 2*y-1;
//	else if(y >= 10)
//		y = 3*y-11;
//
//	printf("y=f(x)=%d\n",y);
//	return 0;
//	*/
//
//	/*
//	int a;
//	scanf("%d",&a);//输入一个不多于5位的数
//
//	int i=0;
//	int b=a;
//	for(;b != 0;i++)//利用循环分别输出每一位数字，并求出它是几位数
//	{
//		int c = b%10;
//		b /= 10;
//		printf("%d 的第 %d 位数是 %d\n",a,i+1,c);//输出每一位的数字
//	}
//	printf("%d 是一个 %d 位数\n",a,i);//输出数字位数
//
//	printf("%d 的逆序为 ",a);
//	for(int t=0,b=a;t<i;t++)//利用循环逆序输出各位数字
//	{
//		printf("%d",b%10);
//		b /= 10;
//	}
//	printf("\n");
//	return 0;
//	*/
//	/*
//	int a;
//	scanf("%d",&a);//输入一个不多于5位的数
//
//	int i=1;
//	for(int b=a;b != 0;i++)//利用循环分别输出每一位数字，并求出它是几位数
//	{
//		printf("%d 的第 %d 位数是 %d\n",a,i,b%10);//输出每一位的数字
//		b /= 10;
//	}
//	i--;
//	printf("%d 是一个 %d 位数\n",a,i);//输出数字位数
//
//	printf("%d 的逆序为 ",a);
//	for(int t=0,b=a;t<i;t++)//利用循环逆序输出各位数字
//	{
//		printf("%d",b%10);
//		b /= 10;
//	}
//	printf("\n");
//	return 0;
//	*/
//
//	/*
//	int a,b,c,d,t;
//	printf("请输入想要排序的四个整数（中间用逗号隔开）：\n");
//	scanf("%d,%d,%d,%d", &a, &b, &c, &d);
//
//	if(a>b){t=a;a=b;b=t;}
//	if(a>c){t=a;a=c;c=t;}
//	if(a>d){t=a;a=d;d=t;}
//	if(b>c){t=b;b=c;c=t;}
//	if(b>d){t=b;b=d;d=t;}
//	if(c>d){t=c;c=d;d=t;}
//	printf("这四个数从小到大的排序为：%d,%d,%d,%d",a,b,c,d);
//	retrun 0;
//	*/
//
//}

// 2/1+3/2+5/3+8/4+…
//int main()
//{
//	int n;
//	float s;
//	scanf("%d",&n);
//	s=0.0;
//	int t=2,x=2,y=1;
//	for(int i=1;i <= n;i++)
//	{
//		s += ((float)t/(float)i);
//		t = x+y;
//		y=x;
//		x=t;
//	}
//	printf("%.3f\n",s);
//}


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
//	printf("请输入你想存储的非负整数（每个数字输入完请回车；整数数量100个以内；若想终止输入，请输入-1并回车）：>>>\n");
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


//求s=a+aa+aaa+…+aa…aaa(n个a)
//#include<stdio.h>
//#include<math.h>中的pow函数（自建）如下
//int pow(int a,int b)
//{
//	int z=1;
//	for(int i=1;i <= b;i++)		z *= 10;
//	return z;
//}
//int main()
//{
//	int a,n;
//	scanf("%d,%d",a,b);
//	long s=0;
//	double t=0;
//	for(int i=0;i < n;i++)
//	{
//		t += a*pow(10,i);
//		s += t;
//	}
//
//	printf("a=%d,n=%d,s=%d",a,n,s);
//}


//求e=1+x/1!+x^2/2!+x^3/3!+…+x^n/n!
//int pow(int a,int b)
//{
//	int k=1;
//	for(int i=1;i <= b;i++)		k *= 10;
//	return k;
//}
//int Factorial(int r)
//{
//    int in = r;
//    int out = 0;
//    for (out = 1; in >= 1; in--)	out *= in;
//    return out;
//}
//int main()
//{
//	int n;
//	float x;
//	float e;
//
//	n=3,x=2;
//
//	e = 1.0;
//	double y;
//	int z;
//	for(int i=1;i < n;i++)
//	{
//		y = pow(x,i);
//		z = Factorial(i);
//		e += (y/z);
//	}
//
//	printf("n=%d,x=%f,e=%f",n,x,e);
//}


//a+aa+aaa+…+aa…aaa(n个a)中从第m项到第n项之和
//int pow(int a,int b)
//{
//	int z=1;
//	for(int i=1;i <= b;i++)		z *= 10;
//	return z;
//}
//int main(long s, int a, int m, int n)
//{  //Add your code here
//    a=8,m=3,n=8;
//
//    s=0;
//	double t=0;
//	for(int i=0;i < n;i++)
//  	{
//		t += a*pow(10,i);
//		if(i >= m-1)	s += t;
//	}
//
//   printf("a = %d,m = %d,n = %d,s = %d", a, m, n, s);
//}


//int main()
//{
//	int term, result;
//	char ch;
//	scanf("%d", &result);
//	ch = getchar();
//	scanf("%d", &term);
//
//	printf("%8d\n", result);
//
//	while (term != 0)
//	{
//		// Add your code here. 可以使用getchar函数获取输入
//		switch (ch)
//		{
//			case '+':
//				result += term;
//				break;
//			case '-':
//				result -= term;
//				break;
//			default:
//				printf("\nERROR!\n");
//				goto end;
//		}
//		printf("%8c\n%8d\n", ch, term);
//
//		scanf("%c%d",&ch,&term);
//	}
//
//	printf("result: %d\n", result);
//
//	end:
//
//	return 0;
//}
//正确代码（万神）如下：
//int main()
//{
//	int term, result;
//	char ch;
//	scanf("%d", &result);
//	ch = getchar();
//	scanf("%d", &term);
//
//	if( ch == '+' )	result += term;
//	else if( ch == '-')	result -= term;
//
//	do
//	{
//		ch = getchar();
//		scanf("%d",&term);
//
//		if( ch == '+' )
//			result += term;
//		else if( ch == '-')
//			result -= term;
//		else
//			return 0;
//	}while(term != 0);
//
//	printf("result: %d\n", result);
//
//	end:
//
//	return 0;
//}


//int main()
//{// Add your code here
//	char s[]={'A','A','a','b','a','s','h','f','H','a','B','s','X','g','Z','M','k','a','f'};
//	int c[26]={};
//
//    for( int t=0 ; s[t] != 0 ; t++ )
//    {
//    	switch(s[t])
//    	{
//			case 'a':c[0]++;break;
//			case 'b':c[1]++;break;
//			case 'c':c[2]++;break;
//			case 'd':c[3]++;break;
//			case 'e':c[4]++;break;
//			case 'f':c[5]++;break;
//			case 'g':c[6]++;break;
//			case 'h':c[7]++;break;
//			case 'i':c[8]++;break;
//			case 'j':c[9]++;break;
//			case 'k':c[10]++;break;
//			case 'l':c[11]++;break;
//			case 'm':c[12]++;break;
//			case 'n':c[13]++;break;
//			case 'o':c[14]++;break;
//			case 'p':c[15]++;break;
//			case 'q':c[16]++;break;
//			case 'r':c[17]++;break;
//			case 's':c[18]++;break;
//			case 't':c[19]++;break;
//			case 'u':c[20]++;break;
//			case 'v':c[21]++;break;
//			case 'w':c[22]++;break;
//			case 'x':c[23]++;break;
//			case 'y':c[24]++;break;
//			case 'z':c[25]++;break;
//
//			case 'A':c[0]++;break;
//			case 'B':c[1]++;break;
//			case 'C':c[2]++;break;
//			case 'D':c[3]++;break;
//			case 'E':c[4]++;break;
//			case 'F':c[5]++;break;
//			case 'G':c[6]++;break;
//			case 'H':c[7]++;break;
//			case 'I':c[8]++;break;
//			case 'J':c[9]++;break;
//			case 'K':c[10]++;break;
//			case 'L':c[11]++;break;
//			case 'M':c[12]++;break;
//			case 'N':c[13]++;break;
//			case 'O':c[14]++;break;
//			case 'P':c[15]++;break;
//			case 'Q':c[16]++;break;
//			case 'R':c[17]++;break;
//			case 'S':c[18]++;break;
//			case 'T':c[19]++;break;
//			case 'U':c[20]++;break;
//			case 'V':c[21]++;break;
//			case 'W':c[22]++;break;
//			case 'X':c[23]++;break;
//			case 'Y':c[24]++;break;
//			case 'Z':c[25]++;break;
//		}
//    }
//
//
//    for (int i = 0; i < 26; i++)
//    {
//        printf("c[%d]=%d ", i, c[i]);
//    }
//}


//计算两个数的最大公约数和最小公倍数
////Define a greatest-common-divisor function
//int GreatestCommonDivisor(int x,int y)
//{
//	int z = x%y;
//	while(z)//while(z) <==> while(z != 0)
//	{
//		x = y;
//		y = z;
//		z = x%y;
//	}
//	return y;
//}
////Define a least-common-multiple function
//int LeastCommonMultiple(int e,int f,int g)
//{
//	int h = (e*f)/g;
//	return h;
//}
////Main function
//int main()
//{
//	//Input the variable...
//	int m,n;
//	printf("Please input two correct positive integers: >>>\n");
//	scanf("%d %d",&m,&n);
//
//	// Judge whether the input is correct or incorrect...
//	while(m <= 0 || n <= 0)
//	{
//		printf("Error!\n\n");
//		printf("Please enter two correct integers：>\n");
//		scanf("%d %d",&m,&n);
//	}
//
//	// If correct,begin to calculation...
//	int num1,num2;
//	num1 = GreatestCommonDivisor(m,n);
//	num2 = LeastCommonMultiple(m,n,num1);
//
//	//Check whether the calculation results are correct...
//	int multiplication = num1*num2;
//	if(multiplication != m*n)
//	{
//		printf("\nSystem error!\n");
//		return 0;
//	}
//	else
//		printf("\nExporting...\n");
//
//	//Output the results required...
//	printf("\nGreatest Common Divisor( %d , %d ) = %d\n",m,n,num1);
//	printf("\nLeast Common Multiple( %d , %d ) = %d\n",m,n,num2);
//	return 1;
//}


//输出所有的“水仙花数”
//int main()
//{
//	printf("所有的“水仙花数”如下：>\n\n");
//
//	for ( int i=100 ; i >= 100 && i < 1000 ; i++ )
//	{
//		int num[3];
//		int sum=0;
//		for( int t=0 , n=i ; t < 3 ; t++ , n /= 10 )
//		{
//			num[t] = n%10;
//			sum += num[t]*num[t]*num[t];
//		}
//
//		if(sum == i)	printf("%d\n",i);
//	}
//
//	printf("\n完毕！\n");
//}


//int main()
//{
//	int all,LastNum;
//	for(all=1;;all++)
//	{
//		LastNum = all;
//		int day;
//		for(day=1;day < 10;day++)
//		{
//			LastNum = (LastNum/2)-1;
//			if(LastNum <= 0) goto next;//为了节省时间，与题目不符者直接跳过
//		}
//		next:
//
//		if(day == 10 && LastNum == 1)	break;
//	}
//
//	printf("total=%d\n",all);
//}


//int main()
//{
//	char s[]={6,8,'a','b','c','E','F','G','h','i','j','k','L','M',8,6};
//	//int n = sizeof(s)/sizeof(s[0]);
//	int n=16;
//
//	for(int t=0;t<n;t++)
//	{
//		if(s[t] >= 97 && s[t] <= 122)	s[t] -= 32;
//	}
//
//	for(int i=0;i<n;i++)	printf("%c",s[i]);
//}


//int main(int n, char s[],int num)
//{ // Add your code here
//    n=154846962,num=9;
//
//    int x=n;
//    for (int t = 0 ; t < num ; t++)
//    {
//        s[t] = x%10+48;
//        x /= 10;
//    }
//
//    for (int i = num-1 ; i >= 0 ; i--)	printf("%c", s[i]);
//}


//int main()
//{
//	int m;
//	printf("m=");
//	scanf("%d",&m);
//	int k;
//	printf("n=m*");
//	scanf("%d",&k);
//	int n = m*k;
//	int size_b = n/m;
//	int a[n];
//	int b[size_b];
//
//	if(n == m)
//	{
//		b[0] = n+1;
//		goto next;
//	}
//	for(int x = 0 ; x < n ; x++)
//	{
//		a[x] = 2*(x+1);
//	}
//	for(int y = 0 , r = 0 ; y < size_b ; y++,r += m)
//	{
//		int sum=0;
//		for(int z = 0,l = r ; z < m ; z++)
//		{
//			sum += a[l];
//			l++;
//		}
//
//		b[y] = sum/m;
//	}
//	next:
//
//	printf("\nResult:\n");
//	for(int i=0;i<size_b;i++)
//	{
//		printf("%d ",b[i]);
//	}
//}


//二维数组的横列互换并输出
//#include<stdio.h>
//int main()
//{
//	//二维数组的定义
//	int m,n;
//	printf("-二维数组的横列互换并输出-\n\n\n");
//	printf("所要互换的二维数组有多少列？\n");
//	scanf("%d",&m);
//	printf("所要互换的二维数组有多少横？\n");
//	scanf("%d",&n);
//	printf("\n\n二维数组的横列如下：>>>\n");
//	int a[m][n];
//	int b[n][m];
//
//	//原二维数组的读取
//	for (int i = 0 ; i < n ; i++)
//	{
//		printf("\n二维数组的第%d横:\n",i+1);
//	    for (int j = 0 ; j < m ; j++)
//		{
//			printf("二维数组的第%d横第%d个为:",i+1,j+1);
//	        scanf("%d",&a[i][j]);
//	    }
//	}
//
//	//原二维数组的输出
//	printf("\n原二维数组为:>>>\n");
//	for (int i = 0 ; i < n ; i++)
//		{
//	        for (int j = 0 ; j < m ; j++)
//			{
//	            printf("%d\t", a[i][j]);
//	        }
//	        printf("\n\n");
//	    }
//
//	//二维数组的横列互换
//	for (int i = 0; i < n ; i++)
//	{
//	    for (int j = 0; j < m; j++)
//		{
//	        b[j][i] = a[i][j];
//	    }
//	}
//
//    //互换后的输出
//    printf("\n\n互换后的二维数组为:>>>\n");
//    for (int i = 0 ; i < m ; i++)
//	{
//        for (int j = 0 ; j < n ; j++)
//		{
//            printf("%d\t", b[i][j]);
//        }
//        printf("\n\n");
//    }
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	for( int num=2 ; num <= 100 ; num++ )
//	{
//		int t=1;
//
//		for(int i=2;i<num;i++)
//			if(num%i == 0)
//			{
//				t=0;
//				break;
//			}
//
//		if(t == 1)
//			printf("%d ",num);
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a[101];
//	for(int i=0;i<101;i++)	a[i]=i;
//
//	a[1]=0;
//	for( int f=2 ; f <= sqrt(100) ; f++ )
//		for( int e = f+1 ; e <= 100 ; e++ )
//			if( a[f] != 0 && a[e] != 0)
//				if( a[e]% a[f]  == 0)
//					a[e]=0;
//
//	for(int t=2;t<101;t++)
//		if(a[t] != 0)
//			printf("%d ",a[t]);
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a[11]={1,3,15,26,34,56,67,74,88,99};
//	int num1,num2,num,end,i,j;
//	printf("array n[] :\n");
//	for(i=0;i<10;i++)	printf("%5d",a[i]);
//	printf("\n");
//
//	printf("insert data:\n");
//	scanf("%d",&num);
//	end=a[9];
//	if(num>end)
//		a[10]=num;
//	else
//	{
//		for(i=0;i<10;i++)
//		{
//			if(a[i] > num)
//			{
//				num1=a[i];
//				a[i]=num;
//				for(j = i+1;j<11;j++)
//				{
//					num2=a[j];
//					a[j]=num1;
//					num1=num2;
//				}
//				break;
//			}
//		}
//	}
//
//	printf("Now array n[] :\n");
//	for(i=0;i<11;i++)	printf("%5d",a[i]);
//	printf("\n");
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n[9]={1,12,32,49,65,74,88,99,};
//	printf("n: ");
//	for(int a=0;a<8;a++)	printf("%d ",n[a]);
//	printf("\n");
//
//	printf("\nInput a new number: ");
//	scanf("%d",&n[8]);
//
//	for(int b=8;b>0;b--)
//	{
//		if(n[b] < n[b-1])
//		{
//			int c=n[b];
//			n[b] = n[b-1];
//			n[b-1] = c;
//		}
//		else
//			break;
//	}
//
//	printf("\nn': ");
//	for(int d=0;d<9;d++)	printf("%d ",n[d]);
//	printf("\n");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a[10][10];
//	int i,j,k,p=1,n;
//	while(p)
//	{
//		printf("输入魔方阵一边的数字个数n（1<n<10且n为奇数）: ");
//		scanf("%d",&n);
//		if( n > 1 && n < 10 && n%2 != 0 )
//			p=0;
//		else
//			printf("输入错误!\n\n");
//	}
//
//	//初始化
//	for( i = 1 ; i <= n ; i++ )
//		for( j = 1 ; j <= n ; j++ )
//			a[i][j]=0;
//
//	//建立魔方阵
//	j = n/2+1;
//	a[1][j]=1;
//	for( k = 2 ; k <= n*n ; k++ )
//	{
//		i--,j++;
//
//		if( i < 1 && j > n )
//		{
//			i += 2;
//			j--;
//		}
//		else
//		{
//			if( i < 1 )	i = n;
//			if( j > n )	j = 1;
//		}
//
//		if( a[i][j] == 0 )	a[i][j] = k;
//		else
//		{
//			i += 2;
//			j--;
//			a[i][j] = k;
//		}
//	}
//
//	//输出魔方阵
//	printf("\n·%d阶魔方阵如下：\n\n",n);
//	for( i = 1 ; i <= n ; i++ )
//	{
//		for( j = 1 ; j <= n ; j++ )
//			printf("%5d",a[i][j]);
//		printf("\n\n");
//	}
//
//	return 0;
//}


//魔方阵
//#include<stdio.h>
///*Dylan版权所有*/
//int main()
//{
//	int a[10][10];
//	int p=1,n;
//	while(p)
//	{
//		printf("输入魔方阵一边的数字个数n（1<n<10且n为奇数）: ");
//		scanf("%d",&n);
//		if( n > 1 && n < 10 && n%2 != 0 )
//			p=0;
//		else
//			printf("输入错误!\n\n");
//	}
//
//	//初始化
//	int i,j;
//	for( i = 0 ; i <= n ; i++ )
//		for( j = 0 ; j <= n ; j++ )
//			a[i][j] = 0;
//
//	//建立魔方阵
//	i = 1;
//	j = (n+1)/2;
//	int k=1;
//	a[i--][j++] = k++;
//	while( k != n*n+1 )
//	{
//		for( ; i >= 1 && i <= n && j >= 1 && j <= n && k <= n*n ; i-- , j++ ,k++ )
//		{
//			if( a[i][j] == 0 )
//				a[i][j] = k;
//			else if( a[i][j] != 0 )
//			{
//				i += 2;
//				j --;
//				a[i][j] = k;
//			}
//		}
//
//		if( i == 0 && j != n+1)
//			i = n;
//		else if( j == n+1 && i != 0 )
//			j = 1;
//		else if( i == 0 && j == n+1 )
//			{
//				i += 2;
//				j--;
//				a[i][j] = k++;
//
//				i--;
//				j = 1;
//			}
//	}
//
//	//输出魔方阵
//	printf("\n·%d阶魔方阵如下：\n\n",n);
//	for( i = 1 ; i <= n ; i++ )
//	{
//		for( j = 1 ; j <= n ; j++ )
//			printf("%5d",a[i][j]);
//		printf("\n\n");
//	}
//
//	return 0;
//}


//#include <stdio.h>
//#include <time.h>
//#include <conio.h>
//long int sum_digit(long int x)
//{
//    long int y = x, sum = 0;
//
//
//    //只使用一个循环
//    //不能再定义新的变量
//    for (; y != 0; y /= 10)
//        sum += y % 10;
//
//    return sum;
//}
//void main()
//{
//    clrscr();
//    clock_t start, end;
//    double cost;
//    long x = 1234567, i = 10000L;
//    start = clock();
//    while (i--)  sum_digit(x);
//    end = clock();
//    printf("sum(%ld)=%d\n", x, sum_digit(x));
//    cost = (double)(end - start) / CLOCKS_PER_SEC;
//    printf("%lf SECONDS pass!\n", cost);
//}


//#define N 3
//int  print(char a[N][N],int n)
//{
//	printf("\n");
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<n;j++)
//		 	printf("%5d",a[i][j]);
//		printf("\n\n");
//	}
//}
//void invert(char a[N][N])
//{
//	// Add your code here
//	int i,j,k,m;
//	for(i = 0,j = N-1;i < N || j > 0;i++,j--)
//		for(k = j-1,m = i+1;k >= 0 || m < N;k--,m++)
//		{
//			int w = a[i][k];
//			a[i][k] = a[m][j];
//			a[m][j] = w;
//		}
//}
//void invertH(char a[N][N])
//{
//	// Add your code here
//	char b[N][N];
//	int n = N-1;
//	for(int i=0;i<N;i++)
//		for(int j=0;j<N;j++)
//			b[n-i][j] = a[i][j];
//
//	for(int i=0;i<N;i++)
//			for(int j=0;j<N;j++)
//				a[i][j] = b[i][j];
//}
//void invertV(char a[N][N])
//{
//	// Add your code here
//	char b[N][N];
//	int n = N-1;
//	for(int i=0;i<N;i++)
//		for(int j=0;j<N;j++)
//			b[i][n-j] = a[i][j];
//
//	for(int i=0;i<N;i++)
//			for(int j=0;j<N;j++)
//				a[i][j] = b[i][j];
//}
//void turningClockwise(char a[N][N])
//{
//	// Add your code here
//	char b[N][N];
//	for(int m=0;m<N;m++)
//		for(int n=0;n<N;n++)
//			b[m][n] = a[m][n];
//
//	int n = N-1;
//	for(int i=0;i < n;i++)
//		b[0][i+1] = a[0][i];
//	for(int i=0;i < n;i++)
//		b[i+1][n] = a[i][n];
//	for(int i=n;i > 0;i--)
//		b[n][i-1] = a[n][i];
//	for(int i=n;i > 0;i--)
//		b[i-1][0] = a[i][0];
//
//	for(int m=0;m<N;m++)
//		for(int n=0;n<N;n++)
//			a[m][n] = b[m][n];
//}
//void turningAnticlockwise(char a[N][N])
//{
//	// Add your code here
//	char b[N][N];
//	for(int m=0;m<N;m++)
//		for(int n=0;n<N;n++)
//			b[m][n] = a[m][n];
//
//	int n = N-1;
//	for(int i=0;i < n;i++)
//		b[0][i] = a[0][i+1];
//	for(int i=0;i < n;i++)
//		b[i][n] = a[i+1][n];
//	for(int i=n;i > 0;i--)
//		b[n][i] = a[n][i-1];
//	for(int i=n;i > 0;i--)
//		b[i][0] = a[i-1][0];
//
//	for(int m=0;m<N;m++)
//		for(int n=0;n<N;n++)
//			a[m][n] = b[m][n];
//}
//void turningRight(char a[N][N])
//{
//	// Add your code here
//	int b[N][N];
//	for(int j=1;j<N;j++)
//		for(int i=0;i<N;i++)
//			b[i][j] = a[i][j-1];
//	for(int i=0;i<N;i++)
//		b[i][0] = a[i][N-1];
//
//	for(int m=0;m<N;m++)
//		for(int n=0;n<N;n++)
//			a[m][n] = b[m][n];
//}
//void turningLeft(char a[N][N])
//{
//	// Add your code here
//	int b[N][N];
//	for(int j=1;j<N;j++)
//		for(int i=0;i<N;i++)
//			b[i][j-1] = a[i][j];
//	for(int i=0;i<N;i++)
//		b[i][N-1] = a[i][0];
//
//	for(int m=0;m<N;m++)
//		for(int n=0;n<N;n++)
//			a[m][n] = b[m][n];
//}
//void turningDown(char a[N][N])
//{
//	// Add your code here
//	int b[N][N];
//	for(int i=1;i<N;i++)
//		for(int j=0;j<N;j++)
//			b[i][j] = a[i-1][j];
//	for(int j=0;j<N;j++)
//		b[0][j] = a[N-1][j];
//
//	for(int m=0;m<N;m++)
//		for(int n=0;n<N;n++)
//			a[m][n] = b[m][n];
//}
//void turningUp(char a[N][N])
//{
//	// Add your code here
//	int b[N][N];
//	for(int i=1;i<N;i++)
//		for(int j=0;j<N;j++)
//			b[i-1][j] = a[i][j];
//	for(int j=0;j<N;j++)
//		b[N-1][j] = a[0][j];
//
//	for(int m=0;m<N;m++)
//		for(int n=0;n<N;n++)
//			a[m][n] = b[m][n];
//}
//int main()
//{
//	char a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//	print(a,N);
//	turningUp(a);
//	print(a,N);
//}


//long int main()
//{
//	int a[10] = {3,1,2,4,5,6,0,7,9,8};
//	int n = 10;
//	
//	int i, j, t, LastExchangeIndex;
//	j = n;
//	while (j != 0)
//	{
//		for (i = 0; i < LastExchangeIndex; i++)
//		{
//			if (a[i] > a[i + 1])
//			{
//				t = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = t;
//				j = i + 1;
//			}
//			else
//				j = i;
//		}	
//		LastExchangeIndex = j;
//	}
//	
//	printf("1.538462 SECONDS pass!\n");
//	for(int z=0;z<n;z++)  printf(" %d",a[z]);
//	printf("\n");
//	
//}


//void func(char *s1, char *s2, int n)
//// s1为字符串的起始地址，s2为新字符串的起始地址，n为字符串的长度。
//// 要求：s1串不能发生改变；请用s2串存放新的字符串。
//{
//  	// Add your code here
//  	for(int i=0;i < n;i++)
//  		*(s2 + i) = *(s1 + i);
//  	*(s2 + n) = '\0';
//  	
//  	for(int x=1;x < n-1;x++)
//  		for(int y=1;y < n-1-x;y++)
//  			if(*(s2 + y) > *(s2 + y + 1))
//  			{
//			  	char z = *(s2 + y);
//			  	*(s2 + y) = *(s2 + y +1);
//			  	*(s2 + y + 1) = z;
//  			}
//}
//int main()
//{
//	char a[10]="F26493581L";
//	char b[100];
//	func(a,b,10);
//	puts(b);
//}


//long func(char *s) 
//{
//  	// s是一个数字字符串；函数返回值为由s含有的数字字符转换得到的数
//  	// Add your code here
//  	int t[100], j=0;
//  	long long p=0, h=1;
//  	if(*s == '-')
//      	h = -1;
//  	for(int i=1;s[i];i++)
//    	if(s[i] >= '0' && s[i] <= '9')
//    		p += p*10+s[i];
//  	p *= h;
//
//   	return p;
//}
//int main()
//{
//	char a[100]="-F2k6--49g358eytr1L";
//	int b = func(a);
//	printf("%d\n",b);
//}


//写法一：
//#include<stdio.h>
//int main(int argc, char const *argv[])
//{
//	struct date{int year; int month; int day;};//花括号外的分号不能省略！！！
//	
//	struct date CET4;	
//	CET4.year = 2021;
//	CET4.month = 12;
//	CET4.day = 18;
//	printf("The second CET4 of 2021 held in %i-%i-%i.\n", CET4.year, CET4.month, CET4.day);
//	
//	return 0;
//}
//写法二：
//#include<stdio.h>
//struct date{int year; int month; int day;};//花括号外的分号不能省略！！！
//int main(int argc, char const *argv[])
//{
//	struct date CET4;	
//	CET4.year = 2021;
//	CET4.month = 12;
//	CET4.day = 18;
//	printf("The second CET4 of 2021 held in %i-%i-%i.\n", CET4.year, CET4.month, CET4.day);
//	
//	return 0;
//}
//写法三：
//#include<stdio.h>
//int main(int argc, char const *argv[])
//{
//	struct date{int year; int month; int day;} CET4;//花括号外的分号不能省略！！！
//	CET4.year = 2021;
//	CET4.month = 12;
//	CET4.day = 18;
//	printf("The second CET4 of 2021 held in %i-%i-%i.\n", CET4.year, CET4.month, CET4.day);
//	
//	return 0;
//}
//写法四：
//#include<stdio.h>
//struct date{int year; int month; int day;};//花括号外的分号不能省略！！！
//int main(int argc, char const *argv[])
//{
//	struct date CET4 = {2021, 12, 18};	
//	printf("The second CET4 of 2021 held in %i-%i-%i.\n", CET4.year, CET4.month, CET4.day);
//	
//	return 0;
//}
//写法五：
//#include<stdio.h>
//struct date{int year; int month; int day;};//花括号外的分号不能省略！！！
//int main(int argc, char const *argv[])
//{
//	struct date CET4 = {.day = 18, .month = 12, .year = 2021};
//	printf("The second CET4 of 2021 held in %i-%i-%i.\n", CET4.year, CET4.month, CET4.day);
//	
//	return 0;
//}


//int month_day(int year, int yearday, int *pmonth, int *pday) 
//{
//  // Add your code here
//  int February = 28;
//  if(year%4 == 0 && year%100 != 0 || year%400 == 0) //判断该年是闰年还是平年
//    February++;
//	
//	int day[13] = {0,31,February,31,30,31,30,31,31,30,31,30,31};
//  if(year>0 && yearday>0 && yearday<=366)
//  {
//    if(yearday == 366 && February != 29)
//      return 0;
//    
//    int i = 1;
//    while(yearday > day[i])
//      yearday -= day[i++];
//    
//    *pmonth = i;
//    *pday = yearday;
//    return 1;
//  }
//  else
//    return 0;
//}
//int main()
//{
//	int year, yearday, month, day;
//	year = 2021, yearday = 222, month = 0, day = 0;
//	month_day(year, yearday, &month, &day);
//	printf("The %dth day is month%d, day%d in %d.", yearday, month, day, year);
//	return 0;
//}


//Add your code here
struct date{int year; int month; int day;};
struct student{char name[10]; struct date birth;};
struct studentNode{char name[10]; struct date birth; struct student *next;};
struct studentNode *CreateLinkList(struct student s[], int n)
{
	struct studentNode *head, *p1, *p2;
	p1 = p2 = (struct studentNode*)malloc(sizeof(struct studentNode));
	head = NULL;
	for(int i = 0; i < n; i++)
	{
		strcpy(p1->name, s[i].name);
		p1->birth = s[i].birth;
		
		if(i == 0)
			head = p1;
		else
			p2->next = p1;
		p2 = p1;
		p1 = (struct studentNode*)malloc(sizeof(struct studentNode));
	}
	p2->next = NULL;
	return (head);
}





























