#include <stdio.h>

int CAL(int num1, int num2, int* mod);
int main()
{
	int num1, num2, Q,R;

	printf("두 정수 입력 : ");
	scanf_s("%d %d", &num1, &num2);

	Q = CAL(num1, num2, &R);

	printf("%d / %d = %d, 나머지 : %d", num1, num2, Q, R);
	return 0;
}

int CAL(int num1, int num2, int* mod)
{
	if (num2 == 0)
	{
		printf("Error : 나눗셈 입력 오류!!!\n\t%d로 나눌 수 없습니다.\n", num2);
		exit(1);
	}
	*mod = num1 % num2;
	return num1 / num2;

}