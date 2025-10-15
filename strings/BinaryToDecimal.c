#include<stdio.h>
int convert_binary_to_decimal(int n){
    int dec = 0,base = 1;
    while(n){
        int last_dig = n%10;
        dec += last_dig * base;
        base = base*2;
        n /= 10;
    }
    return dec;
}
int main(){
    int num;
    printf("Enter Binary Number :\n");
    scanf("%d",&num);
    int temp = num,flag=1;
    while(temp){
        int last=temp%10;
        if(!(last==0||last==1)){
            flag=0;
            break;
        }
        temp /= 10;
    }
    if(flag){
        int dec = convert_binary_to_decimal(num);
        printf("Binary of %d is Equal to %d",num,dec);
    }
    else printf("invalid input");
}