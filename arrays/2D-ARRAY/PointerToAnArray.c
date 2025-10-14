#include<stdio.h>
#include<stdlib.h>
void intput_arr(int (*arr)[5],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr[i][j]=rand()%50;
        }
    }
}
void print_arr(int (*arr)[10],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
int main(){
    srand(getpid());
    int arr[3][10];
    int row=sizeof(arr)/sizeof(arr[0]),col=sizeof(arr[0])/sizeof(arr[0][0]);
    intput_arr(arr,row,col);
    print_arr(arr,row,col);
    
}