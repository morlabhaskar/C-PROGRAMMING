#include<stdio.h>
#include<stdlib.h>
void input(int **arr,int row,int col){
    printf("Enter Array Elements :\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
}
void print(int **arr,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int **arr=NULL,row,col;
    printf("Enter Row Size :\n");
    scanf("%d",&row);
    printf("Enter Col Size :\n");
    scanf("%d",&col);

    arr=malloc(row*sizeof(int *));
    if(arr==NULL){
        printf("Memory Allocation failed\n");
        return 0;
    }
    for(int i=0;i<row;i++){
        arr[i]=malloc(col*sizeof(int));
        if(arr[i]==NULL){
            printf("Memory Allocation is Failed\n");
            return 0;
        }
    }
    input(arr,row,col);
    print(arr,row,col);
    for(int i=0;i<row;i++){
        free(arr[i]);
    }
    free(arr);
    return 0;
}