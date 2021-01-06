#include <stdio.h>

#define COL 3
#define ROW 5
void stuScoreInput(int(*pTable)[COL], int row, int col);
void stuScoreOutput(int(*pTable)[COL], int row, int col);

int scoreSum(int* PArr, int num);
double scoreAve(int* pArr, int num);

int main()
{
	int arr[ROW][3];
	printf("5 명의 학생 점수(국어, 영어, 수학)를 입력하시오...\n");
	printf("\n");

	stuScoreInput(arr, 5, 3);
	printf("\n");

	stuScoreOutput(arr, 5, 3);

	return 0;
}
void stuScoreInput(int(*pTable)[COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		printf("%d번째 학생 성적을 입력하시오...\n", i + 1);
		printf("\t\t국어 : ");
		scanf_s("%d", &pTable[i][0]);
		printf("\t\t수학 : ");
		scanf_s("%d", &pTable[i][1]);
		printf("\t\t영어 : ");
		scanf_s("%d", &pTable[i][2]);
	}
}
void stuScoreOutput(int(*pTable)[COL], int row, int col)
{
	printf("순번  국어  영어  수학  총점\t평균\n");
	for (int i = 0; i < row; i++)
	{
		printf("%d : ", i + 1);
		for (int j = 0; j < col; j++)
		{
			printf("%5d ", pTable[i][j]);
		}
		printf("%5d\t", scoreSum(pTable[i], col));
		printf("%2.2lf\n", scoreAve(pTable[i], col));
	}
}
int scoreSum(int* pArr, int num)
{
	int sum = 0;
	for (int i = 0; i < num; i++)
	{
		sum += pArr[i];
	}
	return sum;
}
double scoreAve(int* pArr, int num)
{
	double ave = 0;
	for (int i = 0; i < num; i++)
	{
		ave += pArr[i];
	}
	return ave / num;
}
