//Remove Element at Perticular Position in an Array.
#include<stdio.h>
void remove_element_at_position(int *arr,int n,int pos){
    int i;
    for(i=0;i<n-1;i++){
        if(i>=pos-1){
            arr[i] = arr[i+1];
        }
    }
    arr[i]=0;
}
int main(){
    int arr[5],n=5,pos;
    printf("Enter %d Array Elements :\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter Position to Remove Element :\n");
    scanf("%d",&pos);
    remove_element_at_position(arr,n,pos);
    printf("\nAfter Removing Element at %d Position in Array :\n",pos);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}