#include <stdio.h>

int main()
{
    int s[5], i, m = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &s[i]);
        if (s[i] < 40)
            s[i] = 40;
        m += s[i];
    }
    printf("%d", m / 5);
    return 0;
}