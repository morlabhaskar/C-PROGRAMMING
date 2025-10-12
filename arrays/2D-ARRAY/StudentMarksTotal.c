#include<stdio.h>
#include<stdlib.h>
int main(){
    srand(getpid());
    int arr[5][5],row=sizeof(arr)/sizeof(arr[0]),col=sizeof(arr[0])/sizeof(arr[0][0]);
    for(int i=0;i<row;i++){
        int sum=0,j;
        for(j=0;j<(col-1);j++){
            arr[i][j]=rand()%90;
            sum+=arr[i][j];
        }
        arr[i][j]=sum;
    }
    printf("Student Marks :\n");
    printf("-----+-------+-------+--------+--------\n");
    printf("Tel     Eng     Hin     Math    Total\n");
    printf("-----+-------+-------+--------+--------\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}