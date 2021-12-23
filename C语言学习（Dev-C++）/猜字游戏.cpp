#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int number = rand() % 100 + 1;
	int count = 0;
	int a = 0;

	printf("我已经想好了一个1至100的数，请您猜猜我的数是多少？\n\n");
	do
	{
		printf("请在1至100中选数来猜吧！\n");
		scanf("%d", &a);
		count++;
		if (a > number)
		{
			printf("您猜的数大了\n\n");
		}
		else if (a < number)
		{
			printf("您猜的数小了\n\n");
		}
	} while (a != number);
	printf("\n恭喜您答对了！！！\n");

	if (count == 1)
	{
		printf("太厉害了吧，你只猜了1次就猜对了！！！\n");
	}
	else
		printf("很遗憾，你用了%d机会才猜出来，不过已经很棒了！\n", count);
	return 0;
}

