#include <stdio.h>

int main(void)
{
    int i, n, cnt = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &n);
        cnt += n;
    }
    printf("%d", cnt);
    return 0;
}