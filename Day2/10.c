#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
void bubbleSort(int* pArr, int num);

int main()
{
	int num[SIZE];
	srand(time(0));


	for (int i = 0; i < SIZE; i++)
	{
		num[i] = rand() % 100 + 1;
	}

	printf("정렬 전:   ");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", num[i]);
	}

	bubbleSort(num, sizeof(num) / sizeof(*num));

	printf("\n정렬 후:   ");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", num[i]);
	}

	return 0;
}

void bubbleSort(int* pArr, int num)
{
	int i, j, temp;
	printf("\n");
	for (i = 0; i < num; i++)
	{
		for (j = num-1; j > i-1; j--)
		{
			if (*(pArr + j) < *(pArr + j-1))
			{
				temp = *(pArr + j);
				*(pArr + j) = *(pArr + j - 1);
				*(pArr + j - 1) = temp;
			}
		}
		printf("\n[%d단계]: ", i + 1);
		for (int k = 0; k < num; k++)
		{
			printf("%d ", *(pArr + k));
		}
		printf("\n");
	}
	return;
}
