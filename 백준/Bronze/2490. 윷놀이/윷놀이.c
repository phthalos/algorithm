#include <stdio.h>

int main(void)
{
    int i, j, n;
    char c[5] = {'E', 'A', 'B', 'C', 'D'};
    for (i = 0; i < 3; i++)
    {
        int cnt = 0;
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &n);
            if (n == 0)
                cnt++;
        }
        printf("%c\n", c[cnt]);
    }
    return 0;
}