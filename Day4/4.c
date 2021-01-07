#include <stdio.h>

#define NUM 3
typedef struct
{
	char stuName[7];
	char stuSex;
	char stuCall[14];
	char stuMajor[20];
	int kor;
	int eng;
	int math;
	int total;
	float mean;
}INFO;

void INPUT(INFO* pArr, int num);
void OUTPUT(INFO* pArr, int num);
int SUM(INFO temp);
float AVE(INFO temp);

int main()
{
	INFO student[NUM];

	INPUT(student, sizeof(student) / sizeof(*student));

	for (int i = 0; i < NUM; i++)
	{
		student[i].total = SUM(student[i]);
		student[i].mean = AVE(student[i]);
	}

	OUTPUT(student, NUM);

	return 0;
}

void INPUT(INFO* pArr, int num)
{
	printf("\t### 학생 성적 처리 ###\n");
	for (int i = 0; i < num; i++)
	{
		printf("%d번째 학생 입력\n", i+1);
		printf("이      름 : ");
		gets_s((pArr+i)->stuName, sizeof((pArr + i)->stuName));
		printf("성별(M/F)  : ");
		scanf_s("%c%*c", &(pArr + i)->stuSex,1);
		printf("연  락  처 : ");
		gets_s((pArr + i)->stuCall, sizeof((pArr + i)->stuCall));
		printf("전      공 : ");
		gets_s((pArr + i)->stuMajor, sizeof((pArr + i)->stuMajor));
		printf("국어 점 수 : ");
		scanf_s("%d%*c", &(pArr+i)->kor);
		printf("영어 점 수 : ");
		scanf_s("%d%*c", &(pArr + i)->eng);
		printf("수학 점 수 : ");
		scanf_s("%d%*c", &(pArr + i)->math);
		printf("\n");
	}
	return;
}

int SUM(INFO temp)
{
	return temp.kor + temp.eng + temp.math;
}

float AVE(INFO temp)
{
	return (float)temp.total / 3;
}

void OUTPUT(INFO* pArr, int num)
{
	printf("\t### 학생 정보 ###\n");
	printf("===================================================================================\n");
	printf(" 이름\t성별\t연  락  처\t전      공\t국어\t영어\t수학\t총점\t평균\n");
	printf("===================================================================================\n");
	for (int i = 0; i < num; i++)
	{
		printf(" %s    %c \t%s\t%s\t%d\t%d\t%d\t%d\t%.2f\n", (pArr + i)->stuName, (pArr + i)->stuSex, (pArr + i)->stuCall, (pArr + i)->stuMajor, (pArr + i)->kor, (pArr + i)->eng, (pArr + i)->math, (pArr + i)->total, (pArr + i)->mean);
	}
	return;
}