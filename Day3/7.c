#include <stdio.h>

#define arrMAXSIZE 100

char* my_strchr(const char* pStr, int ch);

int main()
{
	char str1[arrMAXSIZE];
	char ch;
	char* search;

	printf("���ڿ� �Է�(str) : ");
	gets_s(str1, sizeof(str1));

	printf("�˻� ���� �Է�   : ");
	scanf_s("%c", &ch,sizeof(ch));
	
	search = my_strchr(str1, ch);

	if (search != NULL)
	{
		printf("���ڿ� \'%s\'���� �˻��� \'%c\'�� ��ġ: %d", str1, ch, search - str1 + 1);
	}
	else
	{
		printf("���ڿ� \'%s\'���� ã���� �ϴ� \'%c\'�� �������� �ʽ��ϴ�.", str1, ch);
	}

	return 0;
}

char* my_strchr(const char* pStr, int ch)
{
	char* location = pStr;

	while (*location != '\0')
	{
		if ((int)*location == ch)
			return location;
		else
			location++;
	}
	return NULL;
}