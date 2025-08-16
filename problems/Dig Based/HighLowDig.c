#include<stdio.h>
int main(){
    int num,high=0,low=1;
    scanf("%d",&num);
    
    while(num){
        int x = num%10;
        if(x>high){
            high = x;
        }
        if(x<low){
            low = x;
        }
        num /= 10;
    }
    printf("High=%d  Low=%d",high,low);
}