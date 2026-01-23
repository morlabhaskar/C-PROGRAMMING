#include<stdio.h>
int main(){
    int num,flag = 0;
    scanf("%d",&num);
    if(num<0){
        num = -num;
    }
    while(num){
        if((num%10) % 2 != 0){
            printf("%d ",num%10);
            flag=1;
        }
        num /= 10;
    }
    if(flag==0){
        printf("no odd digits");
    }
}