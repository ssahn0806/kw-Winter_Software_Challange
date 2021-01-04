#include <stdio.h>

int main()
{
	char a = 'A';
	int b = 10;
	float c = 10.5f;
	double d = 10.7;

	char* pa = &a;
	int* pb = &b;
	float* pc = &c;
	double* pd = &d;

	printf("\t### 변경 전 ###\n");
	printf("a : %c, b : %d, c : %.2f, d : %.2lf\n", a, b, c, d);
	*pa += 1;
	(*pb)++;
	*pc = *pc + 1;
	(*pd)++;
	printf("\n\t### 변경 후 ###\n");
	printf("a : %c, b : %d, c : %.2f, d : %.2lf\n", a, b, c, d);
}
