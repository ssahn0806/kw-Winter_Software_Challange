#include <stdio.h>

int main(void)
{
	int a, b, c;

	int* pa, * pb, * pc;

	/* 포인터가 가리키는 공간의 변화를 살펴보기
	   포인터를 이용해서 값을 바꾸는 방법을 알고 있는지 */

	a = 10;
	b = 20;

	pa = &b; 
	pb = pa; // pb = &b
	pc = &c;

	pa = &a;
	*pb = 30; // b = 30

	*pc = *pa; // c = a;
	*pc = a + *pb + *&c; // c = a + b + c;

	printf("a : %d, b : %d, c : %d \n", a, b, c);
	printf("*pa : %d, *pb : %d, *pc : %d \n", *pa, *pb, *pc);
}