#include <stdio.h>

int main(void)
{
    char c[51];
    int n, i, cnt = 0;
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        scanf("%c", &c[i]);
        if (c[i] == 'a' || c[i] == 'i' || c[i] == 'u' || c[i] == 'e' || c[i] == 'o')
        {
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}