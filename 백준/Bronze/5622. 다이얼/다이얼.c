#include <stdio.h>
#include <string.h>

int main(void){
    char s[16];
    scanf("%s",s);
    int i=0,r=0,l=strlen(s);
    while(l>0){
        if(s[i]<80) r+=(s[i]-65)/3+3;
        else if(s[i]<84) r+=8;
        else if(s[i]<87) r+=9;
        else r+=10;
        i++;
        l--;
    }
    printf("%d",r);
}