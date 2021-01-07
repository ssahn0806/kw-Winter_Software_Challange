#include <stdio.h>
typedef int(*p3D)[3][4];
int main(void)
{
	char arr[5] = { 'A','B','C' };
	int table[2][3] = { 0 };
	int threeDtable[2][3][4] = { 0 };

	int(*pTable)[3] = table;
	p3D p3DTable = threeDtable;

	/* sizeof에 인자로 들어가는 것이 포인터인지,값인지 구분하고 그것이 어떤것을 의미해서 크기가 얼마인지 확인해보기 
	   포인터는 종류에 무관 4, char : 1, int : 2 */

	printf("%d \n", sizeof(arr)); // 힌트 : 배열 전체 크기
	printf("%d \n", sizeof(*arr)); // 배열 첫번째 원소의 크기

	printf("%d \n", sizeof(table)); // 2차원 배열의 크기 ( int 형 )
	printf("%d \n", sizeof(pTable)); 
	printf("%d \n", sizeof(*pTable));

	printf("%d \n", sizeof(threeDtable));
	printf("%d \n", sizeof(p3DTable));
	printf("%d \n", sizeof(*p3DTable));
	printf("%d \n", sizeof(**p3DTable));
	printf("%d \n", sizeof(***p3DTable));

	return 0;
}