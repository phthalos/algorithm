#include <stdio.h>
int main(){
    int n, m;
    scanf("%d %d",&n,&m);
    if(m==1||m==2){
        printf("NEWBIE!");
    }else if (m<=n && m!=1 &&m!=2)
    {
        printf("OLDBIE!");
    }else{
        printf("TLE!");
    }
}