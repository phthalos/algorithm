#include <stdio.h>

int main()
{
    int t, s = 0, i;
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &t);
        s += t;
    }
    printf("%d\n%d", s / 60, s % 60);

    return 0;
}