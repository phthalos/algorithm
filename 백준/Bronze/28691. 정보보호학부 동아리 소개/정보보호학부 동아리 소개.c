#include <stdio.h>

int main(void)
{
    char c[1];
    scanf("%c", c);
    switch (c[0])
    {
    case 'M':
        puts("MatKor");
        break;

    case 'W':
        puts("WiCys");
        break;

    case 'C':
        puts("CyKor");
        break;

    case 'A':
        puts("AlKor");
        break;

    case '$':
        puts("$clear");
        break;
    }

    return 0;
}