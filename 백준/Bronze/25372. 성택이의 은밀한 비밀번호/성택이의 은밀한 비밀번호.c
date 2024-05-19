#include <stdio.h>
#include <string.h>

int main(void)
{
    int n, i;
    char password[21];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", password);
        if (strlen(password) >= 6 && strlen(password) <= 9)
            puts("yes");
        else
            puts("no");
    }
    return 0;
}