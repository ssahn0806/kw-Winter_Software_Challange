#include <stdio.h>

#define arrMAXSIZE 100

size_t my_strlen(const char* pStr);

int main()
{
	char str[arrMAXSIZE];
	size_t len;

	printf("���ڿ� �Է� : ");
	gets_s(str, sizeof(str));

	len = my_strlen(str);

	printf("�Է� ���ڿ� : %s\n", str);
	printf("���ڿ��� ���� ���� : %d", len);

	return 0;
}

size_t my_strlen(const char* pStr)
{
	size_t length = 0;

	while (*pStr!='\0')
	{
		pStr++;
		length++;
	}
		
	return length;
}