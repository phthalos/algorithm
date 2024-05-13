#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    while(1){
        int a, b, c;
        scanf("%d %d %d",&a,&b,&c);
        if(a == 0)
            break;
        else if(a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b)
            printf("right\n");
        else
            printf("wrong\n");
    }
    return 0;
}