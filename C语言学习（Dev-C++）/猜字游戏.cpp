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

	printf("���Ѿ������һ��1��100�����������²��ҵ����Ƕ��٣�\n\n");
	do
	{
		printf("����1��100��ѡ�����°ɣ�\n");
		scanf("%d", &a);
		count++;
		if (a > number)
		{
			printf("���µ�������\n\n");
		}
		else if (a < number)
		{
			printf("���µ���С��\n\n");
		}
	} while (a != number);
	printf("\n��ϲ������ˣ�����\n");

	if (count == 1)
	{
		printf("̫�����˰ɣ���ֻ����1�ξͲ¶��ˣ�����\n");
	}
	else
		printf("���ź���������%d����Ų³����������Ѿ��ܰ��ˣ�\n", count);
	return 0;
}

