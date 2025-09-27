//wap to program to print all the prime elements in the array whose sum  of the digit is prime.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int checkPrime(int num){
    int cnt = 0;
    for(int i=1;i<=num;i++)
        if(num%i == 0)
            cnt++;
    if(cnt == 2)
        return 1;
    return 0;
}
int sum_of_digits(int num){
    int temp=num,sum=0;
    while(temp){
        int last = temp%10;
        sum += last;
        temp /= 10;
    }
    if(checkPrime(sum)){
        return 1;
    }
    return 0;
}
int main(){
    int arr[10],n=10;
    printf("Enter %d Array Elements :\n",n);
    srand(time(0));
    for(int i=0;i<n;i++)
        arr[i] = rand()%(100-10+1)+10;//rand()%(MAX-MIN+1)+MIN
    printf("Array Elements are :\n");
    for(int i=0;i<n;i++)
        printf("%d,",arr[i]);
    printf("\nPrime Elements in Array :\n");
    for(int i=0;i<n;i++)
        if(sum_of_digits(arr[i]))
            printf("%d\t",arr[i]);
}
