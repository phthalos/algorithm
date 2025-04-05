#include <stdio.h>
int main()
{
    while (1)
    {
        int M, F;
        scanf("%d", &M);
        scanf("%d", &F);
        if (M == 0 && F == 0) return 0;
        printf("%d\n", M + F);
    }
    return 0;
}