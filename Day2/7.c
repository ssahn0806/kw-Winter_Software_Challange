#include <stdio.h>

void revPrint(const char* pStr);

int main()
{
	char temp[100];

	printf("���ڿ� �Է� : ");
	gets_s(temp, sizeof(temp));

	revPrint(temp);

	return 0;
}

void revPrint(const char* pStr)
{
	const char* temp = pStr;
	while (*(temp) != '\0')
		temp++;

	for (--temp; temp >= pStr; temp--)
		printf("%c", *temp);
	return;
}