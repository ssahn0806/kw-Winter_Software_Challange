#include <stdio.h>

int main(void)
{
	int a, b, c;

	int* pa, * pb, * pc;

	/* �����Ͱ� ����Ű�� ������ ��ȭ�� ���캸��
	   �����͸� �̿��ؼ� ���� �ٲٴ� ����� �˰� �ִ��� */

	a = 10;
	b = 20;

	pa = &b; 
	pb = pa; // pb = &b
	pc = &c;

	pa = &a;
	*pb = 30; // b = 30

	*pc = *pa; // c = a;
	*pc = a + *pb + *&c; // c = a + b + c;

	printf("a : %d, b : %d, c : %d \n", a, b, c);
	printf("*pa : %d, *pb : %d, *pc : %d \n", *pa, *pb, *pc);
}