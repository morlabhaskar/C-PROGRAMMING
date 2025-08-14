//Second Highest Digit in a Given Integer
#include<stdio.h>
int main(){
    int num,max1=-1,max2=-1,cnt=0;
    scanf("%d",&num);
    if(num<0) num = -num;
    while(num){
        cnt++;
        int x = num % 10;
        if(x>max1){
            max2 = max1;
            max1 = x;
        }
        else if(x>max2 && x<max1){
            max2 = x;
        }
        num /= 10;
    }
    if(cnt <=1){
        printf("you have supplied single digit only");
    }
    else if(max2 == -1){
        printf("all digits are same");
    }
    else{
        printf("%d",max2);
    }
}
