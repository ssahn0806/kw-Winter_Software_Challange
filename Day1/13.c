#include <stdio.h>

void revPrint(void);
int main()
{
	printf("���ڿ� �Է� : ");
	revPrint();
	return 0;
}

void revPrint(void)
{
	int input;
	input = getchar();
	if (input != '\n')
		revPrint();
	putchar(input);
	return;
}