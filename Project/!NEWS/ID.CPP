#include"NEEDED.H"

//Login function
void Login(struct UserNode *u)
{
    FILE* fp = fopen("USERS.TXT", "r");
    if (fp == NULL)
    {
	printf("\tFILE NOT FOUND!");
	exit(-1);
    }

    char name[20], passwords[20];
    printf("\tPlease enter your name:");
    scanf("%s", name);
    printf("\tPlease enter your password:");
    scanf("%s", passwords);
    gotoxy(1, 18);
    clreol();
    pNode temp = (pNode)malloc(sizeof(LNode));
    while (temp)
    {
	fscanf(fp, "%s%s%ld%d%x", temp->name, temp->passwords, &temp->phone, &temp->identity, &temp->next);
	if (strcmp(temp->name, name) == 0 && strcmp(temp->passwords, passwords) == 0)
	{
	    strcpy(u->name, temp->name);
	    strcpy(u->passwords, temp->passwords);
	    u->phone = temp->phone;
	    u->identity = temp->identity;
	    u->next = temp;
	    free(temp);
	    printf("\tSign in successfully.\n");
	    getch();
	    fclose(fp);
	    return;
	}
	else
	    temp = temp->next;
    }
    free(temp);
    printf("\tCannot found the user.\n");
    getch();
    fclose(fp);
}

//Registered user
void RegisterUser(void)
{
    FILE* fp = fopen("USERS.TXT", "r+");
    if(fp == NULL)
    {
	printf("\tFILE NOT FOUND!");
	exit(-1);
    }

    char name[20];
    printf("\tPlease enter your name:");
    scanf("%s", name);
    pNode temp = (pNode)malloc(sizeof(LNode));
    pNode head = temp;
    while (temp)
    {
	fscanf(fp, "%s%s%ld%d", temp->name, temp->passwords, &temp->phone, &temp->identity, &temp->next);
	if (strcmp(temp->name, name) == 0)
	{
	    temp = head;
	    gotoxy(1, 18);
	    clreol();
	    printf("\tThis user name already exists, please register again!\n");
	    getch();
	    gotoxy(1, 18);
	    clreol();
	    printf("\tPlease enter your name:");
	    scanf("%s", name);
	}
	else if(temp->next == NULL)
	{
		strcpy(temp->name, name);
		break;
	}
	else
	    temp = temp->next;
    }
    fclose(fp);


    char password[20];
    do
    {
	printf("\tPlease enter your password:");
	scanf("%s", temp->passwords);
	gotoxy(1, 19);
	clreol();
	printf("\tPlease enter your password again:");
	scanf("%s", password);
	gotoxy(1, 19);
	clreol();
    }while(strcmp(temp->passwords, password));
    printf("\tPlease your phone number:");
    scanf("%ld", &temp->phone);
    temp->identity = 0;
    temp->next = NULL;

    FILE* fw = fopen("USERS.TXT", "a+");
    if(fw == NULL)
    {
	free(temp);
	printf("\tRegistration failed!\n");
	getch();
	exit(-1);
    }
    if(temp == NULL)
    {
	printf("\tData loss, registration failed!");
	getch();
	free(temp);
	fclose(fw);
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
    free(temp);
    printf("\tRegistration succeeded!\n");
    getch();
}
