#include<stdio.h>
void reverse_array(int arr[],int n){
    int *left = arr,*right=arr+n-1;
    while(left<right){
        if((*left)!=(*right)){
            int temp = *left;
            *left = *right;
            *right = temp;
        }
        left++;
        right--;
    }
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
    printf("\nReverse Elements in Array :\n");
    reverse_array(arr,n);
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}


// #include<stdio.h>
// int main(){
//     int arr[5],n=5,left=0,right=n-1,temp;
//     printf("Enter %d Array Elements :\n",n);
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("Array Elements are :\n");
//     for(int i=0;i<n;i++){
//         printf("%d,",arr[i]);
//     }
//     printf("\nReverse Elements in Array :\n");
//     while(left<right){
//         temp = arr[left];
//         arr[left] = arr[right];
//         arr[right] = temp;
//         left++;
//         right--;
//     }
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
// }