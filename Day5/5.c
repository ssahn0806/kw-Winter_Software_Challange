#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(int argc, char* argv[])
{
	if(argc== 3)
	{
		int line = 0, voca = 0, ch = 0;
		FILE* fp;
		// printf("%s %s %s", argv[0], argv[1], argv[2]);

		fp = fopen(argv[2], "rb");
		if (fp == NULL)
		{
			printf("File opening Failed\n");
			return 2;
		}

		char input;
		while ((input = fgetc(fp)) != EOF)
		{
			if (input == '\r')
			{
				//printf("%c %d(1)\n", input, input);
				line++;
				voca++;
			}
			else if (input == '\n')
			{

			}
			else if (input == ' ')
			{ 
				voca++;
				//printf("%c %d(2)\n", input, input);
			}
			else
			{
				ch++;
				//printf("%c %d(3)\n", input, input);
			}

		}
		if(line!=0)
			line++;
		fclose(fp);
		printf("���� �� : %d\n", line);
		printf("�ܾ� �� : %d\n", voca);
		printf("���� �� : %d\n", ch);
		
			
	}
	else
	{
		printf("���α׷� ���� : wc FileName\n");
		return 1;
	}
	return 0;
}