#include <stdio.h>
#define OUTPUT(temp) printf("%d\n",temp);

int main(void)
{
#ifndef SIZE
#define SIZE 100
#endif

#if SIZE
	int a, b;

	a = SIZE;
	OUTPUT(a);
#endif

#ifdef SIZE
#undef SIZE
#endif 

#define SIZE 200

	b = SIZE;
	OUTPUT(b);

	return;
}