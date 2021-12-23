//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <windows.h> 
//#define LEN sizeof(struct list)
//#define DATA a[i].num,a[i].name,a[i].job,a[i].address
//#define FORMAT "\t\t  ||    %-12d %-12s %-19s %-20s ||\n"
//void in();
//void menu();
//void search();
//void del();
//void show();
//void modify();
//void insert();
//void order();
//void total();
//struct list
//{
//	int num;		//号码
//	char name[15];	//姓名
//	char job[30];	//工作单位
//	char address[30];	//地址			
//};
//struct list a[50];
//
//void main()
//{
//	system("color 3e\n");
//	menu();
//	int n;
//	scanf("%d", &n);
//	while (n)
//	{
//		switch (n)
//		{
//		case 1:in(); 		break;
//		case 2:search(); 	break;
//		case 3:del();		break;
//		case 4:modify();	break;
//		case 5:insert();	break;
//		case 6:order();		break;
//		case 7:total();		break;
//		case 8:show();		break;
//		default:break;
//		}
//		getch();
//		menu();//执行完后显示菜单 
//		scanf("%d", &n);
//	}
//
//}
//
//void menu()	
//{
//	system("cls");
//	printf("\n\n\n");
//	printf("\t\t\t\t\t**************************************\n");
//	printf("\t\t\t\t\t************通讯录管理系统************\n");
//	printf("\t\t\t\t\t======================================\n");
//	printf("\t\t\t\t\t*          1.录入联系人信息          *\n");
//	printf("\t\t\t\t\t*          2.查找联系人信息          *\n");
//	printf("\t\t\t\t\t*          3.删除联系人信息          *\n");
//	printf("\t\t\t\t\t*          4.修改联系人信息          *\n");
//	printf("\t\t\t\t\t*          5.插入联系人信息          *\n");
//	printf("\t\t\t\t\t*          6.排序                    *\n");
//	printf("\t\t\t\t\t*          7.统计联系人总数          *\n");
//	printf("\t\t\t\t\t*          8.显示所有联系人          *\n");
//	printf("\t\t\t\t\t*          0.退出系统                *\n");
//	printf("\t\t\t\t\t======================================\n");
//	printf("\t\t\t\t\t**************************************\n");
//	printf("\t\t\t\t\t          请选择(0-8):");
//}
//
//void in()
//{
//	int i, m = 0;
//	char ch[2];
//	FILE* fp;
//	if ((fp = fopen("data.txt", "a+")) == NULL)
//	{
//		printf("\t\t  文件不存在! \n");
//		return;
//	}
//	while (!feof(fp))
//	{
//		if (fread(&a[m], LEN, 1, fp) == 1)
//			m++;
//	}
//	fclose(fp);
//	if (m == 0)
//	{
//		printf("\t\t  文件中没有记录!\n");
//
//	}
//	else
//	{
//		show();
//	}
//	if ((fp = fopen("data.txt", "a+")) == NULL)
//	{
//		printf("\t\t  文件不存在!\n");
//		return;
//	}
//	printf("\t\t  是否输入联系人信息(y/n):");
//	scanf("%s", ch);
//	while (strcmp(ch, "Y") == 0 || strcmp(ch, "y") == 0)
//	{
//		printf("\t\t  电话:");
//		scanf("%d", &a[m].num);
//		for (i = 0; i < m; i++)
//		{
//			if (a[i].num == a[m].num)
//			{
//				printf("\t\t  此用户已经存在了,按任意键继续!");
//				getch();
//				fclose(fp);
//				return;
//			}
//		}
//
//		printf("\t\t  姓名:");
//		scanf("%s", &a[m].name);
//		printf("\t\t  工作单位:");
//		scanf("%s", &a[m].job);
//		printf("\t\t  地址:");
//		scanf("%s", &a[m].address);
//		if (fwrite(&a[m], LEN, 1, fp) != 1)
//		{
//			printf("\t\t  不能保存");
//			getch();
//		}
//		else
//		{
//			printf("\t\t  %s 已被保存!\n", a[m].name);
//			m++;
//		}
//		printf("\t\t  继续?(y/n):");
//		scanf("%s", ch);
//	}
//	fclose(fp);
//	printf("\t\t  结束录入!\n");
//}
//void del()
//{
//	show();
//	FILE* fp;
//	int nmb, i, j, m = 0;
//	int t = 1;		//判断是否正常结束 
//	char ch[2];
//	if ((fp = fopen("data.txt", "r+")) == NULL)
//	{
//		printf("\t\t  \n文件不存在\n");
//		return;
//	}
//	while (!feof(fp))
//	{
//		if (fread(&a[m], LEN, 1, fp) == 1)
//			m++;
//	}
//	fclose(fp);
//	if (m == 0)
//	{
//		printf("\t\t  \n文件没有记录!\n");
//		return;
//	}
//	printf("\t\t  输入要删除的联系人的电话号码:");
//	scanf("%d", &nmb);
//	for (i = 0; i < m; i++)
//		if (nmb == a[i].num)
//		{
//			printf("\t\t  找到这条记录是否删除(y/n):");
//			scanf("%s", &ch);
//			if (strcmp(ch, "Y") == 0 || strcmp(ch, "y") == 0)
//			{
//				for (j = i + 1; j < m; j++)
//					a[j - 1] = a[j];
//				m--;
//				if ((fp = fopen("data.txt", "w+")) == NULL)
//				{
//					printf("\t\t  文件不存在\n");
//					return;
//				}
//				for (j = 0; j < m; j++)
//				{
//					if (fwrite(&a[j], LEN, 1, fp) != 1)
//					{
//						printf("\t\t  无法写入文件!删除失败!");
//						getch();
//					}
//				}
//				fclose(fp);
//				printf("\t\t  删除成功");
//			}
//			else
//			{
//				fclose(fp);
//				printf("\t\t  找到了记录选择不删除");
//			}
//			t = 0;	//标志找到该联系人 
//			break;
//		}
//	if (t)
//		printf("\t\t  没有找到该联系人!\n");
//}
//
//void modify()
//{
//	show();
//	FILE* fp;
//	int i = 0, j = 0, m = 0, nmb;
//	if ((fp = fopen("data.txt", "r+")) == NULL)
//	{
//		printf("\t\t  文件不存在\n");
//		return;
//	}
//	while (!feof(fp))
//		if (fread(&a[m], LEN, 1, fp) == 1)
//			m++;
//	if (m == 0)
//	{
//		printf("\t\t  文件中没有记录");
//		fclose(fp);
//		return;
//	}
//	printf("\t\t  请输入要修改的联系人的电话号码:");
//	scanf("%d", &nmb);
//	for (i = 0; i < m; i++)
//		if (nmb == a[i].num)	//检索是否有要相应的联系人
//		{
//			printf("\t\t  找到该名联系人,将修改他的信息!\n");
//			printf("\t\t  电话:");
//			scanf("%d", &a[i].num);
//			printf("\t\t  姓名:");
//			scanf("%s", &a[i].name);
//			printf("\t\t  工作单位:");
//			scanf("%s", &a[i].job);
//			printf("\t\t  住址:");
//			scanf("%s", &a[i].address);
//			printf("\t\t  修改成功!");
//
//			if ((fp = fopen("data.txt", "w+")) == NULL)
//			{
//				printf("\t\t  不能打开");
//				return;
//			}
//			for (j = 0; j < m; j++)		//写入新的信息
//				if (fwrite(&a[j], LEN, 1, fp) != 1)
//				{
//					printf("\t\t  不能打开");
//					getch();
//				}
//			fclose(fp);
//			break;
//		}
//	if (i == m)
//		printf("\t\t  没有找到该名联系人");
//}
//void search()
//{
//	show();
//	FILE* fp;
//	int nmb, i, m = 0;
//	if ((fp = fopen("data.txt", "r+")) == NULL)
//	{
//		fclose(fp);
//		printf("\n\t\t  文件不存在！\n");
//		return;
//	}
//	while (!feof(fp))
//	{
//		if (fread(&a[m], LEN, 1, fp) == 1)
//			m++;
//	}
//	if (m == 0)
//	{
//		fclose(fp);
//		printf("\n\t\t  文件没有记录！\n");
//		return;
//	}
//	printf("\n\t\t  请输入联系人的电话号码!：");
//	scanf("%d", &nmb);
//	for (i = 0; i < m; i++)
//		if (nmb == a[i].num)
//		{
//			printf("\t\t        电话         姓名         工作单位            住址                   \n");
//			printf(FORMAT, DATA);
//			break;
//		}
//	if (i == m)
//		printf("\t\t  没有找到记录！\n");
//	fclose(fp);
//}
//void show()
//{
//	FILE* fp;
//	int i, m = 0;
//	if ((fp = fopen("data.txt", "r+")) == NULL)
//	{
//		printf("\n\t\t  文件不存在\n");
//		return;
//	}
//	while (!feof(fp))
//	{
//		if (fread(&a[m], LEN, 1, fp) == 1)
//			m++;
//	}
//	fclose(fp);
//	printf("\t\t  ---------------------------------------------------------------------------\n");
//	printf("\t\t  ||    电话         姓名         工作单位            住址                 ||\n");
//	for (i = 0; i < m; i++)
//	{
//		printf(FORMAT, DATA);
//	}
//	printf("\t\t  ---------------------------------------------------------------------------\n");
//}
//void insert()
//{
//	show();
//	FILE* fp;
//	int i, j, k, m = 0, nmb;
//	if ((fp = fopen("data.txt", "r+")) == NULL)
//	{
//		printf("\t\t  文件不存在! \n");
//		return;
//	}
//	while (!feof(fp))
//		if (fread(&a[m], LEN, 1, fp) == 1)
//			m++;
//	if (m == 0)
//	{
//		printf("\t\t  文件中没有记录!\n");
//		fclose(fp);
//		return;
//	}
//	printf("\t\t  请输入要插入哪个号码的位置之后:");
//	scanf("%d", &nmb);
//	for (i = 0; i < m; i++)
//		if (nmb == a[i].num)
//			break;
//	if (m == i)
//	{
//		printf("\t\t  没有找到改电话号码");
//		fclose(fp);
//		return;
//	}
//	for (j = m - 1; j > i; j--)
//		a[j + 1] = a[j];
//	printf("\t\t  请输入要插入的通讯录信息：\n");
//	printf("\t\t  电话:");
//	scanf("%d", &nmb);
//	for (k = 0; k < m; k++)
//		if (a[k].num == nmb)
//		{
//			printf("\t\t  电话已经存在，请按任意键继续！");
//			getch();
//			fclose(fp);
//			return;
//		}
//	a[i + 1].num = nmb;
//	printf("\t\t  姓名:");
//	scanf("%s", &a[i + 1].name);
//	printf("\t\t  工作:");
//	scanf("%s", &a[i + 1].job);
//	printf("\t\t  地址:");
//	scanf("%s", &a[i + 1].address);
//	printf("\t\t  插入成功，请输入任意键返回主界面！");
//	if ((fp = fopen("data.txt", "w+")) == NULL)
//	{
//		printf("\t\t  不能打开！");
//		return;
//	}
//	for (k = 0; k <= m; k++)
//		if (fwrite(&a[k], LEN, 1, fp) != 1)
//		{
//			printf("\t\t  不能保存！");
//			getch();
//		}
//	fclose(fp);
//}
//void order()
//{
//	FILE* fp;
//	struct list b;
//	int i = 0, j = 0, m = 0;
//	printf("\n");
//	if ((fp = fopen("data.txt", "r+")) == NULL)
//	{
//		printf("\t\t  文件不存在\n");
//		return;
//	}
//	while (!feof(fp))
//		if (fread(&a[m], LEN, 1, fp) == 1)
//			m++;
//	fclose(fp);
//	if (m == 0)
//	{
//		printf("\t\t  文件中没有记录\n");
//		return;
//	}
//	for (i = 0; i < m - 1; i++)
//		for (j = i + 1; j < m; j++)
//			if (a[i].num < a[j].num)
//			{
//				b = a[i]; a[i] = a[j]; a[j] = b;
//			}
//	if ((fp = fopen("data.txt", "w+")) == NULL)
//	{
//		printf("\t\t  文件不存在!\n");
//		return;
//	}
//	for (i = 0; i < m; i++)
//		if (fwrite(&a[i], LEN, 1, fp) != 1)
//		{
//			printf("\t\t  不能保存文件!\n");
//			getch();
//		}
//	fclose(fp);
//	show();
//	printf("\t\t  保存成功\n");
//}
//void total()
//{
//	FILE* fp;
//	int m = 0;
//	if ((fp = fopen("data.txt", "r+")) == NULL)
//	{
//		printf("\t\t  文件不存在!\n");
//		return;
//	}
//	while (!feof(fp))
//		if (fread(&a[m], LEN, 1, fp) == 1)
//			m++;
//	if (m == 0)
//	{
//		printf("\n\t\t  没有联系人!\n");
//		fclose(fp);
//		return;
//	}
//	fclose(fp);
//	show();
//	printf("\t\t  您一共拥有 %d 位联系人", m);
//}
//
