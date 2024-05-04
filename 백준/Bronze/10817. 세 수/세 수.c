#include <stdio.h>
#define SIZE 3

int main(){
    int i, j, temp, arr[SIZE] = {0};
    for(i=0; i<SIZE; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<SIZE; i++){
        for(j=0; j<SIZE-1; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("%d",arr[1]);
}