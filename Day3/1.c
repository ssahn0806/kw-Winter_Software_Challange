#include <stdio.h>

#define ROW 10
#define COL 10

void Triangle(int(*pArr)[COL], int row, int col);
void Triangle_invert(int(*pArr)[COL], int row, int col);
void OUTPUT(int(*pArr)[COL], int row, int col);

int main()
{
	int num;
	int arr[ROW][COL] = { 0 }; // �� �迭�� �������� ������!

	printf(" ### �ﰢ�� ��� ###\n");
	printf("1) �� �� �� ���\n");
	printf("2) ���ﰢ�� ���\n");
	printf("3) ���α׷� ����\n");
	printf("�޴� ���� : ");
	scanf_s("%d", &num);

	switch (num)
	{
	case 1:
		Triangle(arr, ROW, COL);
		break;
	case 2:
		Triangle_invert(arr, ROW, COL);
		break;
	case 3:
		break;
	}

	return 0;
}

void Triangle(int(*pArr)[COL], int row, int col)
{
	int k = 1;
	for (int i = 0; i < row; i++)
	{
		for (int j = col-i-1; j < col; j++)
		{
			pArr[i][j] = k++;
		}
	}
	OUTPUT(pArr, row, col);
}
void Triangle_invert(int(*pArr)[COL], int row, int col)
{
	int k = 1;
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < i+1; j++)
		{
			pArr[j][i] = k++;
		}
	}
	OUTPUT(pArr, row, col);
}
void OUTPUT(int(*pArr)[COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		printf("   ");
		for (int j = 0; j < col; j++)
		{
			printf("%3d", pArr[i][j]);
		}
		printf("\n");
	}
}