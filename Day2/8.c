#include <stdio.h>
#include <ctype.h>

void strConvert(const char* fromStr, char* toStr);

int main()
{
	char temp[100];

	printf("���ڿ� �Է� : ");
	gets_s(temp, sizeof(temp));

	char* last = temp;
	while (*(last) != '\0')
		last++;

	strConvert(temp, last);
	return 0;
}

void strConvert(const char* fromStr, char* toStr)
{
	const char* move = fromStr;
	printf("��ȯ�� ���ڿ� : ");
	for (move; move < toStr; move++)
	{
		if (islower(*move))
			putchar(toupper(*move));
		else if (isupper(*move))
			putchar(tolower(*move));
		else
			putchar(*move);
	}
}