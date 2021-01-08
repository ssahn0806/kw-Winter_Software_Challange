#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char* argv[])
{
	if (argc == 4)
	{
		FILE* fp1,* fp2;
		char ch;
		fp1 = fopen(argv[2], "rb");
		fp2 = fopen(argv[3], "wb");
		if (fp1 == NULL || fp2 == NULL)
		{
			printf("File opening Failed\n");
			return 2;
		}
		printf("���� ������...\n");
		while ((ch = fgetc(fp1)) != EOF)
		{
			fputc(ch, fp2);
		}

		printf("\n���� �Ϸ�!!!\n");
		fclose(fp1);
		fclose(fp2);
	}
	else
	{
		printf("���α׷� ���� : my_copy �������ϸ� ������ϸ�\n");
		return 1;
	}
	return 0;
}