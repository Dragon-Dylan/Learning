#include"NEEDED.H"

//Create a preload page
void Preload(void)
{
	clrscr();
	printf("\n\t             Campus News Release Management System\n");
	printf("\t                       Language:  English\n");
	for(int i = 1; i < 80; i++)
	{
		printf("#");
		delay(44);
	}
	{
		sound(440);
		delay(222);
		nosound();
	}
	gotoxy(1, 4);
	clreol();
	return;
}


//Create a user menu
void IndentityMenu(int *Ikey)
{
	Preload();
	printf("\n\t\t***************************************************\n");
	  printf("\t\t*      Campus News Release Management System      *\n");
	  printf("\t\t***************************************************\n");
	  printf("\t\t*              [1]   Sign in                      *\n");
	  printf("\t\t*              [2]   Skip Login                   *\n");
	  printf("\t\t*              [3]   Administrator                *\n");
	  printf("\t\t*              [4]   Register                     *\n");
	  printf("\t\t*              [5]   Retrieve Password            *\n");
	  printf("\t\t***************************************************\n");
	  printf("\t\t*              [9]   Back                         *\n");
	  printf("\t\t*              [0]   Exit                         *\n");
	  printf("\t\t***************************************************\n");

	//Read selection
	printf("\n\t      Please input your choice: No.");
	scanf("%d", Ikey);
	
	//Judgment selection
	while(*Ikey != 1 && *Ikey != 2 && *Ikey != 3 && *Ikey != 4 && *Ikey != 0 && *Ikey != 5)
	{
		gotoxy(1, 18);
		clreol();
		printf("\t      Please input your choice again: No.");
		scanf("%d", Ikey);
	}//Repeat operation for unqualified selection

	return;
}


/*
***********************************************
*         Designed by Dylan Simon Su          *
*  Translation comes from Baidu translation.  *
*          Dylan Simon Su copyright.          *
***********************************************
*/
