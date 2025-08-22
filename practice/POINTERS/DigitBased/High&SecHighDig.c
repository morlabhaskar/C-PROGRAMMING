#include<stdio.h>
void highest(int,int*,int*);
int main(){
    int num,high=0,secHigh=0;
    printf("Enter a Number :");
    scanf("%d",&num);
    printf("Before Modification : num=%d  high=%d  secHigh=%d\n",num,high,secHigh);
    highest(num,&high,&secHigh);
    printf("After Modification : num=%d  high=%d  secHigh=%d\n",num,high,secHigh);
}

void highest(int num,int *high,int *secHigh){
    int temp = num;
    while(temp){
        int x = temp%10;
        if(x > *high){
            *secHigh = *high;
            *high = x;
        }
        else if(x < *high && x > *secHigh){
            *secHigh = x;
        }
        temp /= 10;
    }
}