#include<stdio.h>

int avg(int[],int);

int main(){
    int arr[] = {1,2,3,4,5},size,avge;
    size = sizeof(arr)/sizeof(arr[0]);
    avge = avg(arr,size);
    printf("Average is : %d",avge);
}

int avg(int arr[],int size){
    int i,sum=0,total;
    for(i=0;i<size;i++){
        sum = sum + arr[i];
    }
    total = sum/size;
    return total;
}