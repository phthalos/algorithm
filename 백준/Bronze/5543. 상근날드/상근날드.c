#include <stdio.h>

int main(void)
{
    int i, burger = 2000, drink = 2000, charge;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &charge);
        if (i < 3 && burger > charge)
            burger = charge;
        if (i >= 3 && drink > charge)
            drink = charge;
    }
    printf("%d", burger + drink - 50);
    return 0;
}