#include <stdio.h>

int main(void)
{
    int i = 0;
    char str[1000001];
    scanf("%s", str);
    while (str[i] != 0)
    {
        putchar(str[i] -= 32);
        i++;
    }
    return 0;
}