//
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void input_array(int arr[]){
    srand(time(0));
    for(int i=0;i<10;i++){
        arr[i] = rand()%100;
    }
}
int is_prime(int num){
    int count = 0;
    for(int i=1;i<=num;i++){
        if(num%i == 0){
            count++;
        }
    }
    if(count==2){
        return 1;
    }
    return 0;
}
int odd_digits_sum(int num){
    int temp = num,sum=0;
    while(temp){
        int last = temp%10;
        if(last%2 == 1){
            sum += last;
        }
        temp /= 10;
    }
    if(is_prime(sum)){
        return 1;
    }
    return 0;
    
}
int main(){
    int arr[10];
    printf("Enter 10 Array Elements :\n");
    input_array(arr);
    // for(int i=0;i<10;i++){
    //     scanf("%d",&arr[i]);  //12 25 65 83 92 75 43 90 91 32
    // }
    // printf("\n");
    for(int j=0;j<10;j++){
            printf("%d ",arr[j]);
    }
    printf("\n");
    for(int j=0;j<10;j++){
        if(odd_digits_sum(arr[j])){
            printf("%d ",arr[j]);
        }
    }
}