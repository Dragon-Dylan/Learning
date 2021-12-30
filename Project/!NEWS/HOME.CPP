#include"NEEDED.H"

//Main interface establishment
void Interface(void)
{
	clrscr();
	//Home interface output
	printf("********************************************************************************\n");
	printf("*  [1]Newsletter   ***   [2]Notice   ***   [3]Account-Management  **  [0]Exit  *\n");
	printf("********************************************************************************\n");
	return;
}


//To control the run of the appication
void HomeControl(struct UserNode *u)
{
	int hkey = 9;
	while(hkey)
	{
		Interface();
		//Read selection
		printf("Please intput your choice: No.");
		scanf("%d", &hkey);
		gotoxy(1, 7);
		clreol();
		switch(hkey)
		{

			case 1:
				NewsRead();
				break;
			case 2:
				Notice();
				break;
			case 3:
				//Judge the identity of tourists
				if(u->identity == -1)
				{
					printf("You're just a visitor. You don't have permission!\n");
					{
						sound(1111);
						delay(111);
						nosound();
					}
					getch();
				}
				else
					AccountUpdate();
				break;
			case 0:
				return;
			default:
				break;
		}
	}
	return;
}

/*
***********************************************
*         Designed by Dylan Simon Su          *
*  Translation comes from Baidu translation.  *
*          Dylan Simon Su copyright.          *
***********************************************
*/
