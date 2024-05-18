#include <stdio.h>

int main()
{
    int month, date, i;
    int totalDay[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *day[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    scanf("%d %d", &month, &date);
    for (i = 1; i < month; i++)
        date += totalDay[i - 1];
    printf("%s", day[date % 7]);
    return 0;
}