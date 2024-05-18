#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    if (n % 7 == 2) puts("1");
    else puts("0");

    return 0;
}