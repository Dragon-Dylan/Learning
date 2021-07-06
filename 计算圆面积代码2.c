#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


#define PAI 3.141593//PAI即Π≈3.141593


int main()
{
	double fRadius;
	double fResult = 0;

	printf("圆的半径为：\n");
	scanf("%lf", &fRadius);

	fResult = fRadius * fRadius * PAI;

	printf("圆的面积为：%lf\n", fResult);
	return 0;
}