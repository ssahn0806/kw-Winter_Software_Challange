#include <stdio.h>

#define SIZE 10

int* MAX(int* pArr, int num);
int* MIN(int* pArr, int num);

int main()
{
	int arr[SIZE];
	int* max, * min;
	printf("�迭 ���� %d���� �Է��Ͻÿ�...\n", SIZE);
	for (int i = 0; i < SIZE; i++)
	{
		printf("arr[%d] : ", i);
		scanf_s("%d", &arr[i]);
	}

	printf("\n�Է� ������ :\t");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%3d", arr[i]);
	}
	printf("\n\n");

	max = MAX(arr, SIZE);
	min = MIN(arr, sizeof(arr) / sizeof(*arr));

	printf("�ִ� : %3d, ��ġ(÷��) : %3d\n", *max, (max-arr));
	printf("�ּڰ� : %3d, ��ġ(÷��) : %3d\n", *min, (min-arr));
	return 0;
}

int* MAX(int* pArr, int num)
{
	int* pMax = pArr;
	int tempM = *pArr;
	for (int i = 1; i < num; i++)
	{
		if (*(pArr + i) > tempM)
		{
			pMax = pArr + i;
			tempM = *pMax;
		}
	}

	return pMax;
}

int* MIN(int* pArr, int num)
{
	int* pMin = pArr;
	int tempm = *pArr;
	for (int i = 1; i < num; i++)
	{
		if (*(pArr + i) < tempm)
		{
			pMin = pArr + i;
			tempm = *pMin;
		}
	}

	return pMin;
}