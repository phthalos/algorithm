#include <stdio.h>

int main()
{
    int x, n, i, a, b, r = 0;
    scanf("%d", &x);
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        r += a * b;
    }
    if (x == r)
        printf("Yes");
    else
        printf("No");
    return 0;
}