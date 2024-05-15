#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int n, cnt=0, a, b,c,d=-1;
    scanf("%d",&n);
    int result = n;
    while(d != result)
    {
        a = n / 10;
        b = n % 10;
        c = (a+b) % 10;
        d = (10 * b) + c;
        n = d;
        cnt++;
    }
    printf("%d",cnt);
    return 0;
}