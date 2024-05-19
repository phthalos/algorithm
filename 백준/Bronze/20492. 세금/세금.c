#include <stdio.h>

int main(void)
{
    long n;
    scanf("%ld", &n);
    printf("%.0lf %.0lf", n - n * 0.22, n - n * 0.2 * 0.22);

    return 0;
}