#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


#define PAI 3.141593//PAI������3.141593
int main()
{
	double fRadius;
	double fResult=0;

	printf("Բ�İ뾶Ϊ��\n");
	scanf("%lf", &fRadius);

	fResult = fRadius * fRadius * PAI;

	printf("Բ�����Ϊ��%lf\n", fResult);
	return 0;
}

