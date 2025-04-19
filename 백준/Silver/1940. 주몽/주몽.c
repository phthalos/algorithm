#include <stdio.h>
#include <stdlib.h>
int N, M, arr[15000], count = 0;
int *left = arr, *right;

int compare(const int *a, const int *b);
int main()
{
    scanf("%d", &N);            // 배열의 길이
    scanf("%d", &M);            // 합
    for (int i = 0; i < N; i++) // 배열 입력
    {
        scanf("%d", &arr[i]);
    }
    qsort(arr, N, sizeof(arr[0]), compare); // 배열 오름차순 정렬
    right = &arr[N - 1];                    // 배열의 끝을 가리키는 포인터
    while (left < right)                    // 포인터 비교
    {
        if ((*left) + (*right) < M)
            left++;
        else if ((*left) + (*right) > M)
            right--;
        else
        { // (*left)+(*right) == M
            count++;
            left++; // 비교 후 한쪽 포인터를 옮김으로, 다음 비교 시작
        }
    }
    printf("%d", count);

    return 0;
}
int compare(const int *a, const int *b)
{
    return (*a - *b);
}