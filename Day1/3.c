#include <stdio.h>

void PRINT(int num);

int main()
{
	int num;

	printf("���ϴ� ������(1~9) :");
	scanf_s("%d", &num);
	PRINT(num);
	return 0;
}

void PRINT(int num)
{
	for (int i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n", num, i, num * i);
	}
}