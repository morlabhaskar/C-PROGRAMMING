//wap to input 10 numbers randomly to the array ,where repeatations are not are not allowed and print all the elements 
//which is a palindrome.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int check_repeated(int *arr,int i){
    for(int j=0;j<i;j++){
        if(arr[i] == arr[j]){
            return 1;
        }
    }
    return 0;
}
int check_palindrome(int num){
    int temp=num,palindrome=0;
    while(temp){
        int last = temp%10;
        palindrome = (palindrome*10)+last;
        temp /= 10;
    }
    if(palindrome == num){
        return 1;
    }
    return 0;
}

int main(){
    int arr[10],n=10;
    srand(time(0));
    for(int i=0;i<n;i++){
        arr[i] = rand()%(1000-100+1)+100;
        if(check_repeated(arr,i)){
            i--;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        if(check_palindrome(arr[i])){
            printf("%d ",arr[i]);
        }
        // printf("%d ",check_palindrome(arr[i]));
    }
}