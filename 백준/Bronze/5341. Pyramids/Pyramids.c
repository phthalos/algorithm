#include <stdio.h>

int main(void)
{
    int n;
    while (scanf("%d", &n) && n != 0)
    {
        int i, cnt = 0;
        for (i = n; i > 0; i--)
            cnt += i;
        printf("%d\n", cnt);
    }
    return 0;
}