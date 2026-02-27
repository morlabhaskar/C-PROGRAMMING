#include<stdio.h>
#include<unistd.h>
void bubbleSort(int *arr,int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void display(int *arr,int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[] = {2,4,5,7,1,3,9,6,8,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Before Sorted Array is : \n");
    display(arr,size);
    printf("\n");
    bubbleSort(arr,size);
    printf("Sorted Array is : \n");
    display(arr,size);
}











