#include <stdio.h>

int main(void)
{
    int n, i, cnt = 1, x;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
            break;
        else
        {
            for (i = 0; i < n; i++)
                scanf("%d", &x);
        }
        printf("Case %d: Sorting... done!\n", cnt);
        cnt++;
    }
    return 0;
}