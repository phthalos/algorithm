#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int x[46];

int fibo(int n)
{
    x[0]=0;
    x[1]=1;
    for(int i=2; i<=n; i++)
        x[i] = x[i-1]+x[i-2];
    return x[n];
}

int main(void){
    int n;
    scanf("%d",&n);
    printf("%d",fibo(n));
    
    return 0;
}