#include <stdio.h>
#include <stdlib.h>

#define COL 5
#define ROW 16

int main(void)
{
    char str[COL][ROW] = {'*'};
    for (int i = 0; i < COL; i++)
    {
        scanf("%s", str[i]);
    }
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (str[j][i] != 0)
                printf("%c", str[j][i]);
            else
                continue;
        }
    }
    return 0;
}