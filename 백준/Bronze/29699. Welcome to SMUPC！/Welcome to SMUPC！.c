#include <stdio.h>

int main(void)
{
    char c[] = "WelcomeToSMUPC";
    int n;
    scanf("%d", &n);
    n--;
    if (n / 15 == 0)
        n += n / 15;
    printf("%c", c[n % 14]);
    return 0;
}