#include <stdio.h>

int main(void)
{
    char c[10];
    scanf("%s", c);
    if (c[0] == 'S') puts("HIGHSCHOOL");
    else if(c[0] == 'C') puts("MASTER");
    else if(c[0] == '2') puts("0611");
    else if(c[0] == 'A') puts("CONTEST");
    return 0;
}