#include <stdio.h>

typedef struct
{
	char stuNum[11];
	char stuName[7];
	char stuSex;
	char stuCall[14];
	char stuMajor[20];
}Student;

int main()
{
	Student s1;

	printf("��      �� : ");
	gets_s(s1.stuNum, sizeof(s1.stuNum));
	printf("��      �� : ");
	gets_s(s1.stuName, sizeof(s1.stuName));
	printf("����(M/F)  : ");
	scanf_s("%c%*c",&s1.stuSex,1);
	printf("��  ��  ó : ");
	gets_s(s1.stuCall, sizeof(s1.stuCall));
	printf("��      �� : ");
	gets_s(s1.stuMajor, sizeof(s1.stuMajor));

	printf("\t##### �л� ���� #####\n");
	printf("%s, %s, %c, %s, %s\n", s1.stuNum, s1.stuName, s1.stuSex, s1.stuCall, s1.stuMajor);

	return 0;
}