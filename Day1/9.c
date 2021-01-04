#include <stdio.h>

void INPUT(int*, int*, int*);
int SUM(int, int, int);
double GRADE(int, int, int);

char grade = 'F';
int main()
{
	int kor, eng, mat;
	int sum;
	double ave;
	INPUT(&kor, &eng, &mat);
	sum = SUM(kor, eng, mat);
	ave = GRADE(kor, eng, mat);

	printf("���� : %d, ��� : %.2lf, ���� : %c", sum, ave, grade);
	return 0;
}

void INPUT(int* a, int* b, int* c)
{
	printf("�� ������ ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", a, b, c);
}

int SUM(int a, int b, int c)
{
	return a + b + c;
}

double GRADE(int a, int b, int c)
{
	double ave = (double)SUM(a, b, c) / 3;

	if (ave >= 90)
		grade = 'A';
	else if (ave >= 80)
		grade = 'B';
	else if (ave >= 70)
		grade = 'C';
	else if (ave >= 60)
		grade = 'D';

	return ave;
}