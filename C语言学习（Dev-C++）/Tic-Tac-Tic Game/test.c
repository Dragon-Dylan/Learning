#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
int main()
{
	int input = 0;//存放用户的选择
	srand((unsigned int)time(NULL));//设置随机数种子
	do//至少执行一次循环
	{
		printf("\n  #*#* Tic-Tac-Tic Game *#*#  \n");
		printf("\n      Developer:  Dragon      \n");
		printf("\n     	All rights reserved!    \n\n\n");
		
		menu();//打印菜单
		printf("Please enter you choice(1/9/0):>");//要求用户输入他的选择
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//用户输入1，进入游戏
			break;
		case 9:
			printf("\nHelp:\n  Input format(3*3): number number\n\n");
			break;
		case 0:
			printf("Exit.\n");
			exit(886);//用户输入0，退出程序
			break;
		default:
			printf("Wrong!Please enter a right choice(0/1):>\n");//处理特殊情况
			break;
		}
	} while (input);
	return 0;
}
