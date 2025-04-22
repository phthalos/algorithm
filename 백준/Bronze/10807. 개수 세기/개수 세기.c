#include <stdio.h>
int n, arr[201], x, v;
int main(void)
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        arr[x + 100]++;
    }
    scanf("%d", &v);
    printf("%d", arr[v + 100]);

    return 0;
}