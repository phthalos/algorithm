#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++) printf(" ");
        for(int k=0; 2*(n-i)-k-1 > 0;  k++) printf("*");
        printf("\n");
    }
    
    return 0;
}