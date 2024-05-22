#include <stdio.h>

int main()
{
    int i, j, n[7], sum = 0, min, cnt = 0, temp;
    for (i = 0; i < 7; i++)
    {
        scanf("%d", &n[i]);
        if (n[i] % 2 == 0)
        {
            n[i] = 0;
            cnt++;
        }
        sum += n[i];
    }
    for (i = 0; i < 7; i++)
    {
        for (j = i; j < 7; j++)
        {
            if (n[i] > n[j])
            {
                temp = n[i];
                n[i] = n[j];
                n[j] = temp;
            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        if (n[i] != 0)
        {
            min = n[i];
            break;
        }
    }

    if (cnt == 7)
        printf("-1");
    else
        printf("%d\n%d", sum, min);
    return 0;
}