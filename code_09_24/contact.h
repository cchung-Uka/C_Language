#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define NAME_MAX 10
#define SEX_MAX 5
#define TEL_MAX 12
#define ADDR_MAX 20
#define DATA_MAX 1000

typedef struct Peo_Info
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char tel[TEL_MAX];
	char addr[ADDR_MAX];
}Peo_Info;

typedef struct Contact
{
	Peo_Info data[DATA_MAX];
	int sz;
}Contact;

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	UPDATE,
	DISPLAY,
	SORT,
	CLEAR,
};

enum Option_update
{
	NAME = 1,
	SEX,
	AGE,
	TEL,
	ADDR,
};

void Init_Contact(Contact* pc);

void Add_Contact(Contact* pc);

void Del_Contact(Contact* pc);

void Search_Contact(Contact* pc);

void Update_Contact(Contact* pc);

void Display_Contact(Contact* pc);

void Sort_Contact(Contact* p);

void Clear_Contact(Contact* pc);