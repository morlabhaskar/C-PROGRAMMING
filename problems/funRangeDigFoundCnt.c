#include<stdio.h>
int digitFound(int,int);
int main(){
    int min,max,cnt=0,dig;
    printf("Enter a Min Number :");scanf("%d",&min);
    printf("Enter a Max Number :");scanf("%d",&max);
    printf("Enter Digit :");scanf("%d",&dig);
    for(int i=min;i<=max;i++){
        if(digitFound(i,dig)){
            printf("%d,",i);
            cnt++;
        }
    }
    printf("\n%d",cnt);
}

int digitFound(int data,int dig){
    int temp = data,flag=0;
    while(temp){
        if(temp%10==dig){
            flag=1;
            break;
        }
        temp /= 10;
    }
    if(flag){
        return 1;
    }
    else{
        return 0;
    }
}