#include<stdio.h>
void left_shift(int *arr,int n){
    int i;
    for(i=0;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    arr[i]=0;
}
int main(){
    int arr[5],n=5;
    printf("Enter %d Array Elements :\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array Elements are :\n");
    for(int i=0;i<n;i++){
        printf("%d,",arr[i]);
    }
    left_shift(arr,n);
    printf("\nAfter Left Shift Elements in Array :\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}