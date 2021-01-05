#include <stdio.h>

int binarySearch(int* pArr, int first, int last, int key)
{
	if (first > last) // ��� ã�Ҵµ� ���� ���
	{
		return EOF;
	}
	int mid = (first + last) / 2; // �߰� index ���ϱ�
	if (key == *(pArr+mid))
	{
		return key;
	}
	else if (key < *(pArr + mid)) //A[mid]���� ������
	{
		return binarySearch(pArr , first, mid - 1, key);
	}
	else if (key > *(pArr + mid)) //A[mid]���� ũ��
	{
		return binarySearch(pArr, mid + 1, last, key);
	}
	return EOF;
}

int main()
{
	int num, result;
	int arr[10] = { 5,9,13,17,21,28,37,46,55,88 };

	printf("���� ������ : 5 9 13 17 21 28 37 46 55 88 \n");

	while (1)
	{
		printf("�˻� ������ �Է�(�˻� ���� : 0 ) : ");
		scanf_s("%d", &num);

		if (num == 0)
		{
			break;
		}

		result = binarySearch(arr, 0, sizeof(arr) - 1, num);

		if (result == EOF)
		{
			printf("���ٰ�!!!\n");
		}
		else if (result >= 0)
		{
			printf("�˻� ������ : %d ��° ��ġ %d\n", num, result + 1);// �迭index�� 0����
		}
	}

	return 0;
}