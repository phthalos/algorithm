#include <stdio.h>
int N, Pi, X, Ci;
int main()
{
    scanf("%d", &N); // 유명인의 수
    for (int i = 0; i < N; i++)
    {
        int C;
        scanf("%d", &Pi); // i번 유명인의 인기도
        scanf("%d", &Ci); // i번 유명인의 친화력
        if (Pi - X < 0)
            C = X - Pi;
        else if (Pi - X >= 0)
            C = Pi - X;
        if (C <= Ci)
            X++;
        else
            continue;
    }
    printf("%d", X);
    return 0;
}