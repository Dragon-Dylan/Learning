#include"NEEDED.H"

//Create an administrator interface
void AdminFace(void)
{
    clrscr();
	//Home interface output
	printf("****************************** Content management ******************************\n");
	printf("***  [1]News    ***    [2]Notice    ***    [3]Account-Management    [0]Exit  ***\n");
	printf("********************************************************************************\n");
}


//Create an adminstrator login system
void AdminLogin(void)
{
    gotoxy(1, 18);
	clreol();
    //Define administrator pass
    LNode AdminPass;
    char AdminName[20], AdminPasswords[20];
    //Enter administrator's name
    printf("\tPlease enter your administrator name:");
    scanf("%s", AdminName);
    //Enter administrator's passwords
    printf("\tPlease enter your administrator password:");
    scanf("%s", AdminPasswords);
    //Password privacy protection
	gotoxy(1, 19);
	clreol();

    //Determine super administrator's identity
    if(strcmp(Administrator.name, AdminName) == 0 && strcmp(Administrator.passwords, AdminPasswords) == 0)
    {
        char AdminPhone[20];
        //Enter super adminstrator's phone
        printf("\tPlease your administrator phone number:");
        scanf("%s", AdminPhone);
        //Determine super administrator's phone
        if(strcmp(Administrator.phone, AdminPhone) == 0)
        {
            int AdminIdentity;
            printf("\tPlease your administrator identity number:");
            if(9 == getch())
            {
                strcpy(AdminPass.name, Administrator.name);
                strcpy(AdminPass.passwords, "**********");
                strcpy(AdminPass.phone, Administrator.phone);
                AdminPass.identity = 9;
                AdminFace();
                return;
            }
                
        }
    }

	//Open the file and judge whether it is opened successfully
	FILE* fp = fopen("USERS.TXT", "r");
	if(fp == NULL)
	{
		//File open failure warning
		printf("\t\tFILE NOT FOUND!");
		{
			sound(1111);
			delay(222);
			nosound();
		}
		getch();
		exit(-1);
	}

	//Request a temporary memory block then to read user information from the file "USERS.TXT" and form a user linked list
	pNode temp = (pNode)calloc(1, sizeof(LNode));
	pNode head = temp;
	fscanf(fp, "%s%s%s%d", temp->name, temp->passwords, temp->phone, &temp->identity, &temp->next);//Scan user information
	while(temp)
	{
		if(temp)
		{
			pNode itemp = (pNode)calloc(1, sizeof(LNode));
			fscanf(fp, "%s%s%s%d", itemp->name, itemp->passwords, itemp->phone, &itemp->identity, &itemp->next);
			temp->next = itemp;
			temp = itemp;
			if(itemp->name[0] == '\0')
				break;
		}
	}

    //Find administrator identity
    while(temp)
	{
		pNode p = head;
		for(; p != NULL; p = p->next)
		{
			if (strcmp(p->name, AdminName) == 0 && strcmp(p->passwords, AdminPasswords) == 0)//Match user's information
			{
                //Verify administrator identity
                if (p->identity == 1)
                {
                    //Login success prompt
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
                    //Close the file and free the temporary memory block
                    fclose(fp);
                    FreeCalloc(head);
                    return;
                }
			}
			if(p->next == NULL)
				goto next;
		}
	}
	next:

	//Error notification
	printf("\t\t   User information error! Please re-login.\n");
	{
		sound(1111);
		delay(222);
		nosound();
	}
	getch();
	//Close the file and free the temporary memory block
	fclose(fp);
	FreeCalloc(head);
    return;
}


//Create an adminstrator login system
void AdminLogin(void)
{
    AdminLogin();
}



/*
***********************************************
*         Designed by Dylan Simon Su          *
*  Translation comes from Baidu translation.  *
*          Dylan Simon Su copyright.          *
***********************************************
*/