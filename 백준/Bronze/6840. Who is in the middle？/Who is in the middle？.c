#include <stdio.h>

int main(void)
{
    int i, j, n[3], temp;
    for (i = 0; i < 3; i++)
        scanf("%d", &n[i]);
    for (i = 0; i < 3; i++)
    {
        for (j = i; j < 3; j++)
        {
            if (n[i] > n[j])
            {
                temp = n[i];
                n[i] = n[j];
                n[j] = temp;
            }
        }
    }
    printf("%d ", n[1]);
    return 0;
}