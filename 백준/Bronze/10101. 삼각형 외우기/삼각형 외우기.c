#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("%s",a==60&&b==60&&c==60?"Equilateral":a+b+c==180&&(a==b||b==c||c==a)?"Isosceles":a+b+c==180&&(a!=b&&b!=c&&c!=a)?"Scalene":"Error");    
    return 0;
}