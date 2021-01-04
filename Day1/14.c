#include <stdio.h>
#include <time.h>


int Fibo(int num)
{
    if (num == 1 || num == 2)
    {
        return 1;
    }
    else
    {
        return Fibo(num - 1) + Fibo(num - 2);
    }
}

int Fibonacci(int num)
{
    int f[3];
    f[0] = 1;
    f[1] = 1;
    for (int i = 3; i <= num; i++)
    {
        f[2] = f[0] + f[1];
        f[0] = f[1];
        f[1] = f[2];
    }
    return f[0];
}
int main()
{
    int n;
    printf("몇번째 피보나치 수열까지 계산할까요? : ");
    scanf_s("%d", &n);
    printf("\n");

    // 재귀
    time_t start2 = time(NULL);
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        printf("%10d ", Fibo(i));
        cnt++;
        if (cnt % 5 == 0)
            printf("\n");

    }
    time_t end2 = time(NULL);
    printf("%d번째 피보나치 수열 재귀 계산 시간 : %f 초\n", n, (double)(end2-start2));

    //비재귀
    time_t start = time(NULL);
    int cnt2 = 0;
    for (int i = 1; i <= n; i++)
    {
        printf("%10d ", Fibonacci(i));
        cnt2++;
        if (cnt2 % 5 == 0)
            printf("\n");

    }
    time_t end = time(NULL);
    printf("%d번째 피보나치 수열 비재귀 계산 시간 : %f 초\n", n, (double)(end-start));


    return 0;
}