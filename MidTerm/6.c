#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
	char str1[12] = "홍길동";
	char str2[12] = "서두옥";
	char str3[20] = "Hi~ Clickseo";
	char str4[20] = "Hi~ Jessica";

	/* 각 함수가 어떤 용도로 사용되는지를 살펴보고, 입력 데이터에 따라 어떤 값을 주는지 알아보기 - 강의자료에 있음 */

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