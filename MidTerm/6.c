#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
	char str1[12] = "ȫ�浿";
	char str2[12] = "���ο�";
	char str3[20] = "Hi~ Clickseo";
	char str4[20] = "Hi~ Jessica";

	/* �� �Լ��� � �뵵�� ���Ǵ����� ���캸��, �Է� �����Ϳ� ���� � ���� �ִ��� �˾ƺ��� - �����ڷῡ ���� */

	printf("%d \n", islower('A')); 
	printf("%d \n", isdigit('A'));
	printf("%d \n", isalnum('0'));

	printf("%d \n", sizeof(str1));
	printf("%d \n", strlen(str1));
	printf("%d \n", strcmp(str1,str2));
	printf("%d \n", strcmp(str3, str4));
	printf("%d \n", strncmp(str3, str4,4));
	printf("%d \n", (int)strchr(str1,'D'));
	printf("%d \n", (int)strstr(str1, "clickseo"));

	return 0;
}