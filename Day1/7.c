#include <stdio.h>

int CAL(int num1, int num2, int* mod);
int main()
{
	int num1, num2, Q,R;

	printf("�� ���� �Է� : ");
	scanf_s("%d %d", &num1, &num2);

	Q = CAL(num1, num2, &R);

	printf("%d / %d = %d, ������ : %d", num1, num2, Q, R);
	return 0;
}

int CAL(int num1, int num2, int* mod)
{
	if (num2 == 0)
	{
		printf("Error : ������ �Է� ����!!!\n\t%d�� ���� �� �����ϴ�.\n", num2);
		exit(1);
	}
	*mod = num1 % num2;
	return num1 / num2;

}