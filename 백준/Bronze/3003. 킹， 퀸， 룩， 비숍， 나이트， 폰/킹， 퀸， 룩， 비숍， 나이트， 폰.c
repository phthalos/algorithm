#include <stdio.h>

int main(void)
{
    int i, n, c[6] = {1, 1, 2, 2, 2, 8};
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &n);
        printf("%d ", c[i] - n);
    }
    return 0;
}