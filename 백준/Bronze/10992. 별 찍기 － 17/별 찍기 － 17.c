#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int i, j, n;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        for(j=i; j<n-1; j++){
            printf(" ");
        }
        if(i==0){
            printf("*\n");
        }else if(i == n-1){
            for(j=0; j<2*n-1; j++) printf("*");
        }else{
            printf("*");
            for(j=0; j<2*i-1; j++) printf(" ");
            printf("*\n");
        }
    }
}