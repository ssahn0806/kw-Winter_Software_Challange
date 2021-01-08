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
		printf("파일 복사중...\n");
		while ((ch = fgetc(fp1)) != EOF)
		{
			fputc(ch, fp2);
		}

		printf("\n복사 완료!!!\n");
		fclose(fp1);
		fclose(fp2);
	}
	else
	{
		printf("프로그램 사용법 : my_copy 원본파일명 대상파일명\n");
		return 1;
	}
	return 0;
}