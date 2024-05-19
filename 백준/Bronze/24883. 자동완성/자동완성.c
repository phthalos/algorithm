#include <stdio.h>

int main(void)
{
    char c[1];
    scanf("%c", c);
    if (c[0] == 'N' || c[0] == 'n')
        puts("Naver D2");
    else
        puts("Naver Whale");
    return 0;
}