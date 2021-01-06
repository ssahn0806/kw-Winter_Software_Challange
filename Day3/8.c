#include <stdio.h>

#define arrMAXSIZE 100

char* my_strstr(const char* pStr, const char* subStr);

int main()
{
	char str1[arrMAXSIZE];
	char str2[arrMAXSIZE];
	char* search;

	printf("���ڿ� �Է�(str)             : ");
	gets_s(str1, sizeof(str1));

	printf("�˻� �κ� ���ڿ� �Է�(substr): ");
	gets_s(str2, sizeof(str1));

	search = my_strstr(str1, str2);

	if (search != NULL)
	{
		printf("���ڿ� \'%s\'���� Ž���� \'%s\'�� ���� ��ġ: %d", str1, str2, search - str1 + 1);
	}
	else
	{
		printf("���ڿ� \'%s\'���� \'%s\'�� �������� �ʽ��ϴ�.", str1, str2);
	}

	return 0;
}

char* my_strstr(const char* pStr, const char* subStr)
{
	size_t subsize = 0;
	size_t comparesize = 0;
	char* start=NULL;
	const char* sub_Sp = subStr;

	while (*subStr!= '\0')
	{
		subStr++;
		subsize++;
	}

	while (*pStr != '\0')
	{
		if (*pStr != *sub_Sp)
		{
			if (*sub_Sp == '\0')
			{
				return start;
			}
			else
			{
				pStr++;
				continue;
			}
		}
		else
		{
			if (comparesize == 0)
			{
				start = pStr;
				comparesize++;
			}
			
			if (comparesize == subsize)
			{
				return start;
			}
			else
			{
				pStr++;
				sub_Sp++;
			}
		}
	}
	return NULL;
}