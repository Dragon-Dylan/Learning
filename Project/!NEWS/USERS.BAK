#include"NEEDED.H"

void Preload(void)
{
	clrscr();
	printf("\n\t             Campus News Release Management System\n");
	printf("\t                       Language:  English\n\n");
	for(int i = 1; i < 80; i++)
	{
		printf("#");
		delay(44);
	}
	sound(440);
	delay(222);
	nosound();
	gotoxy(1, 5);
	clreol();
}

void IndentityMenu(int *Ikey)
{
	Preload();
	printf("\t      ***************************************************\n");
	printf("\t      *      Campus News Release Management System      *\n");
	printf("\t      ***************************************************\n");
	printf("\t      *              [1]   Sign in                      *\n");
	printf("\t      *              [2]   Skip Login                   *\n");
	printf("\t      *              [3]   Administrator                *\n");
	printf("\t      *              [4]   Register                     *\n");
	printf("\t      *              [5]   Retrieve Password            *\n");
	printf("\t      ***************************************************\n");
	printf("\t      *              [9]   Back                         *\n");
	printf("\t      *              [0]   Exit                         *\n");
	printf("\t      ***************************************************\n");

	printf("\n\t      Please input your choice: No.");
	scanf("%d", Ikey);


	while(*Ikey != 1 && *Ikey != 2 && *Ikey != 3 && *Ikey != 4 && *Ikey != 0 && *Ikey != 5)
	{
		gotoxy(1, 18);
		clreol();
		printf("\t      Please input your choice again: No.");
		scanf("%d", Ikey);
	}
}


/*
***********************************************
*         Designed by Dylan Simon Su          *
*  Translation comes from Baidu translation.  *
*          Dylan Simon Su copyright.          *
***********************************************
*/
