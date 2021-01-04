#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int CAL(int num1, int num2, char op)
{
	switch (op)
	{
	case '+':
		return num1 + num2;
	case '-':
		return num1 - num2;
	case '*':
		return num1 * num2;
	case '/':
		if (num2 == 0)
		{
			printf("Error : 나눗셈 입력 오류!!!\n");
			exit(1);
		}
		else
			return num1 / num2;
	}
}
int main()
{
	int num1, num2, result;
	char op;

	printf("수식 입력 (예 : 10 + 20) :");
	scanf("%d %c %d", &num1, &op, &num2);
	result = CAL(num1, num2, op);
	printf("%d %c %d = %d", num1, op, num2, result);
	return 0;
}