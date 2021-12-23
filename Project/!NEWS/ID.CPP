#include"NEEDED.H"

struct UserNode* Login(struct UserNode* L)
{
	if(number == 0) return 0;
	
	//Read user information
	char iname[20]; ipasswords[20];
	printf("Please enter your username: ");
	scanf("%s", iname);
	getchar(10);
	scanf("%s", ipasswords);
	getchar(10);
	
	//Verify user information
	struct UserNode *p;
	for(p = L; p != NULL; p = p->next)
		if(p->Pass.Name == iname)
			if(p->Pass.Passwords == ipasswords)
			{
				L = p;
				return 1;
			}
	return 0;
}
