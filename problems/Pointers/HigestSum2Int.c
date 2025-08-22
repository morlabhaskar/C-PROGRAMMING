#include<stdio.h>
void highest(int,int,int*);
int main(){
    int num1,num2,highestCnt=0;
    printf("Enter a Number-1 :");
    scanf("%d",&num1);
    printf("Enter a Number-2 :");
    scanf("%d",&num2);
    printf("Before Modification : num1=%d  num2=%d highestCnt=%d\n",num1,num2,highestCnt);
    highest(num1,num2,&highestCnt);
    printf("Before Modification : num1=%d  num2=%d highestCnt=%d\n",num1,num2,highestCnt);
}

void highest(int num1,int num2,int *highestCnt){
    int cnt1=0,cnt2=0;
    while(num1){
        cnt1 += num1%10;
        num1 /= 10;
    }
    while(num2){
        cnt2 += num2%10;
        num2 /= 10;
    }
    if(cnt1 > cnt2){
        *highestCnt = cnt1;
    }
    else{
        *highestCnt = cnt2;
    }
}