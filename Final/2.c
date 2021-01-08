#include <stdio.h>

#define Token(a,b) a##b
#define ADD(a,b) printf(#a " + " #b " = %d\n",a+b)

int main(void)
{
	int a = 10, b = 20;
	int Token(a, b) = 3;

	ADD(10, 20);
	ADD(a, ab);

	return 0;
}