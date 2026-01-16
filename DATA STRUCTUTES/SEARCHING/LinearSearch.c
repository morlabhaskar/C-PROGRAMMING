#include<stdio.h>
int linear(int arr[], int size, int tar){
    for(int i=0;i<size;i++){
        if(arr[i] == tar){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {2,3,5,7,3,8,9,1,0,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int tar = 9;
    int val = linear(arr,size,tar);
    if (val != -1) {
        printf("Value %d found at index %d\n", tar, val);
    } else {
        printf("Target not found in array.\n");
    }
}

