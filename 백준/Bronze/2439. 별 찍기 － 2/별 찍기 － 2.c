#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        for (int j = i; j < n-1; j++) printf(" ");
        for (int k = 0; k <= i; k++) printf("*");
        printf("\n");
    }
    return 0;
}