#include <stdio.h>

int ADD(int a,int b);
int SUB(int a, int b);
int MUL(int a, int b);
int DIV(int a, int b);


int main()
{
	int num1, num2;
	printf("두 정수 입력 : ");
	scanf_s("%d %d", &num1, &num2);

	printf("%d + %d = %d\n", num1, num2, ADD(num1, num2));
	printf("%d - %d = %d\n", num1, num2, SUB(num1, num2));
	printf("%d * %d = %d\n", num1, num2, MUL(num1, num2));
	if (DIV(num1, num2) == -1)
	{
		printf("Error : 나눗셈 입력 오류!!!\n\t%d으로 나눌 수 없습니다.\n", num2);
	}
	else
	{
		printf("%d / %d = %d\n", num1, num2, DIV(num1, num2));
	}

	return 0;
}

int ADD(int a, int b)
{
	return a + b;
}

int SUB(int a, int b)
{
	return a - b;
}

int MUL(int a, int b)
{
	return a * b;
}

int DIV(int a, int b)
{
	if (b == 0)
		return -1;
	return a / b;
}