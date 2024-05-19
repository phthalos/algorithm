#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    printf(n*2 >= m ? "E" : "H");
    return 0;
}