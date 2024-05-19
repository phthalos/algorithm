#include <stdio.h>

int main(void)
{
    char temp[101];
    int result[26] = {0};
    int i = 0;
    scanf("%s", temp);
    while (temp[i] != 0)
    {
        result[temp[i] - 97]++;
        i++;
    }
    for (i = 0; i < 26; i++)
        printf("%d ", result[i]);

    return 0;
}