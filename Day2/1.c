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

	printf("\t### ���� ��� ###\n");
	for (int i = SIZE - 1; i >= 0; i--)
		printf("%3d", num[i]);
	printf("\n");

	return 0;
}