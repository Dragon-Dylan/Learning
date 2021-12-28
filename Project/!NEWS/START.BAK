#include"NEEDED.H"

int main()
{
	struct UserNode u;
	strcpy(u.name, "Visitor");
	strcpy(u.passwords, "000000");
	u.phone = 0;
	u.identity = -1;
	u.next = NULL;

	int way = 9;
	while(way)
	{
		int key = 9;
		IndentityMenu(&key);
		switch(key)
		{
			case 1:
				Login(&u);
				if(strcmp(u.name, "Visitor") == 0)
					break;

				Interface();
				int uhkey = 1;
				printf("Please intput your choice: No.");
					scanf("%d", &uhkey);
				while(uhkey)
				{
					gotoxy(1, 7);
					clreol();
					switch(uhkey)
					{
						case 1:
							;
							break;
						case 2:
							;
							break;
						case 3:
							;
							break;
						case 0:
							break;
						default:
							printf("Please intput your choice again: No.");
							scanf("%d", &uhkey);
							break;
					}
				}
				break;
			case 2:
				Interface();
				int vhkey = 1;
				printf("Please intput your choice: No.");
					scanf("%d", &vhkey);
				while(vhkey)
				{
					gotoxy(1, 7);
					clreol();
					switch(vhkey)
					{
						case 1:
							;
							break;
						case 2:
						case 3:
							printf("\tYou're just visitor, having no jurisdiction!\n");
							printf("\tIf you want, please go to registere and sign in.\n");
							delay(1111);
							gotoxy(1, 8);
							clreol();
							gotoxy(1, 7);
							clreol();
							printf("Please intput your choice next: No.");
							scanf("%d", &vhkey);
							break;
						case 0:
							break;
						default:
							printf("Please intput your choice again: No.");
							scanf("%d", &vhkey);
							break;
					}
				}
				break;
			case 3:
				break;
			case 4:
				RegisterUser();
				break;
			case 5:
				break;
			case 9:
				break;
			case 0:
				way = 0;
				break;
		}
	}

	clrscr();
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\t     Thinks for using!");
	sound(666);
	delay(333);
	nosound();
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
