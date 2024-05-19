#include <stdio.h>

int main(void) {
    int n, i, sum=0;
    for (i = 0; i < 6; i++) {
        scanf("%d", &n);
        sum += n;
    }
    printf("%d", sum*5);
    return 0;
}