#include<stdio.h>
#include<stdlib.h>
int main(){
    srand(getpid());
    int stu1[3][3],stu2[3][3],res[3][3];
    int row=sizeof(stu1)/sizeof(stu1[0]),col=sizeof(stu1[0])/sizeof(stu1[0][0]);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            stu1[i][j]=rand()%9;
            stu2[i][j]=rand()%9;
            res[i][j]=stu1[i][j]+stu2[i][j];
        }
    }
    printf("Array-1 is :\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",stu1[i][j]);
        }
        printf("\n");
    }
    printf("Array-2 is :\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",stu2[i][j]);
        }
        printf("\n");
    }
    printf("Result Array is :\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
}