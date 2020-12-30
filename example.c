#include <stdio.h>

#define SIZE 5

int main(void)
{
	int arr[SIZE] = { 1,2,3,4,5 };

	for (int i = 0; i < SIZE; i++)
	{
		printf("[%d]: %d\t", i, arr[i]);
	}

	printf("\n");
	int* ptr = arr;

	for (int i = 0; i < SIZE; i++)
	{
		printf("[%d]: %d\t", i, (*ptr++)*2);
	}
	return 0;
}