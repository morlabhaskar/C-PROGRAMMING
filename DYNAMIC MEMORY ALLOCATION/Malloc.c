#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr,n;
    printf("Enter n Value :\n");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    printf("Enter Array :\n");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Array is :\n");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
}