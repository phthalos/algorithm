#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, i, j;
    scanf("%d",&n);
    for(i=-n+1; i<n; i++){
        for(j=0; j<n+abs(i); j++)
            putchar(j+1<n-abs(i)?32:'*');
        putchar(10);
    }
}