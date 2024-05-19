#include <stdio.h>

int main(void)
{
    int medal, kids;
    scanf("%d %d", &medal, &kids);
    printf(medal % kids == 0 ? "Yes" : "No");
}