#include <stdio.h>

int main()
{
    int k, n, m, r;
    scanf("%d %d %d", &k, &n, &m);
    r = k * n - m;
    printf("%d", r > 0 ? r : 0);
    return 0;
}
