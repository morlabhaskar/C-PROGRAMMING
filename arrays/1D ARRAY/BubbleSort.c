#include<stdio.h>

void bubble_sort(int *arr,int len){
    int temp;
    for(int i=len-1;i>=1;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int arr[5],n;
    printf("Enter N number of Elements :\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Before Sorting Elements are :\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    bubble_sort(arr,n);
    printf("\nAfter Sorting Elements are :\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}