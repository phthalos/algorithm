#include <stdio.h>

int main(void)
{
    int t, s;
    scanf("%d %d", &t, &s);
    if (t <= 11 || t > 16 || s == 1)
        puts("280");
    else
        puts("320");

    return 0;
}