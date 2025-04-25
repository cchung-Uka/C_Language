#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void Init_Contact(Contact* pc)
{
	assert(pc);

	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));
}

void Add_Contact(Contact* pc)
{
	assert(pc);

	if (pc->sz == DATA_MAX)
	{
		printf("Insufficient space available.\n");
		return;
	}

	printf("Enter name:>");
	scanf("%s", pc->data[pc->sz].name);

	printf("Enter sex:>");
	scanf("%s", pc->data[pc->sz].sex);

	printf("Enter age:>");
	scanf("%d", &(pc->data[pc->sz].age));

	printf("Enter tel:>");
	scanf("%s", pc->data[pc->sz].tel);

	printf("Enter address:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;

	printf("Addition has been achieved.\n");
}

static int Find_by_Name(Contact* pc, char* name)
{
	assert(pc);

	for (int i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
			return i;
	}
	return -1;//没找到
}

void Del_Contact(Contact* pc)
{
	assert(pc);

	char name[NAME_MAX];

	if (pc->sz == 0)
	{
		printf("Contact is empty!\n");
		return;
	}

	printf("Enter the name of ppl. to be deleted:>");
	scanf("%s", name);

	int ret = Find_by_Name(pc, name);
	if (ret == -1)
	{
		printf("The people does not exist!\n");
		return;
	}

	for (int i = ret; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}

	pc->sz--;

	printf("Deletion has been achieved.\n");
}

void Search_Contact(Contact* pc)
{
	assert(pc);

	char name[NAME_MAX];

	if (pc->sz == 0)
	{
		printf("Contact is empty!\n");
		return;
	}

	printf("Enter the name of ppl. to be searched:>");
	scanf("%s", name);

	int ret = Find_by_Name(pc, name);
	if (ret == -1)
	{
		printf("The people does not exist!\n");
		return;
	}

	printf("%-10s%-4s%-4s%-12s%-20s\n", "NAME", "SEX", "AGE", "TEL", "ADDR");
	printf("%-10s%-4s%-4d%-12s%-20s\n", 
		pc->data[ret].name, pc->data[ret].sex,pc->data[ret].age, pc->data[ret].tel, pc->data[ret].addr);
}

void Update_menu()
{
	printf("--------------------------------\n");
	printf("---- 1. Name      2. Sex    ----\n");
	printf("---- 3. Age       4. Tel    ----\n");
	printf("---- 5. Address   0. Exit   ----\n");
	printf("--------------------------------\n");
}

void Update_Contact(Contact* pc)
{
	assert(pc);

	char name[NAME_MAX];

	if (pc->sz == 0)
	{
		printf("Contact is empty!\n");
		return;
	}

	printf("Enter the name of ppl. to be updated:>");
	scanf("%s", name);

	int ret = Find_by_Name(pc, name);
	if (ret == -1)
	{
		printf("The people does not exist!\n");
		return;
	}
	
	int input = 0;
	do 
	{
		Update_menu();
		printf("Enter the option you want to update:>");
		scanf("%d", &input);
		switch (input)
		{
		case NAME:
			system("cls");
			printf("Enter name:>");
			scanf("%s", pc->data[ret].name);
			break;
		case SEX:
			system("cls");
			printf("Enter sex:>");
			scanf("%s", pc->data[ret].sex);
			break;
		case AGE:
			system("cls");
			printf("Enter age:>");
			scanf("%d", &(pc->data[ret].age));
			break;
		case TEL:
			system("cls");
			printf("Enter tel:>");
			scanf("%s", pc->data[ret].tel);
			break;
		case ADDR:
			system("cls");
			printf("Enter address:>");
			scanf("%s", pc->data[ret].addr);
			break;
		case EXIT:
			system("cls");
			break;
		default:
			break;
		}
	} while (input);

	printf("Update has been achieved.\n");
}

void Display_Contact(Contact* pc)
{
	assert(pc);

	if (pc->sz == 0)
	{
		printf("Contact is empty!\n");
		return;
	}

	printf("%-10s%-4s%-4s%-12s%-20s\n", "NAME", "SEX", "AGE", "TEL", "ADDR");

	for (int i = 0; i < pc->sz; i++)
	{
		printf("%-10s%-4s%-4d%-12s%-20s\n",
			pc->data[i].name, pc->data[i].sex, pc->data[i].age, pc->data[i].tel, pc->data[i].addr);
	}
}

int Cmp_PeoInfo_Name(const void* e1, const void* e2)
{
	return strcmp(((Peo_Info*)e1)->name, ((Peo_Info*)e2)->name);
}

void Sort_Contact(Contact* pc)
{
	assert(pc);

	if (pc->sz == 0)
	{
		printf("Contact is empty!\n");
		return;
	}
	
	qsort(pc->data, pc->sz, sizeof(Peo_Info), Cmp_PeoInfo_Name);

	printf("Order has been achieved.\n");
}

void Clear_Contact(Contact* pc)
{
	assert(pc);

	if (pc->sz == 0)
	{
		printf("Contact is empty!\n");
		return;
	}

	memset(pc->data, 0, sizeof(pc->data));
	pc->sz = 0;

	printf("Emptying has been achieved.\n");
}