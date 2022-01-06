#include"NEEDED.H"

int main()
{
	window(1, 1, 80, 25);
	textbackground(0);
	textcolor(2);
	int way = 9;
	//Read selection
	while(way)
	{
		int key = 9;
		IndentityMenu(&key);
		switch(key)
		{
			case 1:
			case 2:
				//Define visitor information
				LNode u;
				strcpy(u.name, "Visitor");
				strcpy(u.passwords, "0");
				strcpy(u.phone, "0");
				u.identity = -1;
				u.next = NULL;
				if(key == 1)
					Login(&u);
				else
					HomeControl(&u);
				break;
			case 3:
				//Judge the administrator's information
				LNode admin;
				admin.next = NULL;
				AdminLogin(&admin);
				if(strcmp(Administrator.name, admin.name) == 0 && strcmp(Administrator.phone, admin.phone) == 0 && admin.identity == 9)
				{
					gotoxy(1, 19);
					clreol();
					char ch;
					printf("\n\t\tDo you wanna access SuperAdmin System?(y/n) ");
					ch = getch();
					if(ch == 'Y' || ch == 'y')
						SuperAdmin(&admin);
					else
					{
						printf("\n\t\t             Information error!");
						{
							sound(1111);
							delay(111);
							nosound();
						}
						getch();
						Admin(&admin);
					}
				}
				else if(admin.identity == 1)
					Admin(&admin);
				break;
			case 4:
				RegisterUser();
				break;
			case 5:
				Retrieve();
				break;
			case 9:
				break;
			case 0:
				way = 0;
				break;
		}
	}

	clrscr();
	//Exit interface
	printf("\n\n\n\n\n\n\n\n\n\t\t\t     Thinks for using!");
	printf("\n\n\n\n\t\t    Campus News Release Management System");
	printf("\n\n\t          Gdut Course-designed application v1.1.1.0");
	//Exit success prompt
	{
		sound(666);
		delay(333);
		nosound();
	}
	//Delay display
	delay(444);
	return 0;
}


/*
***********************************************
*         Designed by Dylan Simon Su          *
*  Translation comes from Baidu translation.  *
*          Dylan Simon Su copyright.          *
***********************************************
*/
