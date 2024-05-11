#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int i, j, k, n;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        for(j=i; j<n-1; j++) printf(" ");
        printf("*");
        for(k=0; k<i*2-1; k++){
            if(k%2 != 0) printf("*");
            else printf(" ");
        };
        if(i == 0){printf("\n");}
        else printf("*\n");
    }
}