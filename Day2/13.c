#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void selectionSort(int* pArr, int num);
int* binarySearch(int* pArr, int* pFirst, int* pLast, int key);
void PRINT(int* pArr, int num);

int main()
{
	int num[SIZE] = { 5,9,13,17,21,28,37,46,55,88 };
	int search;
	int* location;
	srand(time(0));
	//selectionSort(num, sizeof(num) / sizeof(*num));

	printf("원시 데이터 :   ");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", num[i]);
	}

	do
	{
		printf("\n검색 데이터 입력(검색 종료 : 0) : ");
		scanf_s("%d", &search);
		if (search != 0)
		{
			location = binarySearch(num, num, num + SIZE - 1, search);
			PRINT(location, (location - num));
		}
	} while (search != 0);
	
	return 0;
}

int* binarySearch(int* pArr, int* pFirst, int* pLast, int key)
{
	while (pFirst <= pLast)
	{
		int* mid = (pLast - pFirst) / 2 + pFirst;
		if (key == *mid)
			return mid;
		else if (key < *mid)
			pLast = mid - 1;
		else if (key > *mid)
			pFirst = mid + 1;
	}
	return NULL;
}

void PRINT(int* pArr, int num)
{
	if (pArr == NULL)
	{
		printf("없다고!!!\n");
	}
	else
	{
		printf("검색 데이터 : %d\t %d 번째 위치\n", *pArr , num);
	}
}

void selectionSort(int* pArr, int num)
{
	int i, j, temp, smallest;
	printf("\n");
	for (i = 0; i < num - 1; i++)
	{
		smallest = i;
		for (j = i + 1; j < num; j++)
		{
			if (*(pArr + j) < *(pArr + smallest))
			{
				smallest = j;
			}
		}
		temp = *(pArr + smallest);
		*(pArr + smallest) = *(pArr + i);
		*(pArr + i) = temp;
	}
	return;
}
