
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

//Define users' identities
struct UserNode{
    char name[20];
    char passwords[20];
    long phone;
    int identity;
    struct UserNode *next;
};//IDnumber have not been considered.
typedef struct UserNode LNode, *pNode;
//Create a visitor
//struct UserNode u = {"Visitor", "000000", 0, 0, NULL};
//Login function
void Login(struct UserNode* u);
//Registered user
void RegisterUser(void);

//Specify news format
enum Type{other, Politics, Economics, Worlds, Sports};
struct Date{
	int year;
	int month;
	int day;
	int hour;
	int minute;
};
struct NewsFrom{
	char topic[100];
	char content[100];
	int type;
	int author[20];
	struct NewsFrom *next;
};//Commments have not been considered.

//Read the news from the file
struct NewsFrom NewsRead(void);

//Write the new news into the file
struct NewsFrom NewsWrite(void);

//Main interface establishment
void Interface(void);

/*
***********************************************
*         Designed by Dylan Simon Su          *
*  Translation comes from Baidu translation.  *
*          Dylan Simon Su copyright.          *
***********************************************
*/
