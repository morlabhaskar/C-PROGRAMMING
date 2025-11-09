#include<stdio.h>

int main(){
    int arr[5] = {1,2,3,4,5},i,t;

    int len = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n",len);

    for(i = 0; i < len/2; i++) {
        t = arr[i]; 
        arr[i] = arr[len-1-i];
        arr[len-1-i] = t;
    }
    printf("After Reverse :\n");
    for(i=0;i<len;i++){
        printf("%d\t",arr[i]);
    }



    // int arr[5] = {};
    // int i;

    // int len = sizeof(arr) / sizeof(arr[0]);
    // printf("%d\n",len);

    // for(i = 0; i < 5; i++) {
    //     scanf("%d",&arr[i]);
    // }
    // for(i = 0; i < 5;  i++){
    //     printf("%d\t",arr[i]);
    // }
}