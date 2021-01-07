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
	printf("\t### �л� ���� ó�� ###\n");
	for (int i = 0; i < num; i++)
	{
		printf("%d��° �л� �Է�\n", i+1);
		printf("��      �� : ");
		gets_s((pArr+i)->stuName, sizeof((pArr + i)->stuName));
		printf("����(M/F)  : ");
		scanf_s("%c%*c", &(pArr + i)->stuSex,1);
		printf("��  ��  ó : ");
		gets_s((pArr + i)->stuCall, sizeof((pArr + i)->stuCall));
		printf("��      �� : ");
		gets_s((pArr + i)->stuMajor, sizeof((pArr + i)->stuMajor));
		printf("���� �� �� : ");
		scanf_s("%d%*c", &(pArr+i)->kor);
		printf("���� �� �� : ");
		scanf_s("%d%*c", &(pArr + i)->eng);
		printf("���� �� �� : ");
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
	printf("\t### �л� ���� ###\n");
	printf("===================================================================================\n");
	printf(" �̸�\t����\t��  ��  ó\t��      ��\t����\t����\t����\t����\t���\n");
	printf("===================================================================================\n");
	for (int i = 0; i < num; i++)
	{
		printf(" %s    %c \t%s\t%s\t%d\t%d\t%d\t%d\t%.2f\n", (pArr + i)->stuName, (pArr + i)->stuSex, (pArr + i)->stuCall, (pArr + i)->stuMajor, (pArr + i)->kor, (pArr + i)->eng, (pArr + i)->math, (pArr + i)->total, (pArr + i)->mean);
	}
	return;
}