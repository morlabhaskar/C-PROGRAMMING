#include<stdio.h>
int setBitPosition(int,int);
int main(){
    int num,bitPos;
    printf("Enter a Number :");scanf("%d",&num);
    printf("Enter Bit Position for Set :");scanf("%d",&bitPos);
    printf("%d\n",num);
    for(int bit=32;bit>=0;bit--){
        printf("%d",(num>>bit)&1);
    }
    int res = setBitPosition(num,bitPos);
    printf("\n%d\n",res);
    for(int bit=32;bit>=0;bit--){
        printf("%d",(res>>bit)&1);
    }
}
int setBitPosition(int num,int pos){
    int temp=num;
    for(int bit=32;bit>=0;bit--){
        if(bit == pos){
            temp |= (1<<bit);
        }
    }
    return temp;
}
