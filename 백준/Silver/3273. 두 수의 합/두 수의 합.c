#include <stdio.h>
#include <stdlib.h>
int n, x, *left, *right, count;
int compare(int *a, int *b)
{
    return (*a - *b);
}
int main(void)
{
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &x);
    qsort(arr, n, sizeof(arr[0]), compare);
    left = arr;
    right = &arr[n - 1];
    while (left < right)
    {
        if (*left + *right < x)
            left++;
        else if (*left + *right > x)
            right--;
        else
        {
            count++;
            left++;
        }
    }
    printf("%d", count);
    return 0;
}