#include <stdio.h>

int main(void)
{
    int n, i, min = 1000000, max = 0, a;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (min > a)
            min = a;
        if (max < a)
            max = a;
    }
    printf("%d", min * max);
    return 0;
}