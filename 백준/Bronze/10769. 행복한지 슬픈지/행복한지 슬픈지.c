char c;
int happy, sad, cnt;
#include <stdio.h>
int main()
{
    for (int i = 0; i < 256; i++)
    {
        scanf("%c", &c);
        if (c == ':')
            cnt++;
        else if (cnt == 1 && c == '-')
            cnt++;
        else if (cnt == 2 && c == ')')
        {
            happy++;
            cnt = 0;
        }
        else if (cnt == 2 && c == '(')
        {
            sad++;
            cnt = 0;
        }
        else
            cnt = 0;
    }
    if (happy == 0 && sad == 0)
        printf("none");
    else if (happy == sad)
        printf("unsure");
    else if (happy > sad)
        printf("happy");
    else if (happy < sad)
        printf("sad");
    else
        printf("error");
    return 0;
}