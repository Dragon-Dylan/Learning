#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<time.h>




//谢光强的代码
//#include <stdio.h>
//#include <time.h>
//#include<conio.h>
//void main()
//{
//    clock_t start, end;
//    double cost;
//    long x = 10, i = 1000000L, j;
//    start = clock();
//    while (i--)
//    {
//        int x = 1234567;
//        int y = x, sum = 0;
//        for (; y != 0; y /= 10)
//            sum += y % 10;
//
//    }
//    end = clock();
//    cost = (double)(end - start) / CLOCKS_PER_SEC;
//    printf("%lf SECONDS\n", cost);
//}


//万神的代码
//#include<time.h>
//#include<stdio.h>
//
//clock_t start1, end1, start2, end2;
//
//int main(void) {
//    int a, b;
//    int max1, max2;
//    unsigned long long n1, n2;
//    n1 = 100000000;
//    n2 = 100000000;
//    scanf("%d,%d", &a, &b);
//    start1 = clock();
//    while (n1--) {
//        if (a > b)
//            max1 = a;
//        else
//            max1 = b;
//    }
//    end1 = clock();
//    start2 = clock();
//    while (n2--) {
//        max2 = a > b ? a : b;
//    }
//    end2 = clock();
//    double time1, time2;
//    time1 = end1 - start1;
//    time2 = end2 - start2;
//    printf("%lf\n", time1);
//    printf("%lf\n", time2);
//    return 0;
//}


//谢光强的代码2：(TurboC3.0-cpp代码)
//#include <stdio.h>
//#include <time.h>
//#include <conio.h>
//long int sum_digit(long int x)
//{
//    long int y = x, sum = 0, r = 0;
//    int i = 0;
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
