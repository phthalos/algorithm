#include <stdio.h>

int main(void)
{
    char s[5];
    int cnt = 0;
    while (scanf("%s", s) != EOF)
        cnt++;
    printf("%d", cnt / 5);
}