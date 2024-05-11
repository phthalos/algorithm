#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int x,y;
    scanf("%d %d", &x, &y);
    printf("%d\n", x*((y%100)%10) );
    printf("%d\n", x*((y%100)/10) );
    printf("%d\n", x*(y/100) );
    printf("%d", x*y );
    return 0;
}