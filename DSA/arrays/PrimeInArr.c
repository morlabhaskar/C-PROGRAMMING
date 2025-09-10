#include<stdio.h>
int checkPrime(int);
int main(){
    int arr[5],n=5,cnt=0;
    printf("Enter %d Array Elements :\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array Elements are :\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("Prime Elements in Array :\n");
    for(int i=0;i<n;i++){
        if(checkPrime(arr[i])){
            printf("%d\t",i);
            cnt++;
        }
    }
    printf("\nArray Prime Count is : %d\n",cnt);
}
int checkPrime(int a){
    int x = 0;
    for(int i=1;i<=a;i++){
        if(a%i == 0){
            x++;
        }
    }
    if(x == 2){
        return 1;
    }
    else{
        return 0;
    }
}