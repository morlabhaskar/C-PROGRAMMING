#include<stdio.h>
int remove_duplicates_from_unsorted(int *arr, int n){
    if (n == 0) return 0;
    int visited[100]={0};
    int j=0;
    for(int i=0;i<n;i++){
        if(visited[arr[i]]==0){
            visited[arr[i]]=1;
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
    n=remove_duplicates_from_unsorted(arr,n);
    printf("\nArray After Remove Duplicates :\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}