#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fact(int n)
{
    if(n > 1)
        return n * fact(n-1);
    else return 1;
}

int main(void){
    int n;
    scanf("%d",&n);
    printf("%d",fact(n));
    return 0;
}