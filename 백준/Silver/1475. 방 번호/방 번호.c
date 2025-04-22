#include <stdio.h>
int n, set[10], result;
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main(void)
{
    scanf("%d", &n);
    while (n > 0)
    {
        set[n % 10]++;
        n /= 10;
    }
    for (int i = 0; i < 10; i++)
    {
        if (i == 6 || i == 9)
            continue;
        result = max(set[i], result);
    }
    printf("%d", max(result, (set[6] + set[9] + 1) / 2));

    return 0;
}