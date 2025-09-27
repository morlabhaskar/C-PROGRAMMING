//WAP to take 10 elements using rand() function and if element has found digit 3 and that element has prime.
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
int is_number_found(int num){
    int temp=num,flag=0;
    while(temp){
        int last = temp%10;
        if(last==3){
            flag=1;
            break;
        }
        temp /= 10;
    }
    return flag;
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
        if(checkPrime(arr[i]) && is_number_found(arr[i]))
            printf("%d\t",arr[i]);
}
