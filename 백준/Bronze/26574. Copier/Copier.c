#include <stdio.h>

int main(void)
{
    int n, i, a;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);
        printf("%d %d\n", a, a);
    }
    return 0;
}