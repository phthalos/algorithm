#include <stdio.h>

int main(void)
{
    int x, n = 1;
    scanf("%d", &x);
    while (1)
    {
        if ((n - 1) * n / 2 < x && x <= n * (n + 1) / 2)
            break;
        n++;
    }
    int a = n * (n + 1) / 2;
    if (n % 2 != 0)
        printf("%d/%d", a - x + 1, n - (a - x));
    else
        printf("%d/%d", n - (a - x), a - x + 1);
    return 0;
}