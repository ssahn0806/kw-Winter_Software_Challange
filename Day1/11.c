#include <stdio.h>
#include <math.h>

double roundTwo(double num);

int main(void) {
	double num;
	printf("���� �ε��Ҽ����� �Է��Ͻÿ� : ");
	scanf_s("%lf", &num);
	printf("�ݿø� ��� : %lf", roundTwo(num));

	return 0;
}

double roundTwo(double num) {
	return floor(num * 100 + 0.5) / 100;
}