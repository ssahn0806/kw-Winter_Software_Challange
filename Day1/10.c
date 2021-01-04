#include <stdio.h>

int validateBinary(int num);
int binaryToDecimal(int num);
int main()
{
	int number;
	int isBinary, Decimal;

	while (1)
	{
		printf("이진수 입력 (0 또는 1) : ");
		scanf_s("%d", &number);
		isBinary = validateBinary(number);
		if (isBinary == 1)
			break;
		printf("0 또는 1만 입력하시오!!!\n");
	}
	
	printf("입력한 이진수 : %d\n", number);
	printf("변환된 십진수 : %d\n", binaryToDecimal(number));
	
	return 0;
}

int validateBinary(int num)
{
	int n = num;
	if (n > 10)
		n = validateBinary(num % 10);
	else if (n == 1 || n == 0)
		return 1;
	else
		return 0;
}

int binaryToDecimal(int num)
{
	int n = num;
	int val = 1;
	int result = 0;
	
	while (n > 0)
	{
		result += (n % 10) * val;
		n /= 10;
		val *= 2;
	}

	return result;
}