/*
***********************************************
*         Designed by Dylan Simon Su          *
*  Translation comes from Baidu translation.  *
*          Dylan Simon Su copyright.          *
***********************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>
#include<conio.h>
#include<time.h>
#include<dos.h>


//Create a preload page
void Preload(void);
//Create a user menu
void IndentityMenu(int *Ikey);
//Main interface establishment
void Interface(void);
//To control the run of the appication
void HomeControl(struct UserNode *u);
//Create an administrator interface
void AdminFace(void);
//Create a news interface
void NewsHome(void);
//Create a text editing window
void TextBox(void);
// The function of reading text
void TextIn(char *p, int num);
//Create a interface of the clean system for super-adminnistrator
void SADinterface(void);


//Define users' identities
struct UserNode{
    char name[20];
    char passwords[20];
    char phone[20];
    int identity;
    struct UserNode *next;
};//Users' ID have not been considered.
//Declaration definition alias
typedef struct UserNode LNode, *pNode;
//Create a global visitor
//struct UserNode u = {"Visitor", "0", "0", -1, NULL};
//Define super administrator
const struct UserNode Administrator = {"Admin", "Admin", "+86-666666", 6, NULL};
//Login system
void Login(struct UserNode* u);
//Registered user
void RegisterUser(void);
//Retrieve password
void Retrieve(void);
//User information management system
void AccountUpdate(struct UserNode* u);
//Create an adminstrator system
void Admin(struct UserNode *admin);
//Create an adminstrator login system
void AdminLogin(struct UserNode *admin);
//User management
void Management(struct UserNode *admin);
//Create a clean system for super-administrator managing
void SuperAdmin(struct UserNode *admin);
//Free requested dynamic memory of ID information
void FreeCalloc(struct UserNode* head);
//To update user's information
void FileUpdate(struct UserNode* head);


//Specify time format
struct Date{
	int year;
	int month;
	int day;
	int hour;
	int minute;
};
//Specify news format
struct NewsForm{
	char topic[66];
	char content[1700];
	char type[20];
	char author[20];
	struct Date UpdatedTime;
	int AuditCode;
	struct NewsForm *next;
};
//Declaration definition alias of news
typedef struct NewsForm nLNode, *npNode;
//Commments format
struct CommentForm{
	char topic[66];
	char comments[66];
	struct CommentForm *next;
};
//Declaration definition alias of comment
typedef struct CommentForm cLNode, *cpNode;
//Read & Choose the news
void NewsRead(char FileName[10], int AuditCode);
//Read the news which will be input
int NewsIn(struct NewsForm *temp, struct UserNode *u);
//Read & Write the new news into the file
void NewsWrite(struct UserNode *u);
//Find news by time and type
void NewsFind(void);
//Announce system notice
void Notice(void);
//Choose & delect the news
void NewsDelete(void);
//Modify news content
void NewsModify(void);
//Users read their news
void MyNews(struct UserNode *u);
//Audit news
void AuditNews(void);
//Create a comment system
void CommentRead(struct NewsForm *np);
//Free requested dynamic memory of the news information
void nFreeCalloc(struct NewsForm* head);
//To update news's information
void nFileUpdate(char *FileName, struct NewsForm* head);
//To memory the new delection
void nDelectionUpdate(struct NewsForm *Deletion);
//Free requested dynamic memory of the comments' information
void cFreeCalloc(struct CommentForm* head);


//The TurboC++ DOS windows is the length of 80 characters and Height of 25 characters
//The upper left corner is (1, 1)
/*
void Box(void)
{
	clrscr();
	printf("*******************************************************************************\n");
	printf("*                                                                             *\n");
	printf("*                                                                             *\n");
	printf("*                                                                             *\n");
	printf("*                                                                             *\n");
	printf("*                                                                             *\n");
	printf("*                                                                             *\n");
	printf("*                                                                             *\n");
	printf("*                                                                             *\n");
	printf("*                                                                             *\n");
	printf("*                                                                             *\n");
	printf("*                                                                             *\n");
	printf("*                                                                             *\n");
	printf("*                                                                             *\n");
	printf("*                                                                             *\n");
	printf("*                                                                             *\n");
	printf("*                                                                             *\n");
	printf("*                                                                             *\n");
	printf("*                                                                             *\n");
	printf("*                                                                             *\n");
	printf("*                                                                             *\n");
	printf("*                                                                             *\n");
	printf("*                                                                             *\n");
	printf("*                                                                             *\n");
	printf("*******************************************************************************");
}
*/



/*
***********************************************
*         Designed by Dylan Simon Su          *
*  Translation comes from Baidu translation.  *
*          Dylan Simon Su copyright.          *
***********************************************
*/
