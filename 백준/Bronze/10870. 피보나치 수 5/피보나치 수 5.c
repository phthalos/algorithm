#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int fibo(int n){
    if(n >= 2)
        return fibo(n-1) + fibo(n-2);
    else if(n == 1)
        return 1;
    else
        return 0;
}

int main(void){
    int n;
    scanf("%d", &n);
    printf("%d",fibo(n));
    return 0;
}