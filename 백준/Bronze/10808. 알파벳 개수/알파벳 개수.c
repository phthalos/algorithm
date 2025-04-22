#include <stdio.h>
char S['z' - 'a'];
int main(void)
{
    char c;
    while (scanf("%c", &c) != EOF)
        S[c - 'a']++;
    for (int i = 0; i <= 'z' - 'a'; i++)
        printf("%d ", S[i]);

    return 0;
}