#include <stdio.h>

enum months {Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};

typedef struct {
	char name[10];
	int kor, eng, math, tot;
	float ave;
}SCORE;

typedef union {
	char ch;
	int i;
	double d;
}TYPE;

int main(void)
{
	SCORE a;
	TYPE b;

	b.i = 0xFFFFFFFF;

	printf("a	   : %d \n", sizeof(a));
	printf("a.name : %d \n", sizeof(a.name));

	printf("b	   : %d \n", sizeof(b));
	printf("b.ch   : %d \n", b.ch);
	printf("b.i	   : %d \n", b.i);

	printf("Jan    : %d \n", Jan);
	printf("Dec	   : %d \n", Dec);

	return 0;
}