#include <stdio.h>

#define SIZE 10
int main()
{
	int num[SIZE];

	printf("10���� �迭 ���Ҹ� �Է��Ͻÿ�!!!\n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("arr[%d] : ", i);
		scanf_s("%d", (num + i));
	}

	printf("\tElement Value\tHistogram\n");
	for (int i = 0; i < SIZE;i++)
	{
		printf("\t%5d %5d\t", i, num[i]);
		for (int j = 0; j < num[i]; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}