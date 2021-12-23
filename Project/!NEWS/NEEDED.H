#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>
#include<conio.h>

//Create a preload page
void Preload(void);

//Create a user menu
void IndentityMenu(int *Ikey);

//Memory the number of the uesrs
int number = 0;

//Define users' identities
struct User{char Name[20]; char Passwords[20]; int Identity;};//IDnumber have not been considered.
struct UserNode{struct User Pass; int Identity; struct User *next;};//IDnumber have not been considered.

//Validate login
struct UserNode* Login(struct UserNode* L);

//Specify news format
enum Type{other; Politics; Economics; Worlds; Sports;};
struct Date{int year; int month; int day; int hour; int minute;};
struct NewsFrom{char topic[100]; char content[100]; int type};//Commments have not been considered.

//Read the news from the file
struct NewsFrom NewsRead( ?!? );

//Write the new news into the file
struct NewsFrom NewsWrite( ?!? );

//Main interface establishment
void Interface(struct UserNode* L);
