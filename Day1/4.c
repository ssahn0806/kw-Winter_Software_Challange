#include <stdio.h>

int SUM(int* number, int size);
double AVE(int* number, int size);

int main()
{
	int num[3];
	int sum;
	double ave;
	printf("�� ������ ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &num[0], &num[1], &num[2]);

	sum = SUM(num, sizeof(num) / sizeof(*num));
	ave = AVE(num, sizeof(num) / sizeof(*num));

	printf("\n���� : %d, ��� : %.2lf", sum, ave);
	return 0;
}

int SUM(int* number, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += *(number + i);
	return sum;
}

double AVE(int* number, int size)
{
	int sum = SUM(number, size);
	double ave = (double)sum / size;
	return ave;

}