#include<stdio.h>
int main(){
    int arr[5],n=5,x,flag=1;
    printf("Enter %d Array Elements :\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter Searching Element in Array :\n");
    scanf("%d",&x);

    printf("Array Elements are :\n");
    for(int i=0;i<n;i++){
        printf("%d,",arr[i]);
    }

    printf("\nSearching Element is :\n");
    for(int i=0;i<n;i++){
        if(arr[i] == x){
            printf("Searching Element Found in Array at Index of %d\n",i);
            flag=0;
        }
    }
    if(flag){
        printf("Searching Element is Not Found in Array\n");
    }
}