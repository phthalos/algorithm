#include <stdio.h>

int A[10001], count;
int main(void)
{
    int N, K;
    scanf("%d %d", &N, &K);

    // input
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i + 1]);
    }

    // bubble sort
    for (int i = N; i >= 2; i--)
    {
        for (int j = 1; j < i; j++)
        {
            if (A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                count++;
            }
            // 이번 교환이 K번째 교환이라면
            if (count == K)
            {
                // 두 개의 수를 출력 후 종료(이미 작은 수부터 정렬되어 있다.)
                printf("%d %d", A[j], A[j + 1]);
                return 0;
            }
        }
    }
    // 정렬이 끝났다면
    printf("-1");
    return 0;
}
