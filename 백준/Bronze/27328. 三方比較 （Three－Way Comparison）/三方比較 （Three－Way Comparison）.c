#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf(a < b ? "-1" : a == b ? "0" : "1");
    return 0;
}