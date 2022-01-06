#include"NEEDED.H"

//Free requested dynamic memory of the news information
void nFreeCalloc(struct NewsForm* head)
{
	npNode p;
	//Cycle to release all requested temporary memory blocks
	while(head)
	{
		p = head;
		head = head->next;
		free(p);//Free temporary memory blocks
	}
	return;
}


//Free requested dynamic memory of the comments' information
void cFreeCalloc(struct CommentForm* head)
{
	cpNode p;
	//Cycle to release all requested temporary memory blocks
	while(head)
	{
		p = head;
		head = head->next;
		free(p);//Free temporary memory blocks
	}
	return;
}


//Create a news interface
void NewsHome(void)
{
	clrscr();
	//Home interface output
	printf("*******************************************************************************\n");
	printf("*  [1]Newsletter  ***   [2]Notice   ***   [3]Account-Management  **  [0]Exit  *\n");
	printf("*******************************************************************************\n");
	printf("***     [1]Read      [2]New       [3]Find       [4]MyNews      [0]Exit      ***\n");
	printf("*******************************************************************************\n");
	return;
}


//Create a text editing window
void TextBox(void)
{
	clrscr();
	printf("  [1]Write  [2]Save&Back  [0]Cancel&Back    Please input your choice: No.\n");
	printf("********************************************************************************");
	return;
}

//Announce system notice
void Notice(void)
{
	gotoxy(1, 4);
	clreol();

	//Open the file
	FILE* fp = fopen("NOTICE.TXT", "r");
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

	printf("\n");
	char ch;
	if((ch = fgetc(fp)) == EOF)
		printf("\nNotice Null...");
	else
		putchar(ch);

	while((ch = fgetc(fp)) != EOF)
		putchar(ch);//Read the file and output the notice
	//Close the file after file-reading ends
	fclose(fp);
	//End prompt
	printf("\n\n\t* End *");
	getch();
	return;
}


//Read & Choose the news
void NewsRead(char FileName[10], int AuditCode)
{
	//Read the news from the file
	FILE* fp = fopen(FileName, "r");
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
	//Read the content of the file
	npNode temp = (npNode)calloc(1, sizeof(nLNode));
	npNode head = temp;
	char ch;
	int i = 0, NewsCount = 0;
	while(1)
	{
		if((ch = fgetc(fp)) == EOF)
			break;

		npNode tmp = (npNode)calloc(1, sizeof(nLNode));
		if(ch == '{')
			for(i = 0; (ch = fgetc(fp)) != '}'; i++)
				tmp->topic[i] = ch;
		tmp->topic[i] = '\0';
		ch = fgetc(fp);
		if((ch = fgetc(fp)) == '{')
			for(i = 0; (ch = fgetc(fp)) != '}'; i++)
				tmp->content[i] = ch;
		tmp->content[i] = '\0';
		ch = fgetc(fp);
		if((ch = fgetc(fp)) == '{')
			for(i = 0; (ch = fgetc(fp)) != '}'; i++)
				tmp->type[i] = ch;
		tmp->type[i] = '\0';
		ch = fgetc(fp);
		if((ch = fgetc(fp)) == '{')
			for(i = 0; (ch = fgetc(fp)) != '}'; i++)
				tmp->author[i] = ch;
		tmp->author[i] = '\0';
		ch = fgetc(fp);
			fscanf(fp, "%d%d%d%d%d%d", &tmp->UpdatedTime.year, &tmp->UpdatedTime.month, &tmp->UpdatedTime.day, &tmp->UpdatedTime.hour, &tmp->UpdatedTime.minute, &tmp->AuditCode);
		ch = fgetc(fp);
		ch = fgetc(fp);
		
		temp->next = tmp;
		temp = temp->next;
		if (temp->AuditCode == AuditCode)
			NewsCount++;
	}
	temp->next = NULL;
	npNode rubbish = head;
	head = head->next;
	free(rubbish);
	//Close the file after the ending of file-reading
	fclose(fp);

	//Data loss warning
	if(!NewsCount)
	{
		printf("Connot found the data!");
		{
			sound(1111);
			delay(111);
			nosound();
		}
		getch();
		//Free the temporary memory block
		nFreeCalloc(head);
		return;
	}

    //Choose the news you wanna read
	temp = head;
	int TopicNum = 0, page = 1;
	while(NewsCount)
	{
		Interface();
		printf("Total num: %d\n", NewsCount);
		npNode np = temp;
		for(int i = 1; i <= 7 && TopicNum < NewsCount; temp = temp->next)
			if(temp->AuditCode == AuditCode)
			{
				printf("\n[%d] %s\n", i++, temp->topic);
				TopicNum++;
			}

		printf("\n  Page %d  [9]Next  [0]Back  Your choice: No.", page);
		int choice = 9;
		scanf("%d", &choice);
		if(choice >= 1 && choice <= 7)
		{
			for(int c = 1; c < choice; c++)
					np = np->next;
			while(1)
			{
				clrscr();
				printf("\t%s\n", np->topic);
				printf("%s\n", np->content);
				printf("\t%s", np->type);
				printf("  %s", np->author);
				printf("  %d.%d.%d %d:%d\n", np->UpdatedTime.year, np->UpdatedTime.month, np->UpdatedTime.day, np->UpdatedTime.hour, np->UpdatedTime.minute);

				int ochoice = 9;
				printf("\t[1]Comment [0]Back\tPlease input your choice: No.");
				int y = wherey();
				scanf("%d", &ochoice);
				while(ochoice != 0 && ochoice != 1)
				{
					gotoxy(1, y);
					clreol();
					printf("\t[1]Comment [0]Back\tPlease input right choice: No.");
					scanf("%d", &ochoice);
				}

				if(ochoice == 1)
					CommentRead(np);
				else if(ochoice == 0)
					break;
			}
			
			page++;
			if(TopicNum >= NewsCount)
			{
				temp = head;
				page = 1;
				TopicNum = 0;
			}
		}
		else if(choice == 8)
		{
			Interface();
			printf("\n\n\n\n\t\t  Your total number of news releases is %d...", NewsCount);
			getch();
		}
		else if(choice == 9)
		{
			page++;
			if(TopicNum >= NewsCount)
			{
				temp = head;
				page = 1;
				TopicNum = 0;
			}
		}
		else if(choice == 0)
			break;
		else
		{
			//Input error warning
			printf("Input error, please re-enter!");
			{
				sound(1111);
				delay(111);
				nosound();
			}
			getch();
		}
	}

	//Free the temporary memory block
	nFreeCalloc(head);
	return;
}


// The function of reading text
void TextIn(char *p, int num)
{
	char space[1700];
	int i = 0;
	while(1)
	{
		space[i] = getchar();
		if(space[i] == '\r' || space[i] == '\n')
		{
			space[i] = '\0';
			break;
		}
		else
		{
			i++;
			space[i] = '\0';
		}
	}
	if(i > num)
	{
		printf("\n  %4dwords  The article is too long! \aPlease modify and re-enter!", i);
		{
			sound(1111);
			delay(111);
			nosound();
		}
		getch();
		p[0] = '\0';
	}
	else
		for(int t = 0; t <= i; t++)
			*(p + t) = space[t];
	return;
}


