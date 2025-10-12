#include <stdio.h>
int is_bit_set(int reg, int pos) {
    int data = reg;
    for(int bit=31;bit>=0;bit--){
        if(bit == pos){
            return ((data>>bit)&1);
        }
    }
}
void int_to_binary(int data){
    for(int bit=31;bit>=0;bit--){
        printf("%d ",(data>>bit)&1);
    }
}
int main() {
    int data, pos;
    printf("Enter Number :\n");
    scanf("%d",&data);
    printf("Enter Status of BitPosition :\n");
    scanf("%d",&pos);
    printf("Binary of %d is\n",data);
    int_to_binary(data);
    printf("\nBit Status of %d is %d",data,is_bit_set(data, pos));
    return 0;
}