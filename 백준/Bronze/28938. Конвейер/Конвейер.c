#include <stdio.h>

int main(void)
{
    int n, i, num, sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        sum += num;
    }
    if (sum > 0)
        puts("Right");
    else if (sum < 0)
        puts("Left");
    else
        puts("Stay");
}