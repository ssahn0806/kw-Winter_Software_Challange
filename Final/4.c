#include <stdio.h>

typedef struct _date {
	unsigned int year : 16;
	unsigned int month : 4;
	unsigned int day : 5;
}DATE;

typedef struct _type1 {
	char ch;
	DATE date;
	double d;
}TYPE1;

typedef struct _type2 {
	DATE date;
	char ch;
	double d;
}TYPE2;

typedef struct _type3 {
	char ch;
	double d;
	DATE date;
}TYPE3;

typedef struct _type4 {
	double d;
	char ch;
	DATE date;
}TYPE4;

typedef struct _info {
	char name[21];
	int kor, eng, math, tot;
	float ave;
}INFO;

int main(void)
{
	INFO temp;
	printf("INFO\t:%d\n", sizeof(INFO));
	printf("temp.name:%d\n", sizeof(temp.name));
	printf("DATE\t:%d\n", sizeof(DATE));
	printf("TYPE1\t:%d\n", sizeof(TYPE1));
	printf("TYPE2\t:%d\n", sizeof(TYPE2));
	printf("TYPE3\t:%d\n", sizeof(TYPE3));
	printf("TYPE4\t:%d\n", sizeof(TYPE4));
	return 0;
}