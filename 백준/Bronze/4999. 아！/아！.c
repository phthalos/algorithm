#include <stdio.h>
#include <string.h>

int main(void)
{
    char c[1000], d[1000];
    scanf("%s", c);
    scanf("%s", d);
    if (strlen(c) < strlen(d))
        printf("no");
    else
        printf("go");
    return 0;
}