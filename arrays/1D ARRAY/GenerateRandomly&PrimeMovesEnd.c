//wap to input 10 elements randomly to the array and rearrange all the prime elements towards one end.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int check_repeated(int arr[],int i){
    for(int j=0;j<i;j++){
        if(arr[i] == arr[j]){
            return 1;
        }
    }
    return 0;
}
int is_prime(int num){
    int count = 0;
    for(int i=1;i<=num;i++){
        if(num%i == 0){
            count++;
        }
    }
    if(count == 2){
        return 1;
    }
    return 0;
}

int main(){
    int arr[10],n=10,index=n-1;
    srand(time(0));
    for(int i=0;i<n;i++){
        arr[i] = rand()%(100-0+1)+0;
        if(check_repeated(arr,i)){
            i--;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nPrime Numbers are :");
    for(int i=0;i<n;i++){
        if(is_prime(arr[i])){
            printf("%d ",arr[i]);
        }
    }
    for(int i=0;i<index;i++){
        if(is_prime(arr[i])){
            int temp;
            temp = arr[i];
            memmove(arr+i,arr+i+1,(index-i)*sizeof(int));
            arr[index--] = temp;
            i--;
        }
    }
    printf("\nAfter Modification elements in array.\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}