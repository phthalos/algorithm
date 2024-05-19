#include <stdio.h>

int main(void)
{
    int t1, e1, f1, t2, e2, f2, max=0, mel=0;
    scanf("%d %d %d", &t1, &e1, &f1);
    scanf("%d %d %d", &t2, &e2, &f2);
    max = t1*3 + e1*20 + f1*120;
    mel = t2*3 + e2*20 + f2*120;
    printf(max > mel ? "Max" : max < mel ? "Mel" : "Draw");
}