#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int i, j, k, n;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        if(i%2 == 0){
            for(j=0; j<2*n-1; j++){
                if(j%2 == 0) printf("*");
                else printf(" ");
            }
            printf("\n");
        }else{
            for(j=0; j<2*n; j++){
                if(j%2 == 0) printf(" ");
                else printf("*");
            }
            printf("\n");
        }
    }
}