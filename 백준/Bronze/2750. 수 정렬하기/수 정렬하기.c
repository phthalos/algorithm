#include <stdio.h>

int main(){
    int i, j, temp, n, arr[1000];
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++){
        for(j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }
}