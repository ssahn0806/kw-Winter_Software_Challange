#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define arrMAXSIZE 100

double my_atof(const char* pStr);

int main()
{
	char str1[arrMAXSIZE];
	double convert;

	printf("�Ǽ��� ��ȯ�� ���ڿ� �Է� : ");
	gets_s(str1, sizeof(str1));

	convert = my_atof(str1);
	printf("�Է� ���ڿ� : %s ��ȯ�� ����(double) : %lf", str1, convert);

	return 0;
}

double my_atof(const char* pStr)
{
	const char* start = pStr;
	const char* zero_p = NULL;
	int flag = 0; // ù��° ���� �Ǵ�
	int zero = 0; // �Ҽ��� ��ġ �Ǵ�
	size_t size = 0; // �Ҽ� ���� �������� �Ǵ�
	int num_f = 0;
	double num_b = 0; // ������,�Ҽ��� ����
	double result;

	if (*start == '+')
	{
		flag = 1;
	}
	else if (*start == '-')
	{
		flag = -1;
	}
	else
	{
		if (isdigit(*start) == 0)
			return -1;
	}

	switch (flag)
	{
	case -1:
	case  1:
		start++;
	case 0:
		num_f = *start - 48;
		start++;
		while (isdigit(*start) || *start=='.')
		{
			if (*start == '.')
			{
				zero_p = start;
				zero = 1;
			}
			else
			{ 
				if(zero==0)
				{
					num_f = num_f * 10 + *start - 48;
				}
			}		
			start++;
		}
		start--;
		while (start > zero_p)
		{
			num_b = num_b / 10.0 + (*start - 48) / 10.0;
			start--;
		}
		break;
	}

	result = num_f + num_b;
	if (flag == -1)
		result *= -1;
	return result;
}