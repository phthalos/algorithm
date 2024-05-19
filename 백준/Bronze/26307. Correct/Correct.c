#include <stdio.h>

int main(void)
{
    int h, m;
    scanf("%d %d", &h, &m);
    printf("%d", h * 60 + m - 9 * 60);
    return 0;
}