#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int i, j, arr[9][9]={0}, max=0, row=1, col=1;
    for(i=0; i<9; i++)
    {
        for(j=0; j<9; j++)
        {
            scanf("%d ",&arr[i][j]);
            if(max < arr[i][j])
            {
                max = arr[i][j];
                row = i+1;
                col = j+1;
            }
        }
    }
    printf("%d\n%d %d",max,row,col);
    
    return 0;
}