#include"NEEDED.H"

int main()
{
	window(1, 1, 40, 80);
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
				int iway = 1;
				while(iway)
				{
					gotoxy(1, 17);
					clreol();
					Login(&u);
					if(u.identity == 0 || u.identity == 1)
					{
						int hway = 1;
						while(hway)
						{
							Interface();
							int hkey = 1;

							if(hkey == 9)
								break;
						}
					}
					else
						iway--;
				}
				break;
			case 2:
				int hway = 1;
				while(hway)
				{
					Interface();
					int hkey = 1;
					printf("Please intput your choice: No.");
					scanf("%d", &hkey);
					if(hkey == 0)
						return 0;
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
				return 0;
		}
	}

	printf("  Thinks for using!\n");
	return 0;
}
