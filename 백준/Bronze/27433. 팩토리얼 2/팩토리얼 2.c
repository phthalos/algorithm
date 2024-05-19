#include <stdio.h>

long long int factorial(long long int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main(void)
{
    int n, i;
    long long result = 1;
    scanf("%lld", &n);
    printf("%lld", factorial(n));
    return 0;
}