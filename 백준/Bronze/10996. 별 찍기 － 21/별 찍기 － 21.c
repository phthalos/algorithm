#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void star(int j){
    if(j%2 == 0) printf("*");
    else printf(" ");
}
void space(int j){
    if(j%2 == 0) printf(" ");
    else printf("*");
}

int main(void){
    int i, j, n;
    scanf("%d", &n);
    if(n%2 == 0){
        for(i=0; i<n; i++){
            for(j=0; j<n-1; j++) star(j);
            printf("\n");
            for(j=0; j<n; j++) space(j);
            printf("\n");
        }
    }else{
        for(i=0; i<n; i++){
            for(j=0; j<n; j++) star(j);
            printf("\n");
            for(j=0; j<n-1; j++) space(j);
            printf("\n");
        }
    }
}