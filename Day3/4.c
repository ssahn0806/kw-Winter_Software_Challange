#include <stdio.h>

#define arrMAXSIZE 100

char* my_strcpy(char* dest, const char* src);

int main()
{
	char str1[arrMAXSIZE];
	char str2[arrMAXSIZE];

	printf("���ڿ� �Է�(str1) : ");
	gets_s(str1, sizeof(str1));

	printf("���ڿ� �Է�(str2) : ");
	gets_s(str2, sizeof(str2));

	my_strcpy(str1, str2);
	printf("���ڿ�(str1) : %s\n", str1);
	printf("���ڿ�(str2) : %s\n", str2);

	return 0;
}
char* my_strcpy(char* dest, const char* src)
{
	char* start = dest;

	while (*src != '\0')
	{
		//*dest++ = *src++;
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return start;
}
