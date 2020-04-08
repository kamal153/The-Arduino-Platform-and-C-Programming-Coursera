#include <stdio.h>

int fibonacii(int n);

int main(void)
{
    int i;
    printf("Fibonacci sequence: ");
    for(i = 1; i <= 6; i++)
        printf("%d ", fib\(i-1));
    printf("\n");

    return 0;
}

int fib(int n)
{
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    return fib(n-2) + fib(n-1);
}
