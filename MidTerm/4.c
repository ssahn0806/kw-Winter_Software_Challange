#include <stdio.h>

int main(void)
{
	char arr[5] = "test";
	char* p = arr;

	/* �������� �켱������ ��� �ۿ��ϴ��� ( �����Ϳ� ��������, ���� �������� ) �Ǵ��ϰ�, ���� �����Ͱ� ����Ű�� ������ �����غ��� */

	printf("*p++ => %c \n", *p++); // ��Ʈ : t ����� p�� e�� ����Ŵ
	printf("*p => %c \n", *p);	

	printf("*p++ => %c \n", *p++); 
	printf("*p => %c \n", *p); 

	printf("(*p) + 1 => %c \n", (*p)+ 1); 
	printf("++*p => %c \n", ++*p); 

	printf("*++p => %c \n", *++p);
	printf("*p => %c \n", *p);


	return 0;
}