#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>
#include<conio.h>
#include<time.h>

//main function
int main(void);

//Create a preload page
void Preload(void);

//Create a user menu
void IndentityMenu(int *Ikey);

//Define users' identities
struct User{
	char Name[20];
	char Passwords[20];
};//IDnumber have not been considered.
struct UserType{
	struct User Pass;
	int Identity;
};//IDnumber have not been considered.
struct UserNode{
	struct User Pass;
	int Identity;
	struct UserNode *next;
};//IDnumber have not been considered.


//Read&Save the information of the new user
void SaveUser(void);
void RSdUser(struct UserNode* head, struct UserNode* ipass);

//Delect the information of the new user
void DelectUser(void);

//Cheak&Validate login
void Login(struct UserType u);
void CLogin(struct UserNode* head, struct UserNode* ipass, struct UserType u);

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
};//Commments have not been considered.

//Read the news from the file
struct NewsFrom NewsRead(void);

//Write the new news into the file
struct NewsFrom NewsWrite(void);

//Main interface establishment
void Interface(struct UserType u);


