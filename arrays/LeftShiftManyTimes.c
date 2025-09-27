#include<stdio.h>
void left_shift(int arr[],int n){
    int i;
    for(i=0;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    arr[i]=0;
}
int main(){
    int arr[5],n=5,shift;
    printf("Enter %d Array Elements :\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("How Many Times You want Left Shift :\n");
    scanf("%d",&shift);
    printf("Array Elements are :\n");
    for(int i=0;i<n;i++){
        printf("%d,",arr[i]);
    }
    for(int i=0;i<shift;i++){
        left_shift(arr,n);
    }
    printf("\nAfter %d Left Shifts, Elements in Array :\n",shift);
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}