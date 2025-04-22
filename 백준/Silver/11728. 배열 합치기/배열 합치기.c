#include <stdio.h>
#include <stdlib.h>
int N, M;
int compare(int *a, int *b)
{
    return (*a - *b);
}
int main(void)
{
    scanf("%d %d", &N, &M);
    int arr[N + M];
    for (int i = 0; i < N + M; i++)
        scanf("%d", &arr[i]);

    qsort(arr, N + M, sizeof(arr[0]), compare);
    for (int i = 0; i < N + M; i++)
        printf("%d ", arr[i]);

    return 0;
}