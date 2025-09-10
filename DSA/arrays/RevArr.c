#include<stdio.h>
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
    printf("\nReverse Elements in Array :\n");
    for(int i=n-1;i>=0;i--){
        printf("%d\t",arr[i]);
    }
}