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
//	int num;		//����
//	char name[15];	//����
//	char job[30];	//������λ
//	char address[30];	//��ַ			
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
//		menu();//ִ�������ʾ�˵� 
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
//	printf("\t\t\t\t\t************ͨѶ¼����ϵͳ************\n");
//	printf("\t\t\t\t\t======================================\n");
//	printf("\t\t\t\t\t*          1.¼����ϵ����Ϣ          *\n");
//	printf("\t\t\t\t\t*          2.������ϵ����Ϣ          *\n");
//	printf("\t\t\t\t\t*          3.ɾ����ϵ����Ϣ          *\n");
//	printf("\t\t\t\t\t*          4.�޸���ϵ����Ϣ          *\n");
//	printf("\t\t\t\t\t*          5.������ϵ����Ϣ          *\n");
//	printf("\t\t\t\t\t*          6.����                    *\n");
//	printf("\t\t\t\t\t*          7.ͳ����ϵ������          *\n");
//	printf("\t\t\t\t\t*          8.��ʾ������ϵ��          *\n");
//	printf("\t\t\t\t\t*          0.�˳�ϵͳ                *\n");
//	printf("\t\t\t\t\t======================================\n");
//	printf("\t\t\t\t\t**************************************\n");
//	printf("\t\t\t\t\t          ��ѡ��(0-8):");
//}
//
//void in()
//{
//	int i, m = 0;
//	char ch[2];
//	FILE* fp;
//	if ((fp = fopen("data.txt", "a+")) == NULL)
//	{
//		printf("\t\t  �ļ�������! \n");
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
//		printf("\t\t  �ļ���û�м�¼!\n");
//
//	}
//	else
//	{
//		show();
//	}
//	if ((fp = fopen("data.txt", "a+")) == NULL)
//	{
//		printf("\t\t  �ļ�������!\n");
//		return;
//	}
//	printf("\t\t  �Ƿ�������ϵ����Ϣ(y/n):");
//	scanf("%s", ch);
//	while (strcmp(ch, "Y") == 0 || strcmp(ch, "y") == 0)
//	{
//		printf("\t\t  �绰:");
//		scanf("%d", &a[m].num);
//		for (i = 0; i < m; i++)
//		{
//			if (a[i].num == a[m].num)
//			{
//				printf("\t\t  ���û��Ѿ�������,�����������!");
//				getch();
//				fclose(fp);
//				return;
//			}
//		}
//
//		printf("\t\t  ����:");
//		scanf("%s", &a[m].name);
//		printf("\t\t  ������λ:");
//		scanf("%s", &a[m].job);
//		printf("\t\t  ��ַ:");
//		scanf("%s", &a[m].address);
//		if (fwrite(&a[m], LEN, 1, fp) != 1)
//		{
//			printf("\t\t  ���ܱ���");
//			getch();
//		}
//		else
//		{
//			printf("\t\t  %s �ѱ�����!\n", a[m].name);
//			m++;
//		}
//		printf("\t\t  ����?(y/n):");
//		scanf("%s", ch);
//	}
//	fclose(fp);
//	printf("\t\t  ����¼��!\n");
//}
//void del()
//{
//	show();
//	FILE* fp;
//	int nmb, i, j, m = 0;
//	int t = 1;		//�ж��Ƿ��������� 
//	char ch[2];
//	if ((fp = fopen("data.txt", "r+")) == NULL)
//	{
//		printf("\t\t  \n�ļ�������\n");
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
//		printf("\t\t  \n�ļ�û�м�¼!\n");
//		return;
//	}
//	printf("\t\t  ����Ҫɾ������ϵ�˵ĵ绰����:");
//	scanf("%d", &nmb);
//	for (i = 0; i < m; i++)
//		if (nmb == a[i].num)
//		{
//			printf("\t\t  �ҵ�������¼�Ƿ�ɾ��(y/n):");
//			scanf("%s", &ch);
//			if (strcmp(ch, "Y") == 0 || strcmp(ch, "y") == 0)
//			{
//				for (j = i + 1; j < m; j++)
//					a[j - 1] = a[j];
//				m--;
//				if ((fp = fopen("data.txt", "w+")) == NULL)
//				{
//					printf("\t\t  �ļ�������\n");
//					return;
//				}
//				for (j = 0; j < m; j++)
//				{
//					if (fwrite(&a[j], LEN, 1, fp) != 1)
//					{
//						printf("\t\t  �޷�д���ļ�!ɾ��ʧ��!");
//						getch();
//					}
//				}
//				fclose(fp);
//				printf("\t\t  ɾ���ɹ�");
//			}
//			else
//			{
//				fclose(fp);
//				printf("\t\t  �ҵ��˼�¼ѡ��ɾ��");
//			}
//			t = 0;	//��־�ҵ�����ϵ�� 
//			break;
//		}
//	if (t)
//		printf("\t\t  û���ҵ�����ϵ��!\n");
//}
//
//void modify()
//{
//	show();
//	FILE* fp;
//	int i = 0, j = 0, m = 0, nmb;
//	if ((fp = fopen("data.txt", "r+")) == NULL)
//	{
//		printf("\t\t  �ļ�������\n");
//		return;
//	}
//	while (!feof(fp))
//		if (fread(&a[m], LEN, 1, fp) == 1)
//			m++;
//	if (m == 0)
//	{
//		printf("\t\t  �ļ���û�м�¼");
//		fclose(fp);
//		return;
//	}
//	printf("\t\t  ������Ҫ�޸ĵ���ϵ�˵ĵ绰����:");
//	scanf("%d", &nmb);
//	for (i = 0; i < m; i++)
//		if (nmb == a[i].num)	//�����Ƿ���Ҫ��Ӧ����ϵ��
//		{
//			printf("\t\t  �ҵ�������ϵ��,���޸�������Ϣ!\n");
//			printf("\t\t  �绰:");
//			scanf("%d", &a[i].num);
//			printf("\t\t  ����:");
//			scanf("%s", &a[i].name);
//			printf("\t\t  ������λ:");
//			scanf("%s", &a[i].job);
//			printf("\t\t  סַ:");
//			scanf("%s", &a[i].address);
//			printf("\t\t  �޸ĳɹ�!");
//
//			if ((fp = fopen("data.txt", "w+")) == NULL)
//			{
//				printf("\t\t  ���ܴ�");
//				return;
//			}
//			for (j = 0; j < m; j++)		//д���µ���Ϣ
//				if (fwrite(&a[j], LEN, 1, fp) != 1)
//				{
//					printf("\t\t  ���ܴ�");
//					getch();
//				}
//			fclose(fp);
//			break;
//		}
//	if (i == m)
//		printf("\t\t  û���ҵ�������ϵ��");
//}
//void search()
//{
//	show();
//	FILE* fp;
//	int nmb, i, m = 0;
//	if ((fp = fopen("data.txt", "r+")) == NULL)
//	{
//		fclose(fp);
//		printf("\n\t\t  �ļ������ڣ�\n");
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
//		printf("\n\t\t  �ļ�û�м�¼��\n");
//		return;
//	}
//	printf("\n\t\t  ��������ϵ�˵ĵ绰����!��");
//	scanf("%d", &nmb);
//	for (i = 0; i < m; i++)
//		if (nmb == a[i].num)
//		{
//			printf("\t\t        �绰         ����         ������λ            סַ                   \n");
//			printf(FORMAT, DATA);
//			break;
//		}
//	if (i == m)
//		printf("\t\t  û���ҵ���¼��\n");
//	fclose(fp);
//}
//void show()
//{
//	FILE* fp;
//	int i, m = 0;
//	if ((fp = fopen("data.txt", "r+")) == NULL)
//	{
//		printf("\n\t\t  �ļ�������\n");
//		return;
//	}
//	while (!feof(fp))
//	{
//		if (fread(&a[m], LEN, 1, fp) == 1)
//			m++;
//	}
//	fclose(fp);
//	printf("\t\t  ---------------------------------------------------------------------------\n");
//	printf("\t\t  ||    �绰         ����         ������λ            סַ                 ||\n");
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
//		printf("\t\t  �ļ�������! \n");
//		return;
//	}
//	while (!feof(fp))
//		if (fread(&a[m], LEN, 1, fp) == 1)
//			m++;
//	if (m == 0)
//	{
//		printf("\t\t  �ļ���û�м�¼!\n");
//		fclose(fp);
//		return;
//	}
//	printf("\t\t  ������Ҫ�����ĸ������λ��֮��:");
//	scanf("%d", &nmb);
//	for (i = 0; i < m; i++)
//		if (nmb == a[i].num)
//			break;
//	if (m == i)
//	{
//		printf("\t\t  û���ҵ��ĵ绰����");
//		fclose(fp);
//		return;
//	}
//	for (j = m - 1; j > i; j--)
//		a[j + 1] = a[j];
//	printf("\t\t  ������Ҫ�����ͨѶ¼��Ϣ��\n");
//	printf("\t\t  �绰:");
//	scanf("%d", &nmb);
//	for (k = 0; k < m; k++)
//		if (a[k].num == nmb)
//		{
//			printf("\t\t  �绰�Ѿ����ڣ��밴�����������");
//			getch();
//			fclose(fp);
//			return;
//		}
//	a[i + 1].num = nmb;
//	printf("\t\t  ����:");
//	scanf("%s", &a[i + 1].name);
//	printf("\t\t  ����:");
//	scanf("%s", &a[i + 1].job);
//	printf("\t\t  ��ַ:");
//	scanf("%s", &a[i + 1].address);
//	printf("\t\t  ����ɹ�����������������������棡");
//	if ((fp = fopen("data.txt", "w+")) == NULL)
//	{
//		printf("\t\t  ���ܴ򿪣�");
//		return;
//	}
//	for (k = 0; k <= m; k++)
//		if (fwrite(&a[k], LEN, 1, fp) != 1)
//		{
//			printf("\t\t  ���ܱ��棡");
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
//		printf("\t\t  �ļ�������\n");
//		return;
//	}
//	while (!feof(fp))
//		if (fread(&a[m], LEN, 1, fp) == 1)
//			m++;
//	fclose(fp);
//	if (m == 0)
//	{
//		printf("\t\t  �ļ���û�м�¼\n");
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
//		printf("\t\t  �ļ�������!\n");
//		return;
//	}
//	for (i = 0; i < m; i++)
//		if (fwrite(&a[i], LEN, 1, fp) != 1)
//		{
//			printf("\t\t  ���ܱ����ļ�!\n");
//			getch();
//		}
//	fclose(fp);
//	show();
//	printf("\t\t  ����ɹ�\n");
//}
//void total()
//{
//	FILE* fp;
//	int m = 0;
//	if ((fp = fopen("data.txt", "r+")) == NULL)
//	{
//		printf("\t\t  �ļ�������!\n");
//		return;
//	}
//	while (!feof(fp))
//		if (fread(&a[m], LEN, 1, fp) == 1)
//			m++;
//	if (m == 0)
//	{
//		printf("\n\t\t  û����ϵ��!\n");
//		fclose(fp);
//		return;
//	}
//	fclose(fp);
//	show();
//	printf("\t\t  ��һ��ӵ�� %d λ��ϵ��", m);
//}
//
