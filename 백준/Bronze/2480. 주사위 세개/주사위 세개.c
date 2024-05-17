#include <stdio.h>

int main()
{
    int a, b, c, r, m;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c)
        r = 10000 + a * 1000;
    else if (a == b || b == c || c == a)
    {
        if (a == b)
            r = 1000 + a * 100;
        else if (b == c)
            r = 1000 + b * 100;
        else
            r = 1000 + c * 100;
    }
    else
    {
        m = a;
        if (m < b)
            m = b;
        if (m < c)
            m = c;
        r = m * 100;
    }
    printf("%d", r);
    return 0;
}