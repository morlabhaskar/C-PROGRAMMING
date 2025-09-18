#include<stdio.h>
int main(){
    // int ran = 5;
    int start = 1000;
    int tem = start;
    int end = 1200;
    
    while(tem <= end){
        int sum = 0;
        int temp = tem;
        while(temp){
            int digit = temp % 10;
            sum += digit;
            temp /= 10;
        }
        if(sum >= 10){
            int summ = 0;
            int temm = tem;
            while(temm){
                int d = temp % 10;
                summ += d;
                temm /= 10;
            }
            printf("Summ is %d\n",summ);
            summ = 0;
        }
        
        printf("Num = %d , Sum = %d\n",tem,sum);
        
        sum = 0;
        
        tem++;
    }
}