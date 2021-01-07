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

	printf("한명의 학생 정보를 입력하시오...\n");

	printf("학      번 : ");
	gets_s(s1.info.stuNum, sizeof(s1.info.stuNum));
	printf("이      름 : ");
	gets_s(s1.info.stuName, sizeof(s1.info.stuName));
	printf("성별(M/F)  : ");
	scanf_s("%c%*c", &s1.info.stuSex, 1);
	printf("연  락  처 : ");
	gets_s(s1.info.stuCall, sizeof(s1.info.stuCall));
	printf("전      공 : ");
	gets_s(s1.info.stuMajor, sizeof(s1.info.stuMajor));

	printf("\n한명의 학생 성적을 입력하시오...\n");
	printf("국      어 : ");
	scanf_s("%d", &s1.score.kor);
	printf("영      어 : ");
	scanf_s("%d", &s1.score.eng);
	printf("수      학 : ");
	scanf_s("%d", &s1.score.math);

	s1.score.total = s1.score.kor + s1.score.eng + s1.score.math;
	s1.score.mean = (double)s1.score.total / 3;
	printf("\n\t##### 학생 목록 #####\n");
	printf("학생 정보 : %s, %s, %c, %s, %s\n", s1.info.stuNum, s1.info.stuName, s1.info.stuSex, s1.info.stuCall, s1.info.stuMajor);
	printf("학생 성적 : \t%d, \t%d, \t%d, \t%d, \t%.2lf\n", s1.score.kor, s1.score.eng, s1.score.math, s1.score.total, s1.score.mean);

	return 0;
}