#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
int main()
{
	int input = 0;//����û���ѡ��
	srand((unsigned int)time(NULL));//�������������
	do//����ִ��һ��ѭ��
	{
		printf("\n  #*#* Tic-Tac-Tic Game *#*#  \n");
		printf("\n      Developer:  Dragon      \n");
		printf("\n     	All rights reserved!    \n\n\n");
		
		menu();//��ӡ�˵�
		printf("Please enter you choice(1/9/0):>");//Ҫ���û���������ѡ��
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//�û�����1��������Ϸ
			break;
		case 9:
			printf("\nHelp:\n  Input format(3*3): number number\n\n");
			break;
		case 0:
			printf("Exit.\n");
			exit(886);//�û�����0���˳�����
			break;
		default:
			printf("Wrong!Please enter a right choice(0/1):>\n");//�����������
			break;
		}
	} while (input);
	return 0;
}
