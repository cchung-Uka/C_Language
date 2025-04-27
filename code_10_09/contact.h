#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define NAME_MAX 10
#define SEX_MAX 5
#define TEL_MAX 12
#define ADDR_MAX 20

#define DEFAULT_SZ 2;
#define EXPAND 2

typedef struct Peo_Info
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char tel[TEL_MAX];
	char addr[ADDR_MAX];
}Peo_Info;

//动态
typedef struct Contact
{
	Peo_Info* data;//接收calloc开辟的内存块初始位置
	int sz;//记录当前通讯录联系人信息的个数
	int capacity;//记录当前通讯录的容量
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

//初始化通讯录
void Init_Contact(Contact* pc);

//添加联系人信息
void Add_Contact(Contact* pc);

//删除指定联系人
void Del_Contact(Contact* pc);

//查找指定联系人
void Search_Contact(Contact* pc);

//更新指定联系人信息
void Update_Contact(Contact* pc);

//显示所有联系人
void Display_Contact(Contact* pc);

//联系人信息以名字顺序进行排序
void Sort_Contact(Contact* p);

//清空联系人信息
void Clear_Contact(Contact* pc);

//销毁通讯录
void Destroy_Contact(Contact* pc);

//保存联系人信息到文件
void Save_Contact(Contact* pc);