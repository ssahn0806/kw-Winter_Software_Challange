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
	printf("\n\t********* ��    �� *********\n");
	printf("\t1. ���ĺ� �ڽ� ��� ���\n");
	printf("\t2. ���ĺ� �Ƕ�̵� ��� ���\n");
	printf("\t3. ���α׷� ����\n");
	printf("\t****************************\n");
	printf("\t�޴� ���� : ");
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