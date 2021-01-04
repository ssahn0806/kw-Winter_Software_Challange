#include <stdio.h>

int printMenu();
void printBox();
void printPyramid();
int main()
{
	int num = printMenu();

	switch (num)
	{
	case 1:
		printBox();
		break;
	case 2:
		printPyramid();
		break;
	case 3:
		return;
	}
	return 0;
}

int printMenu()
{
	int input;
	printf("\n\t********* 메    뉴 *********\n");
	printf("\t1. 알파벳 박스 모양 출력\n");
	printf("\t2. 알파벳 피라미드 모양 출력\n");
	printf("\t3. 프로그램 종료\n");
	printf("\t****************************\n");
	printf("\t메뉴 선택 : ");
	scanf_s("%d", &input);
	return input;
}

void printBox()
{
	int i, j;
	for (i = 65; i < 91; i++)
	{
		printf("\t");
		for (j = i; j < i + 26; j++)
		{
			if (j > 90)
				printf("%c ", j - 26);
			else
				printf("%c ", j);
		}
		printf("\n");
	}
}

void printPyramid()
{
	int i, j;
	for (i = 65; i < 91; i++)
	{
		for (j = i; j < 91; j++)
		{
			printf(" ");
		}
		for (int k = 65; k <= i; k++)
		{
			printf("%c ",k);
		}
		printf("\n");
	}
}