#include <stdio.h>
#include <stdlib.h>
int N, *arr, ans = 1;
int compare(int *a, int *b)
{
    return (*a - *b);
}
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main(void)
{
    // 배열 입력받고 오름차순 정렬
    scanf("%d", &N);
    arr = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    qsort(arr, N, sizeof(arr[0]), compare);

    for (int i = 0; i < N; i++)
    {
        int k = 1; // 연속되는 수의 개수
        // 현재 원소 포함 다음 원소 5개가 연속되는지 알아본다.
        for (int j = i + 1; j < i + 5; j++)
        {
            if (arr[j] - arr[i] < 5 && arr[j] - arr[i] > 0)
                k++;
        }
        // 연속되는 수가 최대한 많아야 필요한 추가 원소 수가 줄어든다.
        ans = max(ans, k);
    }
    // 연속되는 수가 5개 이상이면 추가 원소는 필요하지 않다.
    if (ans >= 5)
        printf("%d", 0);
    // (5 - 연속되는 수)만큼 추가 원소가 필요하다.
    else
        printf("%d", 5 - ans);
    free(arr);
    return 0;
}