#include <stdio.h>

int main(void)
{
    int a, b, i, j;
    scanf("%d", &a);
    scanf("%d", &b);
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}