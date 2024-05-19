#include <stdio.h>

int main(void)
{
    int i, j, n[5], ave, mid, temp, sum = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);
        sum += n[i];
    }
    ave = sum / 5;

    for (i = 0; i < 5; i++)
    {
        for (j = i; j < 5; j++)
        {
            if (n[j] < n[i])
            {
                temp = n[j];
                n[j] = n[i];
                n[i] = temp;
            }
        }
    }
    mid = n[2];
    printf("%d\n%d", ave, mid);
    return 0;
}