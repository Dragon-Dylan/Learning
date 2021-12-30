
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
void Admin(struct UserNode *u);
//Create an adminstrator login system
void AdminLogin(void);
//Free requested dynamic memorL
void FreeCalloc(struct UserNode* head);
//To update user's information
void FileUpdate(struct UserNode* head);


//Enumerate news types
enum Type{other, Politics, Economics, Worlds, Sports};
//Specify time format
struct Date{
	int year;
	int month;
	int day;
	int hour;
	int minute;
};
//Specify news format
struct NewsFrom{
	char topic[200];
	char content[10000];
	char type[20];
	char author[50];
	struct Date UpdatedTime;
	struct NewsFrom *next;
};//Commments have not been considered.
//Declaration definition alias
typedef struct NewsFrom nLNode, *npNode;
//Read & Choose the news
void NewsRead(void);
//Read & Write the new news into the file
void NewsWrite(void);
//Announce system notice
void Notice(void);
//Free requested dynamic memory
void nFreeCalloc(struct NewsFrom* head);



/*
***********************************************
*         Designed by Dylan Simon Su          *
*  Translation comes from Baidu translation.  *
*          Dylan Simon Su copyright.          *
***********************************************
*/
