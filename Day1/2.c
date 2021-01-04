#include <stdio.h>

int main()
{
	char a = 'A';
	int b = 10;
	float c = 10.5f;
	double d = 10.7;

	printf("\t### 변경 전 ###\n");
	printf("a : %c, b : %d, c : %.2f, d : %.2lf\n", a, b, c, d);

	void* p = &a;
	(*(char*)p)++;
	p = &b;
	(*(int*)p)++;
	p = &c;
	(*(float*)p)++;
	p = &d;
	(*(double*)p)++;

	printf("\n\t### 변경 후 ###\n");
	printf("a : %c, b : %d, c : %.2f, d : %.2lf\n", a, b, c, d);

	return 0;
}