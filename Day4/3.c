#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	int year	: 16;
	int month	: 8;
	int day		: 8;
}Birthday;
typedef struct
{
	char stuNum[11];
	char stuMajor[20];
	char stuName[7];
	char stuCall[14];
	char stuAddr[100];
	Birthday birthday;

}Student;

int main()
{
	Student s1;
	char temp[11];
	char year[5],month[3],day[3];

	printf("��      �� : ");
	gets_s(s1.stuNum, sizeof(s1.stuNum));
	printf("��      �� : ");
	gets_s(s1.stuMajor, sizeof(s1.stuMajor));
	printf("��      �� : ");
	gets_s(s1.stuName, sizeof(s1.stuName));
	printf("��  ��  ó : ");
	gets_s(s1.stuCall, sizeof(s1.stuCall));
	printf("��      �� : ");
	gets_s(s1.stuAddr, sizeof(s1.stuAddr));
	printf("�������(��: 2000/12/31) : ");
	gets_s(temp, sizeof(temp));
	strncpy(year, temp, 4);
	year[4] = '\0';
	strncpy(month, temp+5, 2);
	month[2] = '\0';
	strncpy(day, temp+8, 2);
	day[2] = '\0';
	//printf("%s\n%s\n%s\n", year,month,day);
	//printf("%d %d %d\n", atoi(year),atoi(month),atoi(day));
	
	s1.birthday.year = atoi(year);
	s1.birthday.month = atoi(month);
	s1.birthday.day = atoi(day);

	printf("\t##### �л� ���� #####\n");
	printf("\n�й� : %s\n", s1.stuNum);
	printf("��(��)�� : %s\n", s1.stuMajor);
	printf("�̸� : %s\n", s1.stuName);
	printf("����ó : %s\n", s1.stuCall);
	printf("�ּ� : %s\n", s1.stuAddr);
	printf("������� : %d-%d-%d\n", s1.birthday.year,s1.birthday.month,s1.birthday.day);

	return 0;
}