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

	printf("학      번 : ");
	gets_s(s1.stuNum, sizeof(s1.stuNum));
	printf("이      름 : ");
	gets_s(s1.stuName, sizeof(s1.stuName));
	printf("성별(M/F)  : ");
	scanf_s("%c%*c",&s1.stuSex,1);
	printf("연  락  처 : ");
	gets_s(s1.stuCall, sizeof(s1.stuCall));
	printf("전      공 : ");
	gets_s(s1.stuMajor, sizeof(s1.stuMajor));

	printf("\t##### 학생 정보 #####\n");
	printf("%s, %s, %c, %s, %s\n", s1.stuNum, s1.stuName, s1.stuSex, s1.stuCall, s1.stuMajor);

	return 0;
}