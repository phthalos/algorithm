#include <stdio.h>

int main(void)
{

    char a[4][5] = {"NLCS", "BHA", "KIS", "SJA"};
    char b[4][50] = {"North London Collegiate School", "Branksome Hall Asia", "Korea International School", "St. Johnsbury Academy"};
    char s[5];
    scanf("%s", &s);
    for (int i = 0; i < 4; i++)
    {
        if (s[0] == a[i][0])
            printf("%s", b[i]);
    }

    return 0;
}