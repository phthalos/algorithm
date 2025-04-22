#include <stdio.h>
int n, ABC = 1, num[10];
int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &n);
        ABC *= n;
    }
    while (ABC > 0)
    {
        num[ABC % 10]++;
        ABC /= 10;
    }
    for (int i = 0; i <= 9; i++)
    {
        printf("%d\n", num[i]);
    }

    return 0;
}