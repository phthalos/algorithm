#include <stdio.h>

int main(void)
{
    int n,a,b;
    scanf("%d %d %d", &n,&a,&b);
    printf(a <b ? "Bus" : a > b ? "Subway" : "Anything");
    return 0;
}