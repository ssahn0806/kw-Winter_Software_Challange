#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char* argv[])
{
	if (argc == 3)
	{
		FILE* fp;
		char ch[100];
		int line = 1;
		fp = fopen(argv[2], "rb");
		if (fp == NULL)
		{
			printf("File opening Failed\n");
			return 2;
		}
		while (fgets(ch,sizeof(ch),fp) != NULL)
		{
			printf("%d ", line++);
			fputs(ch,stdout);
		}

		fclose(fp);
	}
	else
	{
		printf("���α׷� ���� : my_view ���ϸ�\n");
		return 1;
	}
	return 0;
}