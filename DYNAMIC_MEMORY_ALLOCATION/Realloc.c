#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr=NULL;
    arr=realloc(NULL,5*sizeof(int));//this realloc is behaves as malloc
    arr=(int*)realloc(arr,40);//extended
    printf("Enter Array :\n");
    for(int i=0;i<10;i++) 
        scanf("%d",&arr[i]);
    printf("Array is :\n");
    for(int i=0;i<10;i++) 
        printf("%d ",arr[i]);
    free(arr);
}