#include <stdio.h>

int main(void)
{
    int n, i, sum = 0, sum2 = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += i;
        sum2 += i * i * i;
    }
    printf("%d\n%d\n%d", sum, sum * sum, sum2);
    return 0;
}