//Read the news which will be input
int NewsIn(struct NewsForm *temp, struct UserNode *u)
{
	char topic[66] = "\0", content[1700] = "\0", type[20] = "\0";
	while(1)
	{
		TextBox();
		gotoxy(74, 1);
		int nway = 1;
		scanf("%d", &nway);
		if(nway == 1)
		{
			gotoxy(3, 3);
			getchar();
			printf("Please input your news topic(The length cannot exceed 50 characters.):\n");
			TextIn(topic, 66);
			if(topic[0] == '\0')
				return 0;
			TextBox();
			gotoxy(3, 3);
			printf("Please input your news content(The length cannot exceed 1700 characters):\n");
			TextIn(content, 1700);
			if(content[0] == '\0')
				return 0;
			TextBox();
			gotoxy(3, 3);
			printf("Please input your news type(The length cannot exceed 20 characters):\n");
			TextIn(type, 20);
			if(type[0] == '\0')
				return 0;

			//Redisplay the input
			TextBox();
			gotoxy(3, 3);
			printf("\t%s\n", topic);
			printf("%s\n", content);
			printf("  %s", type);
			printf("  Author:%s", u->name);
			time_t t = time(NULL);
			struct tm time = *localtime(&t);
			printf("    %d-%d-%d %d:%d", time.tm_year + 1900, time.tm_mon + 1, time.tm_mday, time.tm_hour, time.tm_min);
			gotoxy(74, 1);
			scanf("%d", &nway);
			if(nway != 0)
			{
				strcpy(temp->topic, topic);
				strcpy(temp->content, content);
				strcpy(temp->type, type);
				strcpy(temp->author, u->name);
				temp->UpdatedTime.year = time.tm_year + 1900;
				temp->UpdatedTime.month = time.tm_mon + 1;
				temp->UpdatedTime.day = time.tm_mday;
				temp->UpdatedTime.hour = time.tm_hour;
				temp->UpdatedTime.minute = time.tm_min;
				if(u->identity == 1 || u->identity == 9)
					temp->AuditCode = 1;
				else
					temp->AuditCode = 0;
				return 1;
			}
			else if(nway == 0)
				return -1;
		}
		else if(nway == 0)
			return -1;
		else
		{
			gotoxy(1, 4);
			printf("Input error, please re-enter!");
			getch();
		}
	}
}


//Read & Write the new news into the file
void NewsWrite(struct UserNode *u)
{
	npNode temp = (npNode)calloc(1, sizeof(nLNode));
	temp->next = NULL;
	int wchoice = 0;
	wchoice = NewsIn(temp, u);

	while(!wchoice)
	{
		clrscr();
		printf("\n\tPlease re-enter all the information of the news...");
		getch();
		wchoice = NewsIn(temp, u);
		if(wchoice)
			break;
	}
	if (wchoice == -1)
	{
		//Free the temporary memory block
		free(temp);
		//Prompt for error
		clrscr();
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
		printf("\n\t\t             Cancel successfully!");
		getch();
		return;
	}
	
	//Judge whether to write into the file or not
	if(!temp)
	{
		//Prompt for writing cancel
		clrscr();
		for(int i = 1; i < 80; i++)
		{
			printf("*");
			delay(44);
		}
		//news data loss warning
		printf("\n\t\tData loss, writing failed!");
		{
			sound(1111);
			delay(111);
			nosound();
		}
		getch();
		//Free the temporary memory block
		free(temp);
		return;
	}
	//Open the file and judge whether it is opened successfully
	FILE* fw = fopen("NEWS.TXt", "a+");
	if(fw == NULL)
	{
		//File open failure warning
		printf("\t\tNews-writing failed!");
		{
			sound(1111);
			delay(222);
			nosound();
		}
		getch();
		//Free the temporary memory block
		free(temp);
		exit(-1);
	}
	//News data write
	if(temp->topic[0] != '\0' && temp->content[0] != '\0' && temp->type[0] != '\0' && strcmp(temp->author, u->name) == 0)
	{
		fprintf(fw, "{");
		fprintf(fw, "%s", temp->topic);
		fprintf(fw, "}\n{");
		fprintf(fw, "%s", temp->content);
		fprintf(fw, "}\n{");
		fprintf(fw, "%s", temp->type);
		fprintf(fw, "}\n{");
		fprintf(fw, "%s", temp->author);
		fprintf(fw, "}\n");
		fprintf(fw, "%d", temp->UpdatedTime.year);
		fprintf(fw, "\t");
		fprintf(fw, "%d", temp->UpdatedTime.month);
		fprintf(fw, "\t");
		fprintf(fw, "%d", temp->UpdatedTime.day);
		fprintf(fw, "\t");
		fprintf(fw, "%d", temp->UpdatedTime.hour);
		fprintf(fw, "\t");
		fprintf(fw, "%d", temp->UpdatedTime.minute);
		fprintf(fw, "\t");
		fprintf(fw, "%d", temp->AuditCode);
		fprintf(fw, "\n\n");

		//Close the file after successful writing
		fclose(fw);
		//Free the temporary memory block
		free(temp);
		//Prompt for successful writing
		clrscr();
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
		printf("\n\t\t           News-writing succeeded!");
		getch();
		return;
	}
	else
	{
		fclose(fw);//Close the file
		//File open failure warning
		printf("\tData loss, news-writing failed!");
		{
			sound(1111);
			delay(222);
			nosound();
		}
		getch();
		//Free the temporary memory block
		free(temp);
		return;
	}
}


