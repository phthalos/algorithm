#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int i, j, n;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        for(j=0; j<=i; j++) printf("*");
        printf("\n");
    }
    for(i=1; i<n; i++){
        for(j=i; j<n; j++) printf("*");
        printf("\n");
    }
}