#include <stdio.h>

int* MAX(int*, int*, int*, int*);
int* MIN(int*, int*, int*, int*);
int main()
{
	int num[4];
	int*M,* m;

	printf("네 개의 정수를 입력하시오 : ");
	scanf_s("%d %d %d %d", &num[0], &num[1], &num[2], &num[3]);

	M = MAX(num, (num + 1), (num + 2), (num + 3));
	m = MIN(num, (num + 1), (num + 2), (num + 3));

	printf("최댓값 : %d\n최솟값 : %d\n",*M, *m);
	return 0;
}

int* MAX(int* a, int* b, int* c, int* d)
{
	int* tempM = a;

	tempM = *b > *tempM ? b : tempM;
	tempM = *c > *tempM ? c : tempM;
	tempM = *d > *tempM ? d : tempM;

	return tempM;
}

int* MIN(int* a, int* b, int* c, int* d)
{
	int* tempm = a;

	tempm = *b < *tempm ? b : tempm;
	tempm = *c < *tempm ? c : tempm;
	tempm = *d < *tempm ? d : tempm;

	return tempm;
}