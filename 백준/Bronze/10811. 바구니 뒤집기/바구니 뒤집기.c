#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, i, j, temp, a, b; // n: 바구니 총 개수, m: 순서바꾸기를 시행할 횟수
    scanf("%d %d", &n, &m);
    int *basket = (int *)malloc(sizeof(int) * n); // 바구니 배열. 입력된 총 개수에 따라 동적할당됨.
    for (i = 0; i < n; i++)                       // 바구니 배열의 요소는 모두 0으로 초기화되어 있다.
        basket[i] = i + 1;                        // 각각의 바구니에 번호를 붙여주자.
    for (i = 0; i < m; i++)
    {
        scanf("%d %d", &a, &b);
        for (j = a - 1; j < b; j++)
        {
            temp = basket[j];          // 지정된 범위 내에서, 양 끝의 바구니를 교체하는데
            basket[j] = basket[b - 1]; // 인덱스는 0부터 b-1까지고, 바구니 번호는 1부터 b까지임에 주의한다.
            basket[b - 1] = temp;
            b--; // 범위를 1씩 줄여나가며 교체를 반복한다.
        }
    }
    for (int i = 0; i < n; i++)
        printf("%d ", basket[i]);

    return 0;
}