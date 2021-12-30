#include"NEEDED.H"

//Free requested dynamic memory
void nFreeCalloc(struct NewsFrom* head)
{
	npNode p;
	while(head)
	{
		p = head;
		head = head->next;
		free(p);
	}
	return;
}


//Announce system notice
void Notice(void)
{
	gotoxy(1, 7);
	clreol();

	//Open the file
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

	printf("\n");
	char ch;
	while((ch = fgetc(fp)) != EOF)
		putch(ch);//Read the file and output the notice
	//Close the file after file-reading ends
	fclose(fp);
	//End prompt
	printf("\n\t* End *");
	getch();
	return;
}


//Read & Choose the news
void NewsRead(void)
{
    gotoxy(1, 7);
	clreol();
	
	//Read the news from the file
	npNode temp = (pNode)calloc(1, sizeof(LNode));
	npNode head = temp;
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
	char ch;
	int i = 0;
	while(1)
	{
		if((ch = fgetc(fp)) == EOF)
			break;

		if((ch = fgetc(fp)) == '{')
			for(i = 0; (ch = fgetc(fp)) != '}'; i++)
				temp->topic[i] = ch;
		temp->topic[i] = '\0';

		if((ch = fgetc(fp)) == '{')
			for(i = 0; (ch = fgetc(fp)) != '}'; i++)
				temp->content[i] = ch;
		temp->content[i] = '\0';

		if((ch = fgetc(fp)) == '{')
			for(i = 0; (ch = fgetc(fp)) != '}'; i++)
				temp->type[i] = ch;
		temp->type[i] = '\0';

		if((ch = fgetc(fp)) == '{')
			for(i = 0; (ch = fgetc(fp)) != '}'; i++)
				temp->author[i] = ch;
		temp->author[i] = '\0';

		if((ch = fgetc(fp)) == '{')
			fscanf(fp, "%d%d%d%d%d", &temp->UpdatedTime.year, &temp->UpdatedTime.month, &temp->UpdatedTime.day, &temp->UpdatedTime.hour, &temp->UpdatedTime.minute);
		ch = fgetc(fp);

		temp = temp->next;
	}
	temp = NULL;

    //Choose the news you wanna read
    char topic[200];
	while(1)
	{
		Interface();
		printf("Please input your topic you wanna read:");
		scanf("%s", topic);
		npNode p = head;
		while(temp)
		{
			Interface();
			for(p = head; p != NULL; p = p->next)
			{
				if(strcmp(p->topic, topic) == 0)
				{
					printf("%s\n", p->topic);
					printf("\n%s\n", p->content);
					printf("      %s",p->type);
					printf("\t%s", p->author);
					printf("\t%d.%d.%d %d:%d\n", p->UpdatedTime.year, p->UpdatedTime.month, p->UpdatedTime.day, p->UpdatedTime.hour, p->UpdatedTime.minute);
					printf("\n\t[9]Back");
					while(1)
					{
						printf("\nPlease input your choice: No.");
						if(getch() == '1' || getch() == '9')
							goto again;
						else if(getch() == '0')
							goto end;
						else
							printf("Back to the home for other choices!");
					}
				}
			}
			printf("Topic connot be found!\n");
			{
				sound(1111);
				delay(111);
				nosound();
			}
			getch();
			goto again;
		}
		again:
	}

	//Exit the application page
	end:
	fclose(fp);
	nFreeCalloc(head);
	return;
}


//Read & Write the new news into the file
void NewsWrite(void)
{
	return;
}



/*
***********************************************
*         Designed by Dylan Simon Su          *
*  Translation comes from Baidu translation.  *
*          Dylan Simon Su copyright.          *
***********************************************
*/