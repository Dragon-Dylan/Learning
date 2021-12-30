#include"NEEDED.H"

//Free requested dynamic memory
void FreeCalloc(struct UserNode* head)
{
	pNode p;
	//Cycle to release all requested temporary memory blocks
	while(head)
	{
		p = head;
		head = head->next;
		free(p);//Free temporary memory block
	}
	return;
}


//Login system
void Login(struct UserNode *u)
{
	gotoxy(1, 18);
	clreol();

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
			if(itemp->name[0] == '\0')
			{
				temp->next = NULL;
				free(itemp);
				break;
			}
			temp->next = itemp;
			temp = itemp;
		}
	}

	//Enter user's username and passwords
	char name[20], passwords[20];
	printf("\tPlease enter your name:");
	scanf("%s", name);
	printf("\tPlease enter your password:");
	scanf("%s", passwords);
	//Password privacy protection
	gotoxy(1, 19);
	clreol();

	//Compare the data stream to determine whether the user login information is correct
	while(temp)
	{
		pNode p = head;
		for(; p != NULL; p = p->next)
		{
			if (strcmp(p->name, name) == 0 && strcmp(p->passwords, passwords) == 0)//Compare user name and password
			{
				gotoxy(1, 18);
				clreol();
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
				//Return user information
				strcpy(u->name, temp->name);
				strcpy(u->passwords, temp->passwords);
				strcpy(u->phone, temp->phone);
				u->identity = temp->identity;
				//Close the file and free the temporary memory block
				fclose(fp);
				FreeCalloc(head);
				return;
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


//Registered user
void RegisterUser(void)
{
	gotoxy(1, 18);
	clreol();
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

	//Enter user's username
	char name[20];
	printf("    Please enter your name(Not required to input ' '!):");
	scanf("%s", name);
	while(temp)
	{
		pNode p = head;
		for(; p != NULL; p = p->next)
		{
			if (strcmp(p->name, name) == 0)//Compare user name
			{
				gotoxy(1, 18);
				clreol();
				//Reminder that the user name has been used
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
	fclose(fp);//Close the file after reading it to avoid file corruption

	gotoxy(1, 18);
	clreol();
	//Reverse user name
	printf("\tYour username: %s\n", name);
	strcpy(temp->name, name);
	
	char passwords[20];
	do
	{
		//Enter user's passwords
		printf("\tPlease enter your passwords:\n\t(Just required the length of 16,including letters, number and '@')");
		gotoxy(37, 19);
		scanf("%s", temp->passwords);
		//Password privacy protection
		gotoxy(1, 19);
		clreol();
		//Confirm user's passwords
		printf("\tPlease enter your passwords again:");
		scanf("%s", passwords);
		//Password privacy protection
		gotoxy(1, 19);
		clreol();
		if(strcmp(temp->passwords, passwords))
		{
			strcpy(temp->passwords, "\0");
			//Password inconsistency error reminder
			printf("\t\tThe two passwords are different! Please re-enter.");
			{
				sound(1111);
				delay(222);
				nosound();
				delay(444);
			}
			getch();
			gotoxy(1, 19);
			clreol();
		}
	}while(strcmp(temp->passwords, passwords));
	gotoxy(1, 20);
	clreol();
	gotoxy(1, 19);
	//Enter user's phone
	printf("\tPlease your phone number:");
	scanf("%s", temp->phone);
	gotoxy(1, 19);
	clreol();
	//Declare user identity
	temp->identity = 0;
	temp->next = NULL;

	//Open the file and judge whether it is opened successfully
	FILE* fw = fopen("USERS.TXT", "a+");
	if(fw == NULL)
	{
		//File open failure warning
		printf("\t\tRegistration failed!\n");
		{
			sound(1111);
			delay(222);
			nosound();
		}
		getch();
		FreeCalloc(head);
		exit(-1);
	}
	if(temp == NULL)
	{
		//Registration data loss warning
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
	//Register data write
	//Each user data is separated by Tab, and finally enter to wrap the line
	while (temp)
	{
		fprintf(fw, temp->name);
		fprintf(fw, "\t");
		fprintf(fw, temp->passwords);
		fprintf(fw, "\t");
		fprintf(fw, "%s", temp->phone);
		fprintf(fw, "\t");
		fprintf(fw, "%d", temp->identity);
		fprintf(fw, "\n");
		temp = temp->next;
	}
	//Close the file after successful writing
	fclose(fw);
	//Free the temporary memory block
	FreeCalloc(head);
	//Prompt for successful registration
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
	printf("\n\t\t           Registration succeeded!\n");
	getch();
	return;
}


//Retrieve password
void Retrieve(void)
{
	gotoxy(1, 18);
	clreol();

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
			if(itemp->name[0] == '\0')
			{
				temp->next = NULL;
				free(itemp);
				break;
			}
			temp->next = itemp;
			temp = itemp;
		}
	}

	//Enter user's username and phone number
	char name[20], phone[20];
	printf("\tPlease enter your name:");
	scanf("%s", name);
	printf("\tPlease enter your phone:");
	scanf("%s", phone);
	while(temp)
	{
		pNode p = head;
		for(; p != NULL; p = p->next)
		{
			if (strcmp(p->name, name) == 0 && strcmp(p->phone, phone) == 0)//Match user's information
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
				printf("\n\t      Password search succeeded!Your passwords is '%s'.\n", p->passwords);//Output user password
				getch();
				//Close the file and free the temporary memory block
				fclose(fp);
				FreeCalloc(head);
				return;
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


//To update user's information
void FileUpdate(struct UserNode* head)
{
	//Open the file and judge whether it is opened successfully
	FILE* fw = fopen("USERS_TEMP.TXT", "w");
	if(fw == NULL)
	{
		//File open failure warning
		printf("\t\tRegistration failed!\n");
		{
			sound(1111);
			delay(222);
			nosound();
		}
		getch();
		FreeCalloc(head);
		exit(-1);
	}
	if(head == NULL)
	{
		//Changed data loss warning
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
	//Changed data write
	for(pNode temp = head; temp != NULL; temp = temp->next)
	{
		fprintf(fw, temp->name);
		fprintf(fw, "\t");
		fprintf(fw, temp->passwords);
		fprintf(fw, "\t");
		fprintf(fw, "%s", temp->phone);
		fprintf(fw, "\t");
		fprintf(fw, "%d", temp->identity);
		fprintf(fw, "\n");
		temp = temp->next;
	}
	//Delete original file
	remove("USERS.TXT");
	//Rename new file
	rename("USERS_TEMP.TXT", "USERS.TXT");

	return;
}


//User information management system
void AccountUpdate(struct UserNode* u)
{
	while(1)
	{
		clrscr();
		//Output user information
		printf("********************************************************************************\n");
		printf("***   [1] Name   ****   [2] Passwords   ****   [3] Phone   ****   [9] Back   ***\n");
		printf("********************************************************************************\n");
		//Read selection
		int way = 1, select = 0;
		printf("Please intput your choice: No.");
		scanf("%d", &way);
		while(1)
		{
			switch(way)
			{
				case 1:
					printf("Your name: %20s", u->name);
					printf("Do you want to change the username?(y/n):  ");
					if(getch() == 'Y' || getch() == 'y')
					{
						select = 1;
						goto next;
					}
					else if(getch() == 'N' || getch() == 'n')
						break;
					else
						way = 0;
					break;
				case 2:
					printf("Your passwords: %20s", u->passwords);
					printf("Do you want to change the passwords?(y/n):  ");
					if(getch() == 'Y' || getch() == 'y')
					{
						select = 2;
						goto next;
					}
					else if(getch() == 'N' || getch() == 'n')
						break;
					else
						way = 0;
					break;
				case 3:
					printf("Your phone number: %20s", u->phone);
					printf("Do you want to change the phone number?(y/n):  ");
					if(getch() == 'Y' || getch() == 'y')
					{
						select = 3;
						goto next;
					}
					else if(getch() == 'N' || getch() == 'n')
						break;
					else
						way = 0;
					break;
				case 9:
					return;
				case 0:
				default:
					printf("Please input the right choice again: No.");
					scanf("%d", way);
					clrscr();
					//Output user information
					printf("********************************************************************************\n");
					printf("***   [1] Name   ****   [2] Passwords   ****   [3] Phone   ****   [9] Back   ***\n");
					printf("********************************************************************************\n");
					break;
			}
		}
		next:

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
				if(itemp->name[0] == '\0')
				{
					temp->next = NULL;
					free(itemp);
					break;
				}
				temp->next = itemp;
				temp = itemp;
			}
		}
		//Close the file and prepare for modification
		fclose(fp);

		int UpdateCount = 0;
		while(1)
		{
			//Select Modify
			switch(select)
			{
				case 1:
					while(temp)
					{
						pNode p = head;
						for(; p != NULL; p = p->next)
						{
							//Match user
							if (strcmp(p->name, u->name) == 0 && strcmp(p->passwords, u->passwords) == 0)//Match user's information
							{
								//Enter user's new nmae
								printf("Input your new username: ");
								scanf("%s", p->name);
								strcpy(u->name, p->name);
								UpdateCount++;
							}
							//Loss warning
							if(p->next == NULL)
							{
								printf("\tData loss, registration failed!");
								{
									sound(1111);
									delay(111);
									nosound();
								}
								goto end;
							}
						}
					}
					break;
				case 2:
					while(temp)
					{
						pNode p = head;
						for(; p != NULL; p = p->next)
						{
							//Match user
							if (strcmp(p->name, u->name) == 0 && strcmp(p->passwords, u->passwords) == 0)//Match user's information
							{
								char passwords1[20], passwords2[20];
								//Enter user's new passwords
								printf("Input your new passwords:\n\t(Just required the length of 16,including letters, number and '@')");
								gotoxy(37, 19);
								scanf("%s", passwords1);
								//Password privacy protection
								gotoxy(1, 19);
								clreol();
								//Confirm user's passwords
								printf("\tPlease enter your passwords again:");
								scanf("%s", passwords2);
								//Password privacy protection
								gotoxy(1, 19);
								clreol();
								if(strcmp(passwords1, passwords2) == 0)
								{
									strcpy(p->passwords, passwords2);
									strcpy(u->passwords, p->passwords);
									UpdateCount++;
								}
								else
								{
									//Change failed warning
									printf("The two passwords are inconsistent. Modification failed!");
									{
										sound(1111);
										delay(111);
										nosound();
									}
								}
							}
							//Loss warning
							if(p->next == NULL)
							{
								printf("\tData loss, registration failed!");
								{
									sound(1111);
									delay(111);
									nosound();
								}
								goto end;
							}
						}
					}
					break;
				case 3:
					while(temp)
					{
						pNode p = head;
						for(; p != NULL; p = p->next)
						{
							//Match user
							if (strcmp(p->name, u->name) == 0 && strcmp(p->passwords, u->passwords) == 0)//Match user's information
							{
								printf("Input your new phone number:");
								scanf("%s", p->phone);
								strcpy(u->phone, p->phone);
								UpdateCount++;
							}
							//Loss warning
							if(p->next == NULL)
							{
								printf("\tData loss, registration failed!");
								{
									sound(1111);
									delay(111);
									nosound();
								}
								goto end;
							}
						}
					}
					break;
				default:
					break;
			}
		}
		

	end:
	if(UpdateCount)
		FileUpdate(head);
	FreeCalloc(head);
	return;
}



/*
***********************************************
*         Designed by Dylan Simon Su          *
*  Translation comes from Baidu translation.  *
*          Dylan Simon Su copyright.          *
***********************************************
*/
