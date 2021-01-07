#include <stdio.h>

int main(void)
{
	char* arrPL[] = { "C/C++","Java","Python","JavaScript" }; // 2차원 배열
	char** dPtr = arrPL; // 2차원 배열을 가리키는 포인터


	/* sizeof에 인자로 들어가는 것이 포인터인지,값인지 구분하고 그것이 어떤것을 의미해서 크기가 얼마인지 확인해보기
	   현재 그 포인터가 가리키는 공간이 어디인지 생각해보기
	   포인터는 종류에 무관 4, char : 1 */

	printf("%d \n", sizeof(arrPL)); 
	printf("%d \n", sizeof(*arrPL)); 
	printf("%c ", *arrPL[3]);
	printf("%s ", *arrPL);
	printf("%s \n", *++dPtr);

	return 0;
}