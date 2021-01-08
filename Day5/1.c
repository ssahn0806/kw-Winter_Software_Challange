#include <stdio.h>

#define ADD(A,B) ((A)+(B))
#define SUB(A,B) ((A)-(B))
#define MUL(A,B) ((A)*(B))
#define DIV(A,B) ((A)/(B))
#define MAX(A,B) ((A)>(B) ? (A) : (B))
#define MIN(A,B) ((A)<(B) ? (A) : (B))
#define ABS(A) ((A)>0 ? (A) : (-A))
#define SQUARE(A) ((A)*(A))
int main(void)
{
	int num1, num2;

	printf("\t### 매크로 함수 ###\n");
	printf("\n두 정수 입력 : ");
	scanf_s("%d %d", &num1, &num2);

	printf("\nADD(a,b) = %d\n",ADD(num1,num2));
	printf("SUB(a,b) = %d\n", SUB(num1, num2));
	printf("MUL(a,b) = %d\n", MUL(num1, num2));
	printf("DIV(a,b) = %d\n\n", DIV(num1, num2));

	printf("MAX(a,b) = %d\n", MAX(num1, num2));
	printf("MIN(a,b) = %d\n\n", MIN(num1, num2));

	printf("ABS(a) = %d\n", ABS(num1));
	printf("ABS(b) = %d\n\n", ABS(num2));

	printf("SQUARE(a) = %d\n", SQUARE(num1));
	printf("SQUARE(b) = %d\n", SQUARE(num2));
	return 0;
}