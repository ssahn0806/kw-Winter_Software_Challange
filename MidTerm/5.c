#include <stdio.h>
typedef int(*p3D)[3][4];
int main(void)
{
	char arr[5] = { 'A','B','C' };
	int table[2][3] = { 0 };
	int threeDtable[2][3][4] = { 0 };

	int(*pTable)[3] = table;
	p3D p3DTable = threeDtable;

	/* sizeof�� ���ڷ� ���� ���� ����������,������ �����ϰ� �װ��� ����� �ǹ��ؼ� ũ�Ⱑ ������ Ȯ���غ��� 
	   �����ʹ� ������ ���� 4, char : 1, int : 2 */

	printf("%d \n", sizeof(arr)); // ��Ʈ : �迭 ��ü ũ��
	printf("%d \n", sizeof(*arr)); // �迭 ù��° ������ ũ��

	printf("%d \n", sizeof(table)); // 2���� �迭�� ũ�� ( int �� )
	printf("%d \n", sizeof(pTable)); 
	printf("%d \n", sizeof(*pTable));

	printf("%d \n", sizeof(threeDtable));
	printf("%d \n", sizeof(p3DTable));
	printf("%d \n", sizeof(*p3DTable));
	printf("%d \n", sizeof(**p3DTable));
	printf("%d \n", sizeof(***p3DTable));

	return 0;
}