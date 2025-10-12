#include <stdio.h>
void int_to_binary(int data){
    for(int bit=31;bit>=0;bit--){
        printf("%d ",(data>>bit)&1);
    }
}
int set_bits(int reg, int pos, int len) {
    for(int bit=31;bit>=0;bit--){
        if(bit < pos+len && bit >=pos){
            reg |= (1<<bit);
        }
    }
    return reg;
}
int main() {
    int reg;
    int pos, len;
    printf("Enter a Number :\n");
    scanf("%d", &reg);
    printf("Enter a Position :\n");
    scanf("%d", &pos);
    printf("Enter a Lenght to set Bits :\n");
    scanf("%d", &len);
    printf("Binary of %d is :\n",reg);
    int_to_binary(reg);
    int result=set_bits(reg, pos, len);
    printf("\nAfter SetBits :\n");
    int_to_binary(result);
    return 0;
}