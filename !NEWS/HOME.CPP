#include"NEEDED.H"

//Main interface establishment
void Interface(void)
{
	clrscr();
	//Home interface output
	printf("*******************************************************************************\n");
	printf("*  [1]Newsletter   ***   [2]Notice   ***   [3]Account-Management  **  [0]Exit *\n");
	printf("*******************************************************************************\n");
	return;
}


//To control the run of the appication
void HomeControl(struct UserNode *u)
{
	if(u->identity != -1)
	{
		int hkey = 9;
		while(hkey)
		{
			Interface();
			//Read selection
			printf("Please intput your choice: No.");
			scanf("%d", &hkey);
			gotoxy(1, 4);
			clreol();
			switch(hkey)
			{
				case 1:
					NewsHome();
					int nkey = 9;
					printf("Please enter your choice: No.");
					scanf("%d", &nkey);
					if(nkey == 1)
						NewsRead("NEWS.TXT", 1);
					else if(nkey == 2)
						NewsWrite(u);
					else if(nkey == 3)
						NewsFind();
					else if(nkey == 4)
						MyNews(u);
					else
						printf("Input error, re-operate!");
					break;
				case 2:
					Notice();
					break;
				case 3:
					AccountUpdate(u);
					return;
				case 0:
					return;
				default:
					break;
			}
		}
		return;
	}
	else if(u->identity == -1)
	{
		int vkey = 9;
		while(vkey)
		{
			Interface();
			//Read selection
			printf("Please intput your choice: No.");
			scanf("%d", &vkey);
			gotoxy(1, 4);
			clreol();
			switch(vkey)
			{
				case 1:
					NewsRead("USER.TXT", 1);
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
					break;
				case 0:
					return;
				default:
					break;
			}
		}
	}
}



/*
***********************************************
*         Designed by Dylan Simon Su          *
*  Translation comes from Baidu translation.  *
*          Dylan Simon Su copyright.          *
***********************************************
*/
