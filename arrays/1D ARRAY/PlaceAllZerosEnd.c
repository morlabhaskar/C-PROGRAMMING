//Place all zeros at end of the given array.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void place_all_zeros_end(int *arr,int n){
    int index=n-1;
    for(int i=0;i<index;i++){
        if(arr[i]==0){
            memmove(arr+i,arr+i+1,(index-i)*sizeof(int));
            arr[index--]=0;
            i--;
        }
    }
}
int main(){
    int n;
    printf("Enter Array Size :\n");
    scanf("%d",&n);
    if(n<=0){
        printf("invalid size");
        return 0;
    }
    if(n>100){
        printf("MemoryOverflow");
        return 0;
    }
    // int arr[n];
    int *arr=NULL;
    arr=(int*)malloc(n*sizeof(int));
    printf("Enter %d Array Elements :\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    place_all_zeros_end(arr,n);
    printf("Array is :\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    free(arr);
}