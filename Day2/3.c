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
	printf("\n");

	int* pSm = num;
	int* pWalk;
	int* pLast = num + SIZE - 1;

	for (pWalk = num + 1; pWalk <= pLast; pWalk++)
	{
		pSm = *pWalk < *pSm ? pWalk : pSm;
	}

	printf("�ּڰ� : %d", *pSm);
	return 0;
}