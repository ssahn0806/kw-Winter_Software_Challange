#include <stdio.h>
#include <math.h>

double roundTwo(double num);

int main(void) {
	double num;
	printf("양의 부동소수점을 입력하시오 : ");
	scanf_s("%lf", &num);
	printf("반올림 결과 : %lf", roundTwo(num));

	return 0;
}

double roundTwo(double num) {
	return floor(num * 100 + 0.5) / 100;
}