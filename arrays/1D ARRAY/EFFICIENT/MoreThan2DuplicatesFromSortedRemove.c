#include<stdio.h>
int morethan_2duplicated_remove_from_sorted_array(int *arr, int n){
    if(n<=2) return n;
    int j=2;
    for(int i=2;i<n;i++){
        if(arr[i]!=arr[j-2]){
            arr[j++]=arr[i];
        }
    }
    return j;
}
int main(){
    int n,arr[20];
    printf("Enter the Array Size :\n");
    scanf("%d",&n);
    printf("Enter the Array Elements :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array Before Remove Duplicates :\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    n=morethan_2duplicated_remove_from_sorted_array(arr,n);
    printf("\nArray After Remove Duplicates :\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
/*
Array Before Remove Duplicates :
1 2 3 3 3 3 4 4 4 5
Array After Remove Duplicates :
1 2 3 3 4 4 5
*/

