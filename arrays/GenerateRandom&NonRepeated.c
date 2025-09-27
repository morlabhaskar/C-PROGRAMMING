//wap to input 5 elements randomly in the array ,where repeatations are not allowed.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int check_repeated(int *ptr,int i){
    for(int j=0;j<i;j++){
        if(ptr[i]==ptr[j]){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        arr[i] = rand()%20;
        if(check_repeated(arr,i)){
            i--;
        }
    }
    printf("Array is :\n");
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
}