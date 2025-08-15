//Highest and Lowest Digit in a Given Integer
#include<stdio.h>
int main(){
    int num,low=9,high=0,cnt=0;
    printf("Enter a Number :");
    scanf("%d",&num);
    if(num<0) num = -num;
    while(num){
        cnt++;
        int x = num % 10;
        if(x>high){
            high = x;
        }
        if(x<low){
            low = x;
        }
        num /= 10;
    }
    if(cnt <=1){
        printf("you have supplied single digit only");
    }
    else if(low == 9){
        printf("All digits are same");
    }
    else{
        printf("highest=%d Lowest=%d",high,low);
    }
}
