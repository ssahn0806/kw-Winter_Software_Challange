#include <stdio.h>

#define SIZE 10

void stuGrade(const double* pArr, int num, double* pSum, double* pAve, double* pMax);

int main()
{
	double score[SIZE];
	double sum=0, avg, max;
	printf(" %d���� �л� ������ �Է��Ͻÿ�\n\n", SIZE);
	for (int i = 0; i < SIZE; i++)
	{
		printf("score[%d] :", i);
		scanf_s("%lf", &score[i]);
	}

	stuGrade(score, sizeof(score) / sizeof(*score), &sum, &avg, &max);

	printf("\n���� : %.2lf, ��� : %.2lf, �ִ� : %.2lf\n", sum, avg, max);
	return 0;
}
void stuGrade(const double* pArr, int num, double* pSum, double* pAve, double* pMax)
{
	for (int i = 0; i < num; i++)
	{
		*pSum += *(pArr + i);
	}

	*pAve = *pSum / num;
	*pMax = *pArr;
	for (int i = 1; i < num; i++)
	{
		if (*(pArr + i) > *pMax)
			*pMax = *(pArr + i);
	}
}
