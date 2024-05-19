#include <stdio.h>

int main(void)
{
    char str[6][4][15] =
        {
            {"SHIP NAME", "CLASS", "DEPLOYMENT", "IN SERVICE"},
            {"N2 Bomber", "Heavy Fighter", "Limited", "21"},
            {"J-Type 327", "Light Combat", "Unlimited", "1"},
            {"NX Cruiser", "Medium Fighter", "Limited", "18"},
            {"N1 Starfighter", "Medium Fighter", "Unlimited", "25"},
            {"Royal Cruiser", "Light Combat", "Limited", "4"}};
    for (int i = 0; i < 6; i++)
        printf("%-15s%-15s%-11s%-10s\n", str[i][0], str[i][1], str[i][2], str[i][3]);
    return 0;
}