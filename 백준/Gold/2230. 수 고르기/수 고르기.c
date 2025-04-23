#include <stdio.h>
#include <stdlib.h>
int N, M, *A, *left, *right, answer = 2000000000, end;
int compare(int *a, int *b)
{
    return (*a - *b);
}
int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
int main()
{
    // 배열 할당
    scanf("%d %d", &N, &M);
    A = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    // 배열 정렬
    qsort(A, N, sizeof(A[0]), compare);
    // 탐색
    for (left = &A[0]; left < &A[N - 1]; left++)
    {
        right = left;
        while (right < &A[N] && *right - *left < M)
            right++;
        if (right == &A[N])
            break;
        if (answer > *right - *left)
            answer = *right - *left;
    }
    printf("%d", answer);
    return 0;
}