#include <stdio.h>

int main(void)
{
    long long n;
    scanf("%ld", &n);
    printf("%ld.%ld", n * 100 / 4 / 100, n * 100 / 4 % 100);
}