#include <stdio.h>
#include <stdlib.h>
int N, num;
int compare(int *a, int *b)
{
    return (*a - *b);
}
int main()
{
    scanf("%d", &N);
    int arr[N + 1];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    qsort(arr, N, sizeof(int), compare);
    arr[N] = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            continue;
        }
        else
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}