#include<stdio.h>

int linear(int arr[],int size,int tar);

int main(){
    int arr[] = {2,3,5,7,3,8,9,1,0,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int tar = 9;

    int val = linear(arr,size,tar);
    
    printf("Index of the given Target of %d is %d",tar,val);
}

int linear(int arr[], int size, int tar){
    for(int i=0;i<size;i++){
        if(arr[i] == tar){
            return i;
        }
    }
}