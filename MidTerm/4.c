#include <stdio.h>

int main(void)
{
	char arr[5] = "test";
	char* p = arr;

	/* 연산자의 우선순위가 어떻게 작용하는지 ( 포인터에 먼저인지, 값에 먼저인지 ) 판단하고, 현재 포인터가 가리키는 공간을 생각해보기 */

	printf("*p++ => %c \n", *p++); // 힌트 : t 출력후 p는 e를 가리킴
	printf("*p => %c \n", *p);	

	printf("*p++ => %c \n", *p++); 
	printf("*p => %c \n", *p); 

	printf("(*p) + 1 => %c \n", (*p)+ 1); 
	printf("++*p => %c \n", ++*p); 

	printf("*++p => %c \n", *++p);
	printf("*p => %c \n", *p);


	return 0;
}