#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;	// ������ ���� ������ �����ο�
	const int* p1 = &a; // �����Ͱ� ����Ű�� ������ ���ü�� ������ �� ����
	int* const p2 = &a; // �����Ͱ� ����Ű�� ������ ������ �� ����
	const int* const p3 = &b; // �� �� ���� ����

	a = 30;						//  O
	//*p1 = 40;					//  X
	*p2 = 50;					//  O
	//p2 = &b;					//  X
	b = 60;						//  O
	//*p3 = 70;					//  X
	//p3 = &b;					//  X

	/* �������� ������ ������ +- ���
						������ - �����͸� �����.*/
	printf("%d \n", p1 + 1);	//  O
	printf("%d \n", p1 - 1);	//  O
	//printf("%d \n", p1 * p2);	//  X
	//printf("%d \n", p1 / p2);	//  X
	//printf("%d \n", p1 + p2);	//  X
	printf("%d \n", p1 - p2);	//  O

	return 0;
}