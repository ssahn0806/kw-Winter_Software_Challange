#include <stdio.h>

int ADD(int a,int b);
int SUB(int a, int b);
int MUL(int a, int b);
int DIV(int a, int b);


int main()
{
	int num1, num2;
	printf("�� ���� �Է� : ");
	scanf_s("%d %d", &num1, &num2);

	printf("%d + %d = %d\n", num1, num2, ADD(num1, num2));
	printf("%d - %d = %d\n", num1, num2, SUB(num1, num2));
	printf("%d * %d = %d\n", num1, num2, MUL(num1, num2));
	if (DIV(num1, num2) == -1)
	{
		printf("Error : ������ �Է� ����!!!\n\t%d���� ���� �� �����ϴ�.\n", num2);
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