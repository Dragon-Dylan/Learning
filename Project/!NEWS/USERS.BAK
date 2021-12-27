#include"NEEDED.H"

void Preload(void)
{
	clrscr();
	printf("\n\t             Campus News Release Management System\n");
	printf("\t                        Language:  English\n");
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
		gotoxy(1, 17);
		clreol();
		printf("\n\t      Please input your choice again: No.");
		scanf("%d", Ikey);
	}
}
