#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fp1, * fp2;
	char ch;
	fp1 = fopen("test.txt", "rb");
	fp2 = fopen("copy.txt", "wb");

	if (fp1 == NULL || fp2 == NULL)
	{
		printf("File opening Failed\n");
		return 1;
	}

	printf("파일 복사중...\n");
	while ((ch = fgetc(fp1)) != EOF)
	{
		fputc(ch, fp2);
	}
	
	printf("\n복사 완료!!!\n");
	fclose(fp1);
	fclose(fp2);
	return 0;
}
