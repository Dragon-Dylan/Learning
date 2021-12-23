#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int Long;
	int Width;
	int Height;
	int result;

	printf("长：\n");
	scanf("%d", &Long);

	printf("宽：\n");
	scanf("%d", &Width);

	printf("高：\n");
	scanf("%d", &Height);

	//在C语言中scanf是一种不安全的函数，所以要在代码开头输入#define _CRT_SECURE_NO_WARNINGS 1以忽略不安全的警告从而才能运行此代码

	result = calculate(Long, Width, Height);

	printf("长方体的体积是：\n");
	printf("%d\n", result);
	return 0;
}

int calculate(int Long, int Width, int Height)
{
	int result = Long * Width * Height;
	return result;
}

