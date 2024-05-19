#include <stdio.h>

int main(void)
{
    int n, i, a, cnt = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);
        cnt += a;
    }
    printf("%d", cnt);
    return 0;
}