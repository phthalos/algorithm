#include <stdio.h>
#include <string.h>

int main(void)
{
    int n, i, j;
    char s[30];
    char data[7][50] = {"Algorithm", "DataAnalysis", "ArtificialIntelligence", "CyberSecurity", "Network", "Startup", "TestStrategy"};
    char room[7][5] = {"204", "207", "302", "B101", "303", "501", "105"};
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", s);
        for (j = 0; j < 7; j++)
        {
            if (strcmp(s, data[j]) == 0)
                printf("%s\n", room[j]);
        }
    }
}