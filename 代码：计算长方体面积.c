#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int Long;
	int Width;
	int Height;
	int result;

	printf("����\n");
	scanf("%d", &Long);

	printf("��\n");
	scanf("%d", &Width);

	printf("�ߣ�\n");
	scanf("%d", &Height);



	result = calculate(Long, Width, Height);

	printf("�����������ǣ�\n");
	printf("%d\n", result);
	return 0;
}

int calculate(int Long, int Width, int Height)
{
	int result = Long * Width * Height;
	return result;
}

