#include <stdio.h>

int main(void)
{
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n / 5; i++)
        printf("V");
    for (i = 0; i < n % 5; i++)
        printf("I");
}