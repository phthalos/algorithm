#include <stdio.h>

int main(void)
{
    int sleep, wake;
    scanf("%d", &sleep);
    scanf("%d", &wake);
    printf("%d", sleep > wake ? 24 - sleep + wake : wake - sleep);
}