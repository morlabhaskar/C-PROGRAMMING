#include<stdio.h>
#include<stdlib.h>
int main(){
    srand(getpid());
    int arr[3][5],row=sizeof(arr)/sizeof(arr[0]),col=sizeof(arr[0])/sizeof(arr[0][0]);
    printf("Enter Array :\n");
    for(int i=0;i<col;i++){
        int sum=0,j;
        for(j=0;j<(row-1);j++){
            arr[i][j]=rand()%90;
            sum+=arr[i][j];
        }
        arr[i][j]=sum;
    }
    printf("Arrray is :\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}