#include <stdio.h>

int validateBinary(int num);
int binaryToDecimal(int num);
int main()
{
	int number;
	int isBinary, Decimal;

	while (1)
	{
		printf("������ �Է� (0 �Ǵ� 1) : ");
		scanf_s("%d", &number);
		isBinary = validateBinary(number);
		if (isBinary == 1)
			break;
		printf("0 �Ǵ� 1�� �Է��Ͻÿ�!!!\n");
	}
	
	printf("�Է��� ������ : %d\n", number);
	printf("��ȯ�� ������ : %d\n", binaryToDecimal(number));
	
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