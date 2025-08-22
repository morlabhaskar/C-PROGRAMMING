#include<stdio.h>
void highest(int,int*,int*,int*,int*);
// void highest(int,int*,int*);
int main(){
    int num,high=0,secHigh=0,highCnt=0,secHighCnt=0;
    printf("Enter a Number :");
    scanf("%d",&num);
    printf("Before Modification : num=%d  high=%d  secHigh=%d   highCnt=%d   secHighCnt=%d\n",num,high,secHigh,highCnt,secHighCnt);
    highest(num,&high,&secHigh,&highCnt,&secHighCnt);
    // highest(num,&high,&secHigh);
    printf("After Modification : num=%d  high=%d  secHigh=%d  highCnt=%d   secHighCnt=%d\n",num,high,secHigh,highCnt,secHighCnt);
}

void highest(int num,int *high,int *secHigh,int *highCnt,int *secHighCnt){
// void highest(int num,int *high,int *secHigh){
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
    printf("\ntemp = %d  num = %d\n",temp,num);
    int temp1 = num;
    while(temp1){
        if(temp1%10 == *high){
            *highCnt += 1;
        }
        else if(temp1%10 == *secHigh){
            *secHighCnt += 1;
        }
        
        temp1 /= 10;
    }
}