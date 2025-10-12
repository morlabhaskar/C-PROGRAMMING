#include <stdio.h>
int is_bit_set(int reg, int pos) {
    int data = reg;
    for(int bit=31;bit>=0;bit--){
        if(bit == pos){
            return ((data>>bit)&1);
        }
    }
}
int main() {
    int data, pos;
    printf("Enter Number :\n");
    scanf("%d",&data);
    printf("Enter Status of BitPosition :\n");
    scanf("%d",&pos);
    printf("Bit Status of %d is %d",data,is_bit_set(data, pos));
    return 0;
}