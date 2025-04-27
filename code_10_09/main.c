#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void menu()
{
	printf("--------------------------------\n");
	printf("---- 1. Add       2. Del    ----\n");
	printf("---- 3. Search    4. Update ----\n");
	printf("---- 5. Display   6. Sort   ----\n");
	printf("---- 7. Clear     0. Exit   ----\n");
	printf("--------------------------------\n");
}

int main()
{
	Contact ct;

	Init_Contact(&ct);

	int input = 0;
	do
	{
		menu();

		printf("Enter your option:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			system("cls");
			Add_Contact(&ct);
			break;
		case DEL:
			system("cls");
			Del_Contact(&ct);
			break;
		case SEARCH:
			system("cls");
			Search_Contact(&ct);
			break;
		case UPDATE:
			system("cls");
			Update_Contact(&ct);
			break;
		case DISPLAY:
			system("cls");
			Display_Contact(&ct);
			break;
		case SORT:
			system("cls");
			Sort_Contact(&ct);
			break;
		case CLEAR:
			system("cls");
			Clear_Contact(&ct);
			break;
		case EXIT:
			Save_Contact(&ct);
			Destroy_Contact(&ct);
			system("cls");
			printf("Exit successful.\n");
			break;
		default:
			system("cls");
			printf("Input Error,try again.\n");
			break;
		}
	} while (input);

	return 0;
}