//Second Lowest Digit in a Given Integer
#include<stdio.h>
int main(){
    int num,low=9,seclow=9,cnt=0;
    scanf("%d",&num);
    if(num<0) num = -num;
    while(num){
        cnt++;
        int x = num % 10;
        if(x<low){
            seclow = low;
            low = x;
        }
        else if(x<seclow && x != low){
            seclow = x;
        }
        num /= 10;
    }
     printf("Second Lowest is :%d",seclow);
}
