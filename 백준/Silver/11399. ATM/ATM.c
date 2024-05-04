#include <stdio.h>

int main(){
    int i, j, N, temp, arr[1000]={0}, res=0;
    scanf("%d", &N);
    for(i=0; i<N; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0; i<N-1; i++){
        for(j=0; j<N-1; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0; i<N; i++){
        for(j=0; j<=i; j++){
            res+=arr[j];
        }
    }
    printf("%d",res);
}