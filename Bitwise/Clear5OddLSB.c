//Clear 5 Odd Index Bits From LSB
#include<stdio.h>
int main(){
    int num,bit,data;
    printf("Enter a Number :");
    scanf("%d",&num);
    data = num;
    for(bit=31;bit>=0;bit--){
        printf("%d",(num>>bit)&1);
        if(bit==1 || bit==3 || bit==5 || bit==7 || bit==9){
            data &= ~(1<<bit);
        }
    }
    printf("\n");
    for(int b=31;b>=0;b--){
        printf("%d",(data>>b)&1);
    }
    printf("\n%d",data);
}