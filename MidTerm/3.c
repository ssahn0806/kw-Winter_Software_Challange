#include <stdio.h>

int main(void)
{
	char* arrPL[] = { "C/C++","Java","Python","JavaScript" }; // 2���� �迭
	char** dPtr = arrPL; // 2���� �迭�� ����Ű�� ������


	/* sizeof�� ���ڷ� ���� ���� ����������,������ �����ϰ� �װ��� ����� �ǹ��ؼ� ũ�Ⱑ ������ Ȯ���غ���
	   ���� �� �����Ͱ� ����Ű�� ������ ������� �����غ���
	   �����ʹ� ������ ���� 4, char : 1 */

	printf("%d \n", sizeof(arrPL)); 
	printf("%d \n", sizeof(*arrPL)); 
	printf("%c ", *arrPL[3]);
	printf("%s ", *arrPL);
	printf("%s \n", *++dPtr);

	return 0;
}