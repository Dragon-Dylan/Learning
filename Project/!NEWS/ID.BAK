#include"NEEDED.H"

//Free requested dynamic memory
void FreeCalloc(pNode head)
{
	pNode p;
	while(head)
	{
		p = head;
		head = head->next;
		free(p);
	}
}

//Login function
void Login(struct UserNode *u)
{
    gotoxy(1, 18);
    clreol();
    FILE* fp = fopen("USERS.TXT", "r");
    if (fp == NULL)
    {
	printf("\t\tFILE NOT FOUND!");
	{
		sound(1111);
		delay(222);
		nosound();
	}
	getch();
	exit(-1);
    }

    pNode temp = (pNode)calloc(1, sizeof(LNode));
    pNode head = temp;
    fscanf(fp, "%s%s%ld%d", temp->name, temp->passwords, &temp->phone, &temp->identity, &temp->next);
    while(temp)
    {
	if(temp)
	{
		pNode itemp = (pNode)calloc(1, sizeof(LNode));
		fscanf(fp, "%s%s%ld%d", itemp->name, itemp->passwords, &itemp->phone, &itemp->identity, &itemp->next);
		temp->next = itemp;
		temp = itemp;
		if(itemp->name[0] == '\0')
			break;
	}
    }



    char name[20], passwords[20];
    printf("\tPlease enter your name:");
    scanf("%s", name);
    printf("\tPlease enter your password:");
    scanf("%s", passwords);
    gotoxy(1, 19);
    clreol();
    while(temp)
    {
	pNode p = head;
	for(; p != NULL; p = p->next)
	{
		if (strcmp(p->name, name) == 0 && strcmp(p->passwords, passwords) == 0)
		{
			gotoxy(1, 18);
			clreol();
			for(int i = 1; i < 80; i++)
			{
				printf("*");
				delay(44);
			}
			{
				sound(440);
				delay(222);
				nosound();
			}
			printf("\n\t\t            Sign in successfully.\n");
			getch();
			strcpy(u->name, temp->name);
			strcpy(u->passwords, temp->passwords);
			fclose(fp);
			FreeCalloc(head);
			return;
		}
		if(p->next == NULL)
			goto next;
	}
    }
    next:
    printf("\t\tCannot found the user.\n");
    {
	sound(1111);
	delay(222);
	nosound();
    }
    getch();
    fclose(fp);
    FreeCalloc(head);
}

//Registered user
void RegisterUser(void)
{
    gotoxy(1, 18);
    clreol();
    FILE* fp = fopen("USERS.TXT", "r+");
    if(fp == NULL)
    {
	printf("\t\tFILE NOT FOUND!");
	{
		sound(1111);
		delay(222);
		nosound();
	}
	getch();
	exit(-1);
    }

    pNode temp = (pNode)calloc(1, sizeof(LNode));
    pNode head = temp;
    fscanf(fp, "%s%s%ld%d", temp->name, temp->passwords, &temp->phone, &temp->identity, &temp->next);
    while(temp)
    {
	if(temp)
	{
		pNode itemp = (pNode)calloc(1, sizeof(LNode));
		fscanf(fp, "%s%s%ld%d", itemp->name, itemp->passwords, &itemp->phone, &itemp->identity, &itemp->next);
		temp->next = itemp;
		temp = itemp;
		if(itemp->name[0] == '\0')
			break;
	}
    }

    char name[20];
    printf("\tPlease enter your name:");
    scanf("%s", name);
    while(temp)
    {
	pNode p = head;
	for(; p != NULL; p = p->next)
	{
		if (strcmp(p->name, name) == 0)
		{
			gotoxy(1, 18);
			clreol();
			printf("\t\tThis user name already exists\n\t\tPlease register again!\n");
			{
				sound(1111);
				delay(222);
				nosound();
			}
			getch();
			gotoxy(1, 19);
			clreol();
			gotoxy(1, 18);
			clreol();
			printf("\tPlease enter your name again:");
			scanf("%s", name);
			break;
		}
		if(p->next == NULL)
			goto next;
	}
    }
    next:
    strcpy(temp->name, name);

    char passwords[20];
    do
    {
	printf("\tPlease enter your password:\n\t(Just required the length of 16,including letters, number and '@')");
	gotoxy(36, 19);
	scanf("%s", temp->passwords);
	gotoxy(1, 19);
	clreol();
	printf("\tPlease enter your password again:");
	scanf("%s", passwords);
	gotoxy(1, 19);
	clreol();
	if(strcmp(temp->passwords, passwords))
	{
		strcpy(temp->passwords, "\0");
		printf("\t\tThe two passwords are different! Please re-enter.");
		sound(1111);
		delay(222);
		nosound();
		delay(444);
		getch();
		gotoxy(1, 19);
		clreol();
	}
    }while(strcmp(temp->passwords, passwords));
    gotoxy(1, 20);
    clreol();
    gotoxy(1, 19);
    printf("\tPlease your phone number:");
    scanf("%ld", &temp->phone);
    gotoxy(1, 19);
    clreol();
    temp->identity = 0;
    temp->next = NULL;

    FILE* fw = fopen("USERS.TXT", "a+");
    if(fw == NULL)
    {
	free(temp);
	printf("\t\tRegistration failed!\n");
	{
		sound(1111);
		delay(222);
		nosound();
	}
	getch();
	exit(-1);
    }
    if(temp == NULL)
    {
	printf("\t\tData loss, registration failed!");
	{
		sound(1111);
		delay(111);
		nosound();
	}
	getch();
	fclose(fw);
	FreeCalloc(head);
	exit(-1);
    }
    while (temp)
    {
	fprintf(fw, temp->name);
	fprintf(fw, "\t");
	fprintf(fw, temp->passwords);
	fprintf(fw, "\t");
	fprintf(fw, "%ld", temp->phone);
	fprintf(fw, "\t");
	fprintf(fw, "%d", temp->identity);
	fprintf(fw, "\n");
	temp = temp->next;
    }
    fclose(fw);
    FreeCalloc(head);
    for(int i = 1; i < 80; i++)
    {
	printf("*");
	delay(44);
    }
    {
	sound(440);
	delay(222);
	nosound();
    }
    printf("\n\t\t             Registration succeeded!\n");
    getch();
}


/*
***********************************************
*         Designed by Dylan Simon Su          *
*  Translation comes from Baidu translation.  *
*          Dylan Simon Su copyright.          *
***********************************************
*/
