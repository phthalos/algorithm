#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    char c[4];
    scanf("%s", c);
    for (i = strlen(c) - 1; i >= 0; i--)
        printf("%c", c[i]);
    return 0;
}