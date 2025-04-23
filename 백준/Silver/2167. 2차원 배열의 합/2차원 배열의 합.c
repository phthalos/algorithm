#include <stdio.h>
#include <stdlib.h>
int N, M, K, i, j, x, y;
int main()
{
    // 조건 입력
    scanf("%d %d", &N, &M);
    int arr[N + 1][M + 1];
    for (int a = 1; a <= N; a++)
    {
        for (int b = 1; b <= M; b++)
        {
            scanf("%d", &arr[a][b]);
        }
    }
    scanf("%d", &K);
    for (int a = 0; a < K; a++)
    {
        int sum = 0;
        scanf("%d %d %d %d", &i, &j, &x, &y);
        // 입력 완료
        // 배열의 합 계산
        for (int b = i; b <= x; b++)
        {
            for (int c = j; c <= y; c++)
            {
                sum += arr[b][c];
            }
        }
        // 결과 출력
        printf("%d\n", sum);
    }
    return 0;
}