#include <stdio.h>

typedef struct
{
	char stuNum[11];
	char stuName[7];
	char stuSex;
	char stuCall[14];
	char stuMajor[20];
}Info;

typedef struct
{
	int kor;
	int eng;
	int math;
	int total;
	double mean;
}Score;

typedef struct
{
	Info info;
	Score score;
}Student;
int main()
{
	Student s1;

	printf("�Ѹ��� �л� ������ �Է��Ͻÿ�...\n");

	printf("��      �� : ");
	gets_s(s1.info.stuNum, sizeof(s1.info.stuNum));
	printf("��      �� : ");
	gets_s(s1.info.stuName, sizeof(s1.info.stuName));
	printf("����(M/F)  : ");
	scanf_s("%c%*c", &s1.info.stuSex, 1);
	printf("��  ��  ó : ");
	gets_s(s1.info.stuCall, sizeof(s1.info.stuCall));
	printf("��      �� : ");
	gets_s(s1.info.stuMajor, sizeof(s1.info.stuMajor));

	printf("\n�Ѹ��� �л� ������ �Է��Ͻÿ�...\n");
	printf("��      �� : ");
	scanf_s("%d", &s1.score.kor);
	printf("��      �� : ");
	scanf_s("%d", &s1.score.eng);
	printf("��      �� : ");
	scanf_s("%d", &s1.score.math);

	s1.score.total = s1.score.kor + s1.score.eng + s1.score.math;
	s1.score.mean = (double)s1.score.total / 3;
	printf("\n\t##### �л� ��� #####\n");
	printf("�л� ���� : %s, %s, %c, %s, %s\n", s1.info.stuNum, s1.info.stuName, s1.info.stuSex, s1.info.stuCall, s1.info.stuMajor);
	printf("�л� ���� : \t%d, \t%d, \t%d, \t%d, \t%.2lf\n", s1.score.kor, s1.score.eng, s1.score.math, s1.score.total, s1.score.mean);

	return 0;
}