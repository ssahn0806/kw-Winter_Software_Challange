#include <stdio.h>
#define ADD(a,b) (a+b)
#define SUB(a,b) (a-b)
#define MUL(a,b) (a*b)
#define DIV(a,b) (a/b)
#define SQUARE(a) (a*a)
int main(void)
{
	int a = 10, b = 3;

	printf("ADD(a,b) = %d\n", ADD(a + 10, b));
	printf("SUB(a,b) = %d\n", SUB(a + 10, b));
	printf("MUL(a,b) = %d\n", MUL(a + 10, b));
	printf("DIV(a,b) = %d\n", DIV(a + 10, b));
	printf("SQUARE(a) = %d\n", SQUARE(a + 10));

	return 0;
}