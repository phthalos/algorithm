#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int binary_search(int list[], int n, int key){
    int start, mid, end;
    start = 0;
    end = n-1;

    while(start <= end){
        mid = (start + end) / 2;
        if(list[mid] == key)
            return 0;
        else if (list[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return 1;
}

int static cmp(const void* first, const void* second){
    int* a = (int*)first;
    int* b = (int*)second;
    if (*a > *b)
        return 1;
    else if (*a < *b)
        return -1;
    else
        return 0;
}

int main(void){
    int n, m, i, data;
    int* list;

    scanf("%d", &n);
    list = (int*)malloc(n * sizeof(int));
    for(i = 0; i < n; i++){
        scanf("%d ", &list[i]);
    }

    qsort(list, n, sizeof(int), cmp);

    scanf("%d ", &m);
    for(i = 0; i < m; i++){
        scanf("%d ", &data);
        if(binary_search(list, n, data) == 0)
            printf("1\n");
        else
            printf("0\n");
    }


    return 0;
}