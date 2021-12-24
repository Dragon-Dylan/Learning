#include"NEEDED.H"

void RSUser(struct UserNode* head, struct UserNode* ipass)
{
	if(head == NULL)	return;
	
	FILE *fp;
	struct UserNode* p = head->next;
	if((fp = fopen("USER.TXT", "r")) == NULL)
	{
		printf("Connot open the file.\n");
		return;
	}
	while(1)
	{
		struct UserNode* q;
		int nRead = fscanf(fp, "%s%s%d", p->Pass.Name, p->Pass.Passwords, &p->Identity);
		if(nRead == 4)
		{
			p->next = q;
			p = q;
		}
		else
		{
			//free(q);
			break;
		}
	}
	p->next = ipass;
	p = ipass;
	p->next = NULL;
	fclose(fp);
}

void SaveUser(void)
{
	//Read user's' information
	struct UserNode* ipass = (struct UserNode*)calloc(1, sizeof(struct UserNode));
	printf("Please enter your username: ");
	scanf("%s", ipass->Pass.Name);
	getchar();
	printf("Please enter your passwords: ");
	scanf("%s", ipass->Pass.Passwords);
	getchar();
	ipass->Identity = 0;
	ipass->next = NULL;

	//Privacy protection?

	//Save user's information
	struct UserNode* head;
	head = (struct UserNode*)calloc(1, sizeof(struct UserNode));
	head->next = NULL;
	RSUser(head, ipass);
	free(head);
	free(ipass);
	
	printf("Save successfully.\n");	
}