//Find news by time and type
void NewsFind(void)
{
	gotoxy(1, 7);
	clreol();

	//Read the news from the file
	FILE* fp = fopen("NEWS.TXT", "r");
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
	//Read the content of the file
	npNode temp = (npNode)calloc(1, sizeof(nLNode));
	npNode head = temp;
	char ch;
	int i = 0, AllNewsCount = 0;
	while(1)
	{
		if((ch = fgetc(fp)) == EOF)
			break;

		npNode tmp = (npNode)calloc(1, sizeof(nLNode));
		if(ch == '{')
			for(i = 0; (ch = fgetc(fp)) != '}'; i++)
				tmp->topic[i] = ch;
		tmp->topic[i] = '\0';
		ch = fgetc(fp);
		if((ch = fgetc(fp)) == '{')
			for(i = 0; (ch = fgetc(fp)) != '}'; i++)
				tmp->content[i] = ch;
		tmp->content[i] = '\0';
		ch = fgetc(fp);
		if((ch = fgetc(fp)) == '{')
			for(i = 0; (ch = fgetc(fp)) != '}'; i++)
				tmp->type[i] = ch;
		tmp->type[i] = '\0';
		ch = fgetc(fp);
		if((ch = fgetc(fp)) == '{')
			for(i = 0; (ch = fgetc(fp)) != '}'; i++)
				tmp->author[i] = ch;
		tmp->author[i] = '\0';
		ch = fgetc(fp);
			fscanf(fp, "%d%d%d%d%d%d", &tmp->UpdatedTime.year, &tmp->UpdatedTime.month, &tmp->UpdatedTime.day, &tmp->UpdatedTime.hour, &tmp->UpdatedTime.minute, &tmp->AuditCode);
		ch = fgetc(fp);
		ch = fgetc(fp);

		temp->next = tmp;
		temp = temp->next;
		if(temp->AuditCode == 1)
			AllNewsCount++;
	}
	temp->next = NULL;
	npNode rubbish = head;
	head = head->next;
	free(rubbish);
	//Close the file after the ending of file-reading
	fclose(fp);

	if(!AllNewsCount)
	{
		printf("Connot found the data!");
		{
			sound(1111);
			delay(111);
			nosound();
		}
		getch();
		//Free the temporary memory block
		nFreeCalloc(head);
		return;
	}

	//Select search method
	while(head)
	{
		//Initialization
		temp = head;

		int schoice = 9;
		clrscr();
		printf("*NEWS-SEARCH*   [1]Time-search  [2]Type-search  [3]Time&Type-serch  [0]Back\n");
		printf("Please input you choice: No.");
		scanf("%d", &schoice);
		getchar();
		//Search for relevant information
		if(schoice == 1)
		{
			gotoxy(1, 4);
			clreol();

			//Time-searching
			int year = 0, month = 0, day = 0;
			while(1)
			{
				printf("Input the time(year-month-day), '0-0-0' for search end: ");
				scanf("%d-%d-%d", &year, &month, &day);
				if(year >= 1958)//GDUT establishment date: 1958-11-10
				{
					if(month >= 1 && month <= 12)
					{
						if((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day >= 1 && day <= 31)
							goto TimeSearch;
						else if((month == 4 || month == 6 || month == 9 || month == 11) && day >= 1 && day <= 30)
							goto TimeSearch;
						else if((year%4 == 0 && (year % 100 != 0 || year % 400 == 0)) && month == 2 && day >= 1 && day <= 29)
							goto TimeSearch;
						else if(!(year%4 == 0 && (year % 100 != 0 || year % 400 == 0)) && month == 2 && day >= 1 && day <= 28)
							goto TimeSearch;
						else
						{
							gotoxy(1, 25);
							clreol();
							printf("\aInput error, please re-enter!");
							getch();
							gotoxy(1, 25);
							clreol();
							gotoxy(1, 4);
							break;
						}

						TimeSearch:
							npNode TimeNode = (npNode)calloc(1, sizeof(nLNode));
							npNode TimeHead = TimeNode;

							int TimeNewsCount = 0, num1 = 0;
							for(temp = head; num1 < AllNewsCount; num1++, temp = temp->next)
								if(temp->UpdatedTime.year == year && temp->UpdatedTime.month == month && temp->UpdatedTime.day == day && temp->AuditCode == 1)
								{
									strcpy(TimeNode->topic, temp->topic);
									strcpy(TimeNode->content, temp->content);
									strcpy(TimeNode->type, temp->type);
									strcpy(TimeNode->author, temp->author);
									TimeNode->UpdatedTime.year = temp->UpdatedTime.year;
									TimeNode->UpdatedTime.month = temp->UpdatedTime.month;
									TimeNode->UpdatedTime.day = temp->UpdatedTime.day;
									TimeNode->UpdatedTime.hour = temp->UpdatedTime.hour;
									TimeNode->UpdatedTime.minute = temp->UpdatedTime.minute;
									TimeNode->AuditCode = temp->AuditCode;
									TimeNewsCount++;
									break;
								}
							for(temp = temp->next; num1 < AllNewsCount; num1++, temp = temp->next)
							{
								npNode TimeTemp = (npNode)calloc(1, sizeof(nLNode));
								if(temp->UpdatedTime.year == year && temp->UpdatedTime.month == month && temp->UpdatedTime.day == day && temp->AuditCode == 1)
								{
									strcpy(TimeTemp->topic, temp->topic);
									strcpy(TimeTemp->content, temp->content);
									strcpy(TimeTemp->type, temp->type);
									strcpy(TimeTemp->author, temp->author);
									TimeTemp->UpdatedTime.year = temp->UpdatedTime.year;
									TimeTemp->UpdatedTime.month = temp->UpdatedTime.month;
									TimeTemp->UpdatedTime.day = temp->UpdatedTime.day;
									TimeTemp->UpdatedTime.hour = temp->UpdatedTime.hour;
									TimeTemp->UpdatedTime.minute = temp->UpdatedTime.minute;
									TimeTemp->AuditCode = temp->AuditCode;
									TimeNode->next =TimeTemp;
									TimeNewsCount++;
									TimeNode = TimeNode->next;
								}
								else
									free(TimeTemp);
							}
							TimeNode->next = NULL;

							gotoxy(1, 4);
							clreol();
							if(!TimeNewsCount)
							{
								printf("Connot found the relevant news!");
								{
									sound(1111);
									delay(111);
									nosound();
								}
								getch();
								//Free the temporary memory block
								nFreeCalloc(TimeHead);
								return;
							}

							//Choose the news you wanna read
							int TopicNum = 0, page = 1;
							TimeNode = TimeHead;
							while(TimeNewsCount)
							{
								clrscr();
								printf("*NEWS-SEARCH*   [1]Time-search  [2]Type-search  [3]Time&Type-serch  [0]Back\n\n");
								npNode np = TimeNode;
								for(int i = 1; i <= 8 && TopicNum < TimeNewsCount; TopicNum++, i++, TimeNode = TimeNode->next)
									printf("\n[%d] %s\n", i, TimeNode->topic);
									

								printf("\n  Page%2d  [9]Next  [0]Back  Your choice: No.", page);
								int choice = 9;
								scanf("%d", &choice);
								if(choice >= 1 && choice <= 8)
								{
									for(int c = 1; c < TopicNum; c++)
										np = np->next;
									clrscr();
									clrscr();
									printf("*NEWS-SEARCH*   [1]Time-search  [2]Type-search  [3]Time&Type-serch  [0]Back\n");
									printf("\n\t%s\n", np->topic);
									printf("%s\n", np->content);
									printf("\n  %s", np->type);
									printf("  %s", np->author);
									printf("  %d.%d.%d %d:%d\n", np->UpdatedTime.year, np->UpdatedTime.month, np->UpdatedTime.day, np->UpdatedTime.hour, np->UpdatedTime.minute);

									int ochoice = 9;
									printf("\n\t[0]Back\tPlease input your choice: No.");
									int y = wherey();
									scanf("%d", &ochoice);
									while(ochoice)
									{
										gotoxy(1, y);
										clreol();
										printf("\n\t[0]Back\tPlease input right choice: No.");
										scanf("%d", &ochoice);
									}
									page++;
									
									if(TopicNum >= TimeNewsCount)
									{
										TimeNode = TimeHead;
										page = 1;
										TopicNum = 0;
									}
								}
								else if(choice == 9)
								{
									page++;
									if(TopicNum >= TimeNewsCount)
									{
										TimeNode = TimeHead;
										page = 1;
										TopicNum = 0;
									}
									continue;
								}
								else if(choice == 0)
									break;
								else
								{
									gotoxy(1, 25);
									printf("\nInput error, please re-enter!");
									{
										sound(1111);
										delay(111);
										nosound();
									}
									getch();
								}
							}
							//Free the temporary memory block
							nFreeCalloc(TimeNode);
					}
					else if(year == 0 && month == 0 && day == 0)
						break;
					else
					{
						gotoxy(1, 4);
						clreol();
						printf("\aInput error, please re-enter!");
						getch();
						gotoxy(1, 4);
						clreol();
						break;
					}
				}
				else
				{
					gotoxy(1, 4);
					clreol();
					printf("Input error, please re-enter!");
					getch();
					gotoxy(1, 4);
					clreol();
					break;
				}
			}
		}
		else if(schoice == 2)
		{
			gotoxy(1, 4);
			clreol();

			//Type-searching
			char type[20] = "\0";
			printf("Please input the type of the news: ");
			scanf("%s", type);

			npNode TypeNode = (npNode)malloc(sizeof(nLNode));
			npNode TypeHead = TypeNode;
			int TypeNewsCount = 0, num2 = 0;
			for(temp = head; num2 < AllNewsCount; num2++, temp = temp->next)
				if(strcmp(temp->type, type) == 0 && temp->AuditCode == 1)
				{
					strcpy(TypeNode->topic, temp->type);
					strcpy(TypeNode->content, temp->content);
					strcpy(TypeNode->type, temp->type);
					strcpy(TypeNode->author, temp->author);
					TypeNode->UpdatedTime.year = temp->UpdatedTime.year;
					TypeNode->UpdatedTime.month = temp->UpdatedTime.month;
					TypeNode->UpdatedTime.day = temp->UpdatedTime.day;
					TypeNode->UpdatedTime.hour = temp->UpdatedTime.hour;
					TypeNode->UpdatedTime.minute = temp->UpdatedTime.minute;
					TypeNode->AuditCode = temp->AuditCode;
					TypeNewsCount++;
					break;
				}
			for(temp = temp->next; num2 < AllNewsCount; num2++, temp = temp->next)
			{
				npNode TypeTemp = (npNode)calloc(1, sizeof(nLNode));
				if(strcmp(temp->type, type) == 0 && temp->AuditCode == 1)
				{
					strcpy(TypeTemp->topic, temp->topic);
					strcpy(TypeTemp->content, temp->content);
					strcpy(TypeTemp->type, temp->type);
					strcpy(TypeTemp->author, temp->author);
					TypeTemp->UpdatedTime.year = temp->UpdatedTime.year;
					TypeTemp->UpdatedTime.month = temp->UpdatedTime.month;
					TypeTemp->UpdatedTime.day = temp->UpdatedTime.day;
					TypeTemp->UpdatedTime.hour = temp->UpdatedTime.hour;
					TypeTemp->UpdatedTime.minute = temp->UpdatedTime.minute;
					TypeTemp->AuditCode = temp->AuditCode;
					TypeNode->next = TypeTemp;
					TypeNewsCount++;
					TypeNode = TypeNode->next;
				}
				else
					free(TypeTemp);
			}
			TypeNode->next = NULL;

			gotoxy(1, 4);
			clreol();
			if(!TypeNewsCount)
			{
				printf("Connot found the relevant news!");
				{
					sound(1111);
					delay(111);
					nosound();
				}
				getch();
				//Free the temporary memory block
				nFreeCalloc(TypeHead);
				return;
			}

			//Choose the news you wanna read
			int TopicNum = 0, page = 1;
			TypeNode = TypeHead;
			while(TypeNewsCount)
			{
				Interface();
				npNode np = TypeNode;
				for(int i = 1; i <= 8 && TopicNum < TypeNewsCount; TopicNum++, i++, TypeNode = TypeNode->next)
					printf("\n[%d] %s\n", i, TypeNode->topic);

				printf("\n  Page%2d  [9]Next  [0]Back  Your choice: No.", page);

				int choice = 9;
				scanf("%d", &choice);
				if(choice >= 1 && choice <= 8)
				{
					for(int c = 1; c < TopicNum; c++)
						np = np->next;
					clrscr();
					Interface();
					printf("\n\t%s\n", np->topic);
					printf("%s\n", np->content);
					printf("\n  %s", np->type);
					printf("  %s", np->author);
					printf("  %d.%d.%d %d:%d\n", np->UpdatedTime.year, np->UpdatedTime.month, np->UpdatedTime.day, np->UpdatedTime.hour, np->UpdatedTime.minute);

					int ochoice = 9;
					printf("\n\t[0]Back\tPlease input your choice: No.");
					int y = wherey();
					scanf("%d", &ochoice);
					while(ochoice)
					{
						gotoxy(1, y);
						clreol();
						printf("\n\t[0]Back\tPlease input right choice: No.");
						scanf("%d", &ochoice);
					}
					page++;
					
					if(TopicNum >= TypeNewsCount)
					{
						TypeNode = TypeHead;
						page = 1;
						TopicNum = 0;
					}
				}
				else if(choice == 9)
				{
					page++;
					if(TopicNum >= TypeNewsCount)
					{
						TypeNode = TypeHead;
						page = 1;
						TopicNum = 0;
					}
					continue;
				}
				else if(choice == 0)
					break;
				else
				{
					printf("Input error, please re-enter!");
					{
						sound(1111);
						delay(111);
						nosound();
					}
					getch();
				}
			}
			//Free the temporary memory block
			nFreeCalloc(TypeHead);
		}
		else if (schoice == 3)
		{
			gotoxy(1, 4);
			clreol();

			//Time-in
			int year = 0, month = 0, day = 0;
			while(1)
			{
				printf("Input the time(year-month-day), '0-0-0' for search end: ");
				scanf("%d-%d-%d", &year, &month, &day);
				if(year >= 1958)//GDUT establishment date: 1958-11-10
				{
					if(month >= 1 && month <= 12)
					{
						if((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day >= 1 && day <= 31)
							goto MixSearch;
						else if((month == 4 || month == 6 || month == 9 || month == 11) && day >= 1 && day <= 30)
							goto MixSearch;
						else if((year%4 == 0 && (year % 100 != 0 || year % 400 == 0)) && month == 2 && day >= 1 && day <= 29)
							goto MixSearch;
						else if(!(year%4 == 0 && (year % 100 != 0 || year % 400 == 0)) && month == 2 && day >= 1 && day <= 28)
							goto MixSearch;
						else
						{
							gotoxy(1, 4);
							clreol();
							printf("Input error, please re-enter!");
							getch();
							gotoxy(1, 4);
							clreol();
							break;
						}

						MixSearch:

						//Type-in
						char type[20] = "\0";
						printf("Please input the type of the news: ");
						scanf("%s", type);
						gotoxy(1, 4);
						clreol();

						npNode SearchNode = (npNode)malloc(sizeof(nLNode));
						npNode SearchHead = SearchNode;
						int MixNewsCount = 0, num3 = 0;
						for(temp = head; num3 < AllNewsCount; num3++, temp = temp->next)
							if(temp->UpdatedTime.year == year &&temp->UpdatedTime.month == month && temp->UpdatedTime.day == day && strcmp(temp->type, type) == 0 && temp->AuditCode == 1)
							{
								strcpy(SearchNode->topic, temp->topic);
								strcpy(SearchNode->content, temp->content);
								strcpy(SearchNode->type, temp->type);
								strcpy(SearchNode->author, temp->author);
								SearchNode->UpdatedTime.year = temp->UpdatedTime.year;
								SearchNode->UpdatedTime.month = temp->UpdatedTime.month;
								SearchNode->UpdatedTime.day = temp->UpdatedTime.day;
								SearchNode->UpdatedTime.hour = temp->UpdatedTime.hour;
								SearchNode->UpdatedTime.minute = temp->UpdatedTime.minute;
								SearchNode->AuditCode = temp->AuditCode;
								MixNewsCount++;
								break;
							}
						for(temp = temp->next; num3 < AllNewsCount; num3++, temp = temp->next)
						{
							npNode MixTemp = (npNode)calloc(1, sizeof(nLNode));
							if(temp->UpdatedTime.year == year &&temp->UpdatedTime.month == month && temp->UpdatedTime.day == day && strcmp(temp->type, type) == 0 && temp->AuditCode == 1)
							{
								strcpy(MixTemp->topic, temp->topic);
								strcpy(MixTemp->content, temp->content);
								strcpy(MixTemp->type, temp->type);
								strcpy(MixTemp->author, temp->author);
								MixTemp->UpdatedTime.year = temp->UpdatedTime.year;
								MixTemp->UpdatedTime.month = temp->UpdatedTime.month;
								MixTemp->UpdatedTime.day = temp->UpdatedTime.day;
								MixTemp->UpdatedTime.hour = temp->UpdatedTime.hour;
								MixTemp->UpdatedTime.minute = temp->UpdatedTime.minute;
								MixTemp->AuditCode = temp->AuditCode;
								SearchNode->next = MixTemp;
								MixNewsCount++;
								SearchNode = SearchNode->next;
							}
							else
								free(MixTemp);
						}
						SearchNode->next = NULL;

						gotoxy(1, 4);
						clreol();
						if(!MixNewsCount)
						{
							printf("Connot found the relevant news!");
							{
								sound(1111);
								delay(111);
								nosound();
							}
							getch();
							//Free the temporary memory block
							nFreeCalloc(SearchHead);
							return;
						}

						//Choose the news you wanna read
						int TopicNum = 0, page = 1;
						SearchNode = SearchHead;
						while(MixNewsCount)
						{
							Interface();
							npNode np = SearchNode;
							for(int i = 1; i <= 8 && TopicNum < MixNewsCount; TopicNum++, i++, SearchNode = SearchNode->next)
								printf("\n[%d] %s\n", i, SearchNode->topic);
							
							int choice = 9;
							printf("\n  Page%2d  [9]Next  [0]Back  Your choice: No.", page);
							scanf("%d", &choice);
							if(choice >= 1 && choice <= 8)
							{
								for(int c = 1; c < TopicNum; c++)
									np = np->next;
								clrscr();
								Interface();
								printf("\n\t%s\n", np->topic);
								printf("%s\n", np->content);
								printf("\n  %s", np->type);
								printf("  %s", np->author);
								printf("  %d.%d.%d %d:%d\n", np->UpdatedTime.year, np->UpdatedTime.month, np->UpdatedTime.day, np->UpdatedTime.hour, np->UpdatedTime.minute);

								int ochoice = 9;
								printf("\n\t[0]Back\tPlease input your choice: No.");
								int y = wherey();
								scanf("%d", &ochoice);
								while(ochoice)
								{
									gotoxy(1, y);
									clreol();
									printf("\n\t[0]Back\tPlease input right choice: No.");
									scanf("%d", &ochoice);
								}
								page++;
								
								if(TopicNum >= MixNewsCount)
								{
									SearchNode = SearchHead;
									page = 1;
									TopicNum = 0;
								}
							}
							else if(choice == 9)
							{
								page++;
								if(TopicNum >= MixNewsCount)
								{
									SearchNode = SearchHead;
									page = 1;
									TopicNum = 0;
								}
								continue;
							}
							else if(choice == 0)
								break;
							else
							{
								printf("Input error, please re-enter!");
								{
									sound(1111);
									delay(111);
									nosound();
								}
								getch();
							}
						}
						//Free the temporary memory block
						nFreeCalloc(SearchNode);
					}
					else
					{
						gotoxy(1, 4);
						clreol();
						printf("Input error, please re-enter!");
						getch();
						gotoxy(1, 4);
						clreol();
						break;
					}
				}
				else
				{
					gotoxy(1, 4);
					clreol();
					printf("Input error, please re-enter!");
					getch();
					gotoxy(1, 4);
					clreol();
					break;
				}
			}
		}
		else if(schoice == 0)
		{
			//Free the temporary memory block
			nFreeCalloc(head);
			return;
		}
		else
		{
			gotoxy(1, 4);
			clreol();
			printf("Input error, please enter agian!");
			{
				sound(1111);
				delay(111);
				nosound();
			}
			getch();
			gotoxy(1, 4);
			clreol();
		}
	}

	//Free the temporary memory block
	nFreeCalloc(head);
	return;
}


//To update news's information
void nFileUpdate(char FileName[20], struct NewsForm* head)
{
	//Open the file and judge whether it is opened successfully
	FILE* fw = fopen("TEMP.TXT", "w");
	if(fw == NULL)
	{
		//File open failure warning
		printf("\t\tRegistration failed!");
		{
			sound(1111);
			delay(222);
			nosound();
		}
		getch();
		nFreeCalloc(head);
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
		nFreeCalloc(head);
		exit(-1);
	}
	//Changed data write
	for(npNode temp = head; temp != NULL; temp = temp->next)
	{
		fprintf(fw, "{");
		fprintf(fw, temp->topic);
		fprintf(fw, "}\n{");
		fprintf(fw, temp->content);
		fprintf(fw, "}\n{");
		fprintf(fw, temp->type);
		fprintf(fw, "}\n{");
		fprintf(fw, temp->author);
		fprintf(fw, "}\n");
		fprintf(fw, "%d", temp->UpdatedTime.year);
		fprintf(fw, "\t");
		fprintf(fw, "%d", temp->UpdatedTime.month);
		fprintf(fw, "\t");
		fprintf(fw, "%d", temp->UpdatedTime.day);
		fprintf(fw, "\t");
		fprintf(fw, "%d", temp->UpdatedTime.hour);
		fprintf(fw, "\t");
		fprintf(fw, "%d", temp->UpdatedTime.minute);
		fprintf(fw, "\t");
		fprintf(fw, "%d", temp->AuditCode);
		fprintf(fw, "\n\n");
		temp = temp->next;
	}
	//Close the file after successful writing
	fclose(fw);
	//Delete original file
	remove(FileName);
	//Rename new file
	rename("TEMP.TXT", FileName);

	nFreeCalloc(head);
	return;
}

//To memory the new delection
void nDelectionUpdate(struct NewsForm *Deletion)
{
	FILE* fw = fopen("NEWSDEL.TXT", "a+");
	if(fw == NULL)
	{
		//File open failure warning
		printf("\t\tFailed to delete the news record...");
		{
			sound(1111);
			delay(222);
			nosound();
		}
		getch();
		free(Deletion);
		exit(-1);
	}
	if(Deletion == NULL)
	{
		//Delection data loss warning
		printf("\t\tData loss, registration failed!");
		{
			sound(1111);
			delay(111);
			nosound();
		}
		getch();
		fclose(fw);
		nFreeCalloc(Deletion);
		exit(-1);
	}
	else//Delection data write
	{
		fprintf(fw, "{");
		fprintf(fw, Deletion->topic);
		fprintf(fw, "}\n{");
		fprintf(fw, Deletion->content);
		fprintf(fw, "}\n{");
		fprintf(fw, Deletion->type);
		fprintf(fw, "}\n{");
		fprintf(fw, Deletion->author);
		fprintf(fw, "}\n");
		fprintf(fw, "%d", Deletion->UpdatedTime.year);
		fprintf(fw, "\t");
		fprintf(fw, "%d", Deletion->UpdatedTime.month);
		fprintf(fw, "\t");
		fprintf(fw, "%d", Deletion->UpdatedTime.day);
		fprintf(fw, "\t");
		fprintf(fw, "%d", Deletion->UpdatedTime.hour);
		fprintf(fw, "\t");
		fprintf(fw, "%d", Deletion->UpdatedTime.minute);
		fprintf(fw, "\t");
		fprintf(fw, "%d", Deletion->AuditCode);
		fprintf(fw, "\n\n");
	}
	//Close the file after successful writing
	fclose(fw);

	//Prompt for successful writing
	clrscr();
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
	printf("\n\t\t\t\tDelection succeeded!");
	getch();
	return;
}


//Choose & delect the news
void NewsDelete(void)
{
    //Read the news from the file
	FILE* fp = fopen("NEWS.TXT", "r");
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
	//Read the content of the file
	npNode temp = (npNode)calloc(1, sizeof(nLNode));
	npNode head = temp;
	char ch;
	int i = 0, NewsCount = 0;
	while(1)
	{
		if((ch = fgetc(fp)) == EOF)
			break;

		npNode tmp = (npNode)calloc(1, sizeof(nLNode));
		if(ch == '{')
			for(i = 0; (ch = fgetc(fp)) != '}'; i++)
				tmp->topic[i] = ch;
		tmp->topic[i] = '\0';
		ch = fgetc(fp);
		if((ch = fgetc(fp)) == '{')
			for(i = 0; (ch = fgetc(fp)) != '}'; i++)
				tmp->content[i] = ch;
		tmp->content[i] = '\0';
		ch = fgetc(fp);
		if((ch = fgetc(fp)) == '{')
			for(i = 0; (ch = fgetc(fp)) != '}'; i++)
				tmp->type[i] = ch;
		tmp->type[i] = '\0';
		ch = fgetc(fp);
		if((ch = fgetc(fp)) == '{')
			for(i = 0; (ch = fgetc(fp)) != '}'; i++)
				tmp->author[i] = ch;
		tmp->author[i] = '\0';
		ch = fgetc(fp);
			fscanf(fp, "%d%d%d%d%d%d", &tmp->UpdatedTime.year, &tmp->UpdatedTime.month, &tmp->UpdatedTime.day, &tmp->UpdatedTime.hour, &tmp->UpdatedTime.minute, &tmp->AuditCode);
		ch = fgetc(fp);
		ch = fgetc(fp);
		
		temp->next = tmp;
		temp = temp->next;
		NewsCount++;
	}
	temp->next = NULL;
	//Close the file after the ending of file-reading
	fclose(fp);
	npNode rubbish = head;
	head = head->next;
	free(rubbish);

	if(!NewsCount)
	{
		printf("Connot found the data!");
		{
			sound(1111);
			delay(111);
			nosound();
		}
		getch();
		//Free the temporary memory block
		nFreeCalloc(head);
		return;
	}

    //Choose the news you wanna delect
	temp = head;
	while(NewsCount)
	{
		Interface();
		int TopicNum = 0, page = 1;
		npNode np = temp;
		for(int i = 1; i <= 8 && TopicNum < NewsCount; TopicNum++, i++, temp = temp->next)
			printf("\n[%d] %s\n", i, temp->topic);
		
		int choice = 9;
		printf("\n  Page%2d  [9]Next  [0]Back  Your choice: No.", page);
		scanf("%d", &choice);
		if(choice >= 1 && choice <= 8)
		{
			for(int c = 1; c < TopicNum-1; c++)
				np = np->next;
			
			npNode Deletion = np->next;
			np->next = np->next->next;
			Deletion->next = NULL;
			nDelectionUpdate(Deletion);
			free(Deletion);
			nFileUpdate("NEWS.TXT", head);
			NewsCount--;

			gotoxy(1, 7);
			clreol();
			printf("\n\t\t\t\t Delection succeeded!");
			printf("\t\t\t\tPre-delection success!");
			getch();

			page++;
			if(TopicNum >= NewsCount)
			{
				temp = head;
				page = 1;
				TopicNum = 0;
			}
		}
		else if(choice == 9)
		{
			page++;
			if(TopicNum >= NewsCount)
			{
				temp = head;
				page = 1;
				TopicNum = 0;
			}
		}
		else if(choice == 0)
			break;
		else
		{
			//Input error prompt
			printf("Input error, please re-enter!");
			{
				sound(1111);
				delay(111);
				nosound();
			}
			getch();
		}
	}

	//Free temporary memory block
	nFreeCalloc(head);
	return;
}


//Modify news content
void NewsModify(void)
{
	//Read the news from the file
	FILE* fp = fopen("NEWS.TXT", "r");
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
	//Read the content of the file
	npNode temp = (npNode)calloc(1, sizeof(nLNode));
	npNode head = temp;
	char ch;
	int i = 0, NewsCount = 0;
	while(1)
	{
		if((ch = fgetc(fp)) == EOF)
			break;

		npNode tmp = (npNode)calloc(1, sizeof(nLNode));
		if(ch == '{')
			for(i = 0; (ch = fgetc(fp)) != '}'; i++)
				tmp->topic[i] = ch;
		tmp->topic[i] = '\0';
		ch = fgetc(fp);
		if((ch = fgetc(fp)) == '{')
			for(i = 0; (ch = fgetc(fp)) != '}'; i++)
				tmp->content[i] = ch;
		tmp->content[i] = '\0';
		ch = fgetc(fp);
		if((ch = fgetc(fp)) == '{')
			for(i = 0; (ch = fgetc(fp)) != '}'; i++)
				tmp->type[i] = ch;
		tmp->type[i] = '\0';
		ch = fgetc(fp);
		if((ch = fgetc(fp)) == '{')
			for(i = 0; (ch = fgetc(fp)) != '}'; i++)
				tmp->author[i] = ch;
		tmp->author[i] = '\0';
		ch = fgetc(fp);
			fscanf(fp, "%d%d%d%d%d%d", &tmp->UpdatedTime.year, &tmp->UpdatedTime.month, &tmp->UpdatedTime.day, &tmp->UpdatedTime.hour, &tmp->UpdatedTime.minute, &tmp->AuditCode);
		ch = fgetc(fp);
		ch = fgetc(fp);
		
		temp->next = tmp;
		temp = temp->next;

		NewsCount++;
	}
	temp->next = NULL;
	//Close the file after the ending of file-reading
	fclose(fp);
	npNode rubbish = head;
	head = head->next;
	free(rubbish);

	if(!NewsCount)
	{
		printf("Connot found the data!");
		{
			sound(1111);
			delay(111);
			nosound();
		}
		getch();
		//Free the temporary memory block
		nFreeCalloc(head);
		return;
	}

    //Choose the news you wanna read
	temp = head;
	int TopicNum = 0, page = 1;
	while(NewsCount)
	{
		Interface();
		npNode np = temp;
		for(int i = 1; i <= 8 && TopicNum < NewsCount; TopicNum++, i++, temp = temp->next)
			printf("\n[%d] %s\n", i, temp->topic);

		printf("\n  Page%2d  [9]Next  [0]Back  Your choice: No.", page);
		int choice = 9;
		scanf("%d", &choice);
		if(choice >= 1 && choice <= 8)
		{
			for(int c = 1; c < choice; c++)
				np = np->next;
			clrscr();
			Interface();
			printf("\t%s\n", np->topic);
			printf("%s\n", np->content);
			printf("\t%s", np->type);
			printf("  %s", np->author);
			printf("  %d.%d.%d %d:%d\n", np->UpdatedTime.year, np->UpdatedTime.month, np->UpdatedTime.day, np->UpdatedTime.hour, np->UpdatedTime.minute);

			int ochoice = 9;
			printf("\n  [1]Modify  [2]Delete  [0]Back\tPlease input your choice: No.");
			int y = wherey();
			scanf("%d", &ochoice);
			while(ochoice != 1 && ochoice != 2 && ochoice != 0)
			{
				gotoxy(1, y);
				clreol();
				printf("\n  [1]Modify  [2]Delete  [0]Back\tPlease input right choice: No.");
				scanf("%d", &ochoice);
			}

			if(ochoice == 1)//Modify the news
			{
				TextBox();
				gotoxy(74, 1);
				int nway = 1;
				scanf("%d", &nway);
				if(nway == 1)
				{
					char content[1700];
					gotoxy(3, 3);
					getchar();
					printf("Please re-input news content(The length cannot exceed 1700 characters):\n");
					TextIn(content, 1700);

					//Redisplay the input
					TextBox();
					gotoxy(3, 3);
					printf("\t%s\n", np->topic);
					printf("%s\n", content);
					printf("  %s", np->type);
					printf("  Author:%s", np->author);
					gotoxy(74, 1);
					scanf("%d", &nway);
					if(nway != 0)
					{
						strcpy(np->content, content);
						np->AuditCode = 1;
						nFileUpdate("NEWS.TXT", head);
					}
				}
			}
			else if(ochoice == 2)//Delect the news
				for(temp = head; temp != NULL; temp = temp->next)
					if(strcmp(temp->next->topic, np->topic) == 0)
					{
						npNode del = temp->next;
						temp->next = temp->next->next;
						del->AuditCode = 0;
						del->next = NULL;
						nDelectionUpdate(del);
						free(del);
						nFileUpdate("NEWS.TXT", head);
						NewsCount--;
						break;
					}
			
			page++;
			if(TopicNum >= NewsCount)
			{
				temp = head;
				page = 1;
				TopicNum = 0;
			}
		}
		else if(choice == 9)
		{
			page++;
			if(TopicNum >= NewsCount)
			{
				temp = head;
				page = 1;
				TopicNum = 0;
			}
		}
		else if(choice == 0)
			break;
		else
		{
			//Input error warning
			printf("Input error, please re-enter!");
			{
				sound(1111);
				delay(111);
				nosound();
			}
			getch();
		}
	}

	//Free the temporary memory block
	nFreeCalloc(head);
	return;
}



//Users read their news
void MyNews(struct UserNode *u)
{
	//Read the news from the file
	FILE* fp = fopen("NEWS.TXT", "r");
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
	//Read the content of the file
	npNode temp = (npNode)calloc(1, sizeof(nLNode));
	npNode head = temp;
	char ch;
	int i = 0, AllNewsCount = 0;
	while(1)
	{
		if((ch = fgetc(fp)) == EOF)
			break;

		npNode tmp = (npNode)calloc(1, sizeof(nLNode));
		if(ch == '{')
			for(i = 0; (ch = fgetc(fp)) != '}'; i++)
				tmp->topic[i] = ch;
		tmp->topic[i] = '\0';
		ch = fgetc(fp);
		if((ch = fgetc(fp)) == '{')
			for(i = 0; (ch = fgetc(fp)) != '}'; i++)
				tmp->content[i] = ch;
		tmp->content[i] = '\0';
		ch = fgetc(fp);
		if((ch = fgetc(fp)) == '{')
			for(i = 0; (ch = fgetc(fp)) != '}'; i++)
				tmp->type[i] = ch;
		tmp->type[i] = '\0';
		ch = fgetc(fp);
		if((ch = fgetc(fp)) == '{')
			for(i = 0; (ch = fgetc(fp)) != '}'; i++)
				tmp->author[i] = ch;
		tmp->author[i] = '\0';
		ch = fgetc(fp);
			fscanf(fp, "%d%d%d%d%d%d", &tmp->UpdatedTime.year, &tmp->UpdatedTime.month, &tmp->UpdatedTime.day, &tmp->UpdatedTime.hour, &tmp->UpdatedTime.minute, &tmp->AuditCode);
		ch = fgetc(fp);
		ch = fgetc(fp);
		
		temp->next = tmp;
		temp = temp->next;
		AllNewsCount++;
	}
	temp->next = NULL;
	//Close the file after the ending of file-reading
	fclose(fp);
	npNode rubbish = head;
	head = head->next;
	free(rubbish);

	//Data loss warning
	if(!AllNewsCount)
	{
		printf("Connot found the data!");
		{
			sound(1111);
			delay(111);
			nosound();
		}
		getch();
		//Free the temporary memory block
		nFreeCalloc(head);
		return;
	}
	
	//Find my news
	npNode MyNode = (npNode)calloc(1, sizeof(nLNode));
	npNode MyHead = MyNode;
	int MyNewsCount = 0, num = 0;
	for(temp = head; num < AllNewsCount; num++, temp = temp->next)
		if(strcmp(temp->author, u->name) == 0)
		{
			strcpy(MyNode->topic, temp->topic);
			strcpy(MyNode->content, temp->content);
			strcpy(MyNode->type, temp->type);
			strcpy(MyNode->author, temp->author);
			MyNode->UpdatedTime.year = temp->UpdatedTime.year;
			MyNode->UpdatedTime.month = temp->UpdatedTime.month;
			MyNode->UpdatedTime.day = temp->UpdatedTime.day;
			MyNode->UpdatedTime.hour = temp->UpdatedTime.hour;
			MyNode->UpdatedTime.minute = temp->UpdatedTime.minute;
			MyNewsCount++;
			break;
		}
	for(temp = temp->next; num < AllNewsCount; num++, temp = temp->next)
	{
		npNode np = (npNode)calloc(1, sizeof(nLNode));
		if(strcmp(temp->author, u->name) == 0)
		{
			strcpy(np->topic, temp->topic);
			strcpy(np->content, temp->content);
			strcpy(np->type, temp->type);
			strcpy(np->author, temp->author);
			np->UpdatedTime.year = temp->UpdatedTime.year;
			np->UpdatedTime.month = temp->UpdatedTime.month;
			np->UpdatedTime.day = temp->UpdatedTime.day;
			np->UpdatedTime.hour = temp->UpdatedTime.hour;
			np->UpdatedTime.minute = temp->UpdatedTime.minute;
			MyNode->next = np;
			MyNewsCount++;
			MyNode = MyNode->next;
		}
		else
			free(np);
	}
	MyNode->next = NULL;

	if(!MyNewsCount)
	{
		Interface();
		printf("\n\n\n\n\t\t\tNo news has been released yet...");
		getch();
		//Free the temporary memory block
		nFreeCalloc(MyHead);
		nFreeCalloc(head);
		return;
	}

	//Choose the news you wanna read
	MyNode = MyHead;
	int TopicNum = 0, page = 1;
	while(MyNewsCount)
	{
		Interface();
		printf("Total num: %d\n", MyNewsCount);
		npNode np = MyNode;
		for(int i = 1; i <= 7 && TopicNum < MyNewsCount; TopicNum++, i++, MyNode = MyNode->next)
			printf("\n[%d] %s\n", i, MyNode->topic);

		printf("\n  Page%2d  [9]Next  [0]Back  Your choice: No.", page);
		int choice = 9;
		scanf("%d", &choice);
		if(choice >= 1 && choice <= 7)
		{
			for(int c = 1; c < choice; c++)
				np = np->next;
			clrscr();
			Interface();
			printf("\t%s\n", np->topic);
			printf("%s\n", np->content);
			printf("\t%s", np->type);
			printf("  %s", np->author);
			printf("  %d.%d.%d %d:%d\n", np->UpdatedTime.year, np->UpdatedTime.month, np->UpdatedTime.day, np->UpdatedTime.hour, np->UpdatedTime.minute);

			int ochoice = 9;
			printf("\n  [1]Modify  [2]Delete  [0]Back\tPlease input your choice: No.");
			int y = wherey();
			scanf("%d", &ochoice);
			while(ochoice != 1 && ochoice != 2 && ochoice != 0)
			{
				gotoxy(1, y);
				clreol();
				printf("\n  [1]Modify  [2]Delete  [0]Back\tPlease input right choice: No.");
				scanf("%d", &ochoice);
			}

			if(ochoice == 1)//Modify the news
			{
				TextBox();
				gotoxy(74, 1);
				int nway = 1;
				scanf("%d", &nway);
				if(nway == 1)
				{
					char content[1700], type[20];
					gotoxy(3, 3);
					getchar();
					printf("Please re-input news content(The length cannot exceed 1700 characters):\n");
					TextIn(content, 1700);
					while(content[0] == '\0')
					{
						TextBox();
						gotoxy(3, 3);
						printf("Please re-input news content(The length cannot exceed 1700 characters):\n");
						TextIn(content, 1700);
					}
					TextBox();
					gotoxy(3, 3);
					printf("Please input your news type(The length cannot exceed 20 characters):\n");
					TextIn(type, 20);
					while(type[0] == '\0')
					{
						TextBox();
						gotoxy(3, 3);
						printf("Please input your news type(The length cannot exceed 20 characters):\n");
						TextIn(type, 20);
					}

					//Redisplay the input
					TextBox();
					gotoxy(3, 3);
					printf("\t%s\n", np->topic);
					printf("%s\n", content);
					printf("  %s", type);
					//Match modifier
					if(strcmp(np->author, u->name) == 0)
						printf("  Author:%s", u->name);
					else
					{
						printf("\n\n\tProgram bug: data matching failure, data loss, program will terminate...");
						{
							sound(1111);
							delay(444);
							nosound();
						}
						getch();
						exit(-1);
					}
					printf("  %d.%d.%d %d:%d\n", np->UpdatedTime.year, np->UpdatedTime.month, np->UpdatedTime.day, np->UpdatedTime.hour, np->UpdatedTime.minute);
					gotoxy(74, 1);
					scanf("%d", &nway);
					if(nway != 0)
					{
						for(temp = head; temp != NULL; temp = temp->next)
							if(strcmp(temp->topic, np->topic) == 0)
							{
								strcpy(temp->content, content);
								strcpy(temp->type, type);
								temp->AuditCode = 0;
								nFileUpdate("NEWS.TXT", head);
								AllNewsCount--, MyNewsCount--;
							}
					}
				}
			}
			else if(ochoice == 2)//Delect the news
				for(temp = head; temp != NULL; temp = temp->next)
					if(strcmp(temp->next->topic, np->topic) == 0)
					{
						npNode del = temp->next;
						temp->next = temp->next->next;
						del->AuditCode = 0;
						del->next = NULL;
						nDelectionUpdate(del);
						free(del);
						nFileUpdate("NEWS.TXT", head);
						break;
					}
			
			page++;
			if(TopicNum >= MyNewsCount)
			{
				MyNode = MyHead;
				page = 1;
				TopicNum = 0;
			}
		}
		else if(choice == 8)
		{
			clrscr();
			printf("\n\n\n\n\n\n\n\t\t  Your total number of news releases is %d...", MyNewsCount);
			getch();
		}
		else if(choice == 9)
		{
			page++;
			if(TopicNum >= MyNewsCount)
			{
				MyNode = MyHead;
				page = 1;
				TopicNum = 0;
			}
			continue;
		}
		else if(choice == 0)
			break;
		else
		{
			//Input error warning
			printf("Input error, please re-enter!");
			{
				sound(1111);
				delay(111);
				nosound();
			}
			getch();
		}
	}

	//Free the temporary memory block
	nFreeCalloc(MyHead);
	nFreeCalloc(head);
	return;
}


//Audit news
void AuditNews(void)
{
	//Read the news from the file
	FILE* fp = fopen("NEWS.TXT", "r");
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
	//Read the content of the file
	npNode temp = (npNode)calloc(1, sizeof(nLNode));
	npNode head = temp;
	char ch;
	int i = 0, NewsCount = 0;
	while(1)
	{
		if((ch = fgetc(fp)) == EOF)
			break;

		npNode tmp = (npNode)calloc(1, sizeof(nLNode));
		if(ch == '{')
			for(i = 0; (ch = fgetc(fp)) != '}'; i++)
				tmp->topic[i] = ch;
		tmp->topic[i] = '\0';
		ch = fgetc(fp);
		if((ch = fgetc(fp)) == '{')
			for(i = 0; (ch = fgetc(fp)) != '}'; i++)
				tmp->content[i] = ch;
		tmp->content[i] = '\0';
		ch = fgetc(fp);
		if((ch = fgetc(fp)) == '{')
			for(i = 0; (ch = fgetc(fp)) != '}'; i++)
				tmp->type[i] = ch;
		tmp->type[i] = '\0';
		ch = fgetc(fp);
		if((ch = fgetc(fp)) == '{')
			for(i = 0; (ch = fgetc(fp)) != '}'; i++)
				tmp->author[i] = ch;
		tmp->author[i] = '\0';
		ch = fgetc(fp);
			fscanf(fp, "%d%d%d%d%d%d", &tmp->UpdatedTime.year, &tmp->UpdatedTime.month, &tmp->UpdatedTime.day, &tmp->UpdatedTime.hour, &tmp->UpdatedTime.minute, &tmp->AuditCode);
		ch = fgetc(fp);
		ch = fgetc(fp);
		
		temp->next = tmp;
		temp = temp->next;
		if(temp->AuditCode == 0)
			NewsCount++;
	}
	temp->next = NULL;
	npNode rubbish = head;
	head = head->next;
	free(rubbish);
	//Close the file after the ending of file-reading
	fclose(fp);

	//Data loss warning
	if(!NewsCount)
	{
		printf("Connot found the data!");
		{
			sound(1111);
			delay(111);
			nosound();
		}
		getch();
		//Free the temporary memory block
		nFreeCalloc(head);
		return;
	}

	//Choose the news you wanna read
	temp = head;
	int TopicNum = 0, page = 1;
	while(NewsCount)
	{
		Interface();
		printf("Total num: %d\n", NewsCount);
		npNode np = temp;
		for(int i = 1; i <= 8 && TopicNum < NewsCount; temp = temp->next)
			if(temp->AuditCode == 0)
			{
				printf("\n[%d] %s\n", i++, temp->topic);
				TopicNum++;
			}
				

		printf("\n  Page %d  [9]Next  [0]Back  Your choice: No.", page);
		int choice = 9;
		scanf("%d", &choice);
		if(choice >= 1 && choice <= 8)
		{
			for(int c = 1; c < choice; c++)
				np = np->next;
			clrscr();
			printf("\t%s\n", np->topic);
			printf("%s\n", np->content);
			printf("\t%s", np->type);
			printf("  %s", np->author);
			printf("  %d.%d.%d %d:%d\n", np->UpdatedTime.year, np->UpdatedTime.month, np->UpdatedTime.day, np->UpdatedTime.hour, np->UpdatedTime.minute);

			int ochoice = 9;
			printf("    [1]Approved [2]Pass [0]Back    Please input your choice: No.");
			int y = wherey();
			scanf("%d", &ochoice);
			while(ochoice != 1 || ochoice != 2 || ochoice != 0)
			{
				gotoxy(1, y);
				clreol();
				printf("    [1]Approved [2]Pass [0]Back    Please input right choice: No.");
				scanf("%d", &ochoice);
			}

			if(ochoice == 1)
				np->AuditCode = 1;
			else if (ochoice == 2)
			{
				for(temp = head; temp->next != np; temp = temp->next);
				npNode del = temp->next;
				temp->next = temp->next->next;
				del->next = NULL;
				nDelectionUpdate(del);
				free(del);
				nFileUpdate("NEWS.TXT", head);//Update news data
				NewsCount--;
			}

			page++;
			if(TopicNum >= NewsCount)
			{
				temp = head;
				page = 1;
				TopicNum = 0;
			}
		}
		else if(choice == 9)
		{
			page++;
			if(TopicNum >= NewsCount)
			{
				temp = head;
				page = 1;
				TopicNum = 0;
			}
		}
		else if(choice == 0)
			break;
		else
		{
			//Input error warning
			printf("Input error, please re-enter!");
			{
				sound(1111);
				delay(111);
				nosound();
			}
			getch();
		}
	}
	
	//Free the temporary memory block
	nFreeCalloc(head);
	return;
}


//Create a comment system
void CommentRead(struct NewsForm *np)
{
	//Read the news from the file
	FILE* fp = fopen("COMMENT.TXT", "r");
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
	//Read the content of the file
	cpNode temp = (cpNode)calloc(1, sizeof(cLNode));
	cpNode head = temp;
	char ch;
	int i = 0, AllComment = 0;
	while(1)
	{
		if((ch = fgetc(fp)) == EOF)
			break;

		cpNode tmp = (cpNode)calloc(1, sizeof(cLNode));
		if(ch == '{')
			for(i = 0; (ch = fgetc(fp)) != '}'; i++)
				tmp->topic[i] = ch;
		tmp->topic[i] = '\0';
		ch = fgetc(fp);
		if((ch = fgetc(fp)) == '{')
			for(i = 0; (ch = fgetc(fp)) != '}'; i++)
				tmp->comments[i] = ch;
		tmp->comments[i] = '\0';
		ch = fgetc(fp);
		ch = fgetc(fp);
		
		temp->next = tmp;
		temp = temp->next;
		AllComment++;
	}
	temp->next = NULL;
	cpNode rubbish = head;
	head = head->next;
	free(rubbish);
	//Close the file after the ending of file-reading
	fclose(fp);

	//Data loss warning
	if(!AllComment)
	{
		clrscr();
		printf("\n\n\n\n\n\n\n\t\t\tConnot found the comment data!");
		{
			sound(1111);
			delay(111);
			nosound();
		}
		getch();
		//Free the temporary memory block
		cFreeCalloc(head);
		return;
	}

	//Find the comment of topic
	cpNode CommentTemp = (cpNode)calloc(1, sizeof(cLNode));
	cpNode CommentHead = CommentTemp;
	int Comment = 0, num = 0;
	for(temp = head; num < AllComment; num++, temp = temp->next)
		if(strcmp(np->topic, temp->topic) == 0)
		{
			strcpy(CommentTemp->topic, temp->topic);
			strcpy(CommentTemp->comments, temp->comments);
			Comment++;
			break;
		}
	for(temp = temp->next; num < AllComment; num++, temp = temp->next)
	{
		cpNode cp = (cpNode)calloc(1, sizeof(cLNode));
		if(strcmp(np->topic, temp->topic) == 0)
		{
			strcpy(cp->topic, temp->topic);
			strcpy(cp->comments, temp->comments);
			CommentTemp->next = cp;
			CommentTemp = CommentTemp->next;
			Comment++;
		}
		else
			free(cp);
	}
	CommentTemp->next = NULL;
	cpNode CommentEnd = CommentTemp;

	//Data loss warning
	if(!Comment)
	{
		clrscr();
		printf("\n\n\n\n\n\n\n\n\t\tConnot found the commment of the topic!");
		{
			sound(666);
			delay(66);
			nosound();
		}
		getch();
		//Free the temporary memory block
		cFreeCalloc(head);
		cFreeCalloc(CommentTemp);
		return;
	}

	//Choose the news you wanna read
	CommentTemp = CommentHead;
	int TopicNum = 0, page = 1;
	while(Comment)
	{
		Interface();
		printf("Total num: %d", Comment);
		for(int i = 1; i <= 4 && TopicNum < Comment; TopicNum++, i++, CommentTemp = CommentTemp->next)
				printf("\n[%d] %s\n", i, CommentTemp->comments);
		
		int choice = 9;
		printf("\n\t[1]Next  [2]Write  [0]Back\tYour choice: No.");
		scanf("%d", &choice);
		if(choice == 1)
		{
			page++;
			if(TopicNum >= Comment)
			{
				CommentTemp = CommentHead;
				page = 1;
				TopicNum = 0;
			}
		}
		else if(choice == 2)
		{
			char text[66];
			int nway = 1, schoice = 0;
			TextBox();
			gotoxy(74, 1);
			scanf("%d", &nway);
			if(nway == 1)
			{
				gotoxy(3, 3);
				getchar();
				printf("Please input your news comment(The length cannot exceed 66 characters):\n");
				TextIn(text, 66);
				if(text[0] == '\0')
				{
					printf("\n\nThe comment failed because it does not meet the comment requirements!\a");
					getch();
					break;
				}
				else if(np->topic[0] == '\0')
				{
					printf("\n\nThe comment failed because topic loss...\a");
					getch();
					break;
				}
				else
				{
					TextBox();
					gotoxy(3, 3);
					printf("\n%s\n\nComment:\n  %s", np->topic, text);
					gotoxy(74, 1);
					scanf("%d", &schoice);
				}
			}
			else
				break;

			if(schoice != 0)
			{
				FILE* fw = fopen("COMMENT.TXT", "a+");
				if(fw == NULL)
				{
					//File open failure warning
					printf("\t\tComment-writing failed!");
					{
						sound(1111);
						delay(222);
						nosound();
					}
					getch();
					exit(-1);
				}
				fprintf(fw, "{");
				fprintf(fw, np->topic);
				fprintf(fw, "}\n{");
				fprintf(fw, text);
				fprintf(fw, "}\n\n");
				//Close the file after successful writing
				fclose(fw);
				break;
			}
			else if(schoice == 0)
				break;
		}
		else if(choice == 0)
			break;
		else
		{
			//Input error warning
			printf("Input error, please re-enter!");
			{
				sound(1111);
				delay(111);
				nosound();
			}
			getch();
		}
	}

	//Free the temporary memory block
	cFreeCalloc(head);
	return;
}




/*
***********************************************
*         Designed by Dylan Simon Su          *
*  Translation comes from Baidu translation.  *
*          Dylan Simon Su copyright.          *
***********************************************
*/