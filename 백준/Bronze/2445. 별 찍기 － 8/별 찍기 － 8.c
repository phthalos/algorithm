#include <stdio.h>
#include <stdlib.h>
int main(){
    int N;
    scanf("%d", &N);
    for (int i = -N +1; i < N; i++){
        for (int j = -N; j < N +1; j += (j==-1 ? 2:1))
            putchar(abs(j) > abs(i) ? '*' : 32);
        putchar(10);
    } 
}