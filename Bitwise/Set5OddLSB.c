//Set 5 Odd Index Bits From LSB
#include<stdio.h>
void int_to_binary(int data){
    for(int bit=31;bit>=0;bit--){
        printf("%d ",(data>>bit)&1);
    }
}
int set_5_odd_bits_from_LSB(int num){
    int data = num;
    for(int bit=31;bit>=0;bit--){
        if(bit==1 || bit==3 || bit==5 || bit==7 || bit==9){
            data |= (1<<bit);
        }
    }
    return data;
}
int main(){
    int num;
    printf("Enter a Number :\n");
    scanf("%d",&num);
    int_to_binary(num);
    printf("\nAfter Set the Bits :\n");
    int result = set_5_odd_bits_from_LSB(num);
    int_to_binary(result);
}