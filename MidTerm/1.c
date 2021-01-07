#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;	// 변수는 값의 변경이 자유로움
	const int* p1 = &a; // 포인터가 가리키는 공간의 대상체를 변경할 수 없음
	int* const p2 = &a; // 포인터가 가리키는 공간을 변경할 수 없음
	const int* const p3 = &b; // 둘 다 변경 못함

	a = 30;						//  O
	//*p1 = 40;					//  X
	*p2 = 50;					//  O
	//p2 = &b;					//  X
	b = 60;						//  O
	//*p3 = 70;					//  X
	//p3 = &b;					//  X

	/* 포인터의 연산은 포인터 +- 상수
						포인터 - 포인터만 허용함.*/
	printf("%d \n", p1 + 1);	//  O
	printf("%d \n", p1 - 1);	//  O
	//printf("%d \n", p1 * p2);	//  X
	//printf("%d \n", p1 / p2);	//  X
	//printf("%d \n", p1 + p2);	//  X
	printf("%d \n", p1 - p2);	//  O

	return 0;
}