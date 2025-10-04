#include<stdio.h>
#include<stdlib.h>
int main(){
    int num,*arr;
    printf("Enter How Many Elements you Want :\n");
    scanf("%d",&num);
    arr=(int*)malloc(num*sizeof(int));
    for(int i=0;i<num;i++){
        scanf("%d",arr+i);
    }
    printf("Array is :\n");
    for(int i=0;i<num;i++){
        printf("%d ",*(arr+i));
    }
}