#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int c = 0, n = 0, i, j;
    scanf("%d", &c);
    for (i = 0; i < c; i++)
    {
        scanf("%d", &n);
        int *score = (int *)malloc(sizeof(int) * n);
        int sum = 0;
        double average = 0.000;
        for (j = 0; j < n; j++)
        {
            scanf("%d", &score[j]);
            sum += score[j];
        }
        average = (double)sum / n; // 평균을 구했다. 이제 평균을 넘는 학생들의 비율을 구해야 한다.
        int count = 0;
        double result = 0.000;
        for (j = 0; j < n; j++)
        {
            if (score[j] > average)
                count++;
        }
        result = (double)count * 100 / n;
        printf("%.3f%%", result);
        free(score);
        printf("\n");
    }
    return 0;
}