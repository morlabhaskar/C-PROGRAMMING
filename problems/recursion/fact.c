#include<stdio.h>
int fact(int);

int main(){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    // printf("Factorial of %d is %d",num,fact(num));
    fact(num);
    printf("Bye From Main\n");
}
int fact(int n){
    if(n){
        fact(n-1);
    }
    printf("Bye From Fact %d\n",n);
}
