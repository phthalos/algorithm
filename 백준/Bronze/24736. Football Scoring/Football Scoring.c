#include <stdio.h>

int main(void)
{
    int t, f, s, p, c;
    while (scanf("%d %d %d %d %d", &t, &f, &s, &p, &c) != EOF)
        printf("%d ", t * 6 + f * 3 + s * 2 + p * 1 + c * 2);
}