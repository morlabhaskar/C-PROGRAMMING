#include<stdio.h>
int main(){
    int num,pro=1;
    printf("Enter a Number :");
    scanf("%d",&num);
    while(num){
        pro *= num%10;
        num /= 10;
    }
    printf("%d",pro);
}