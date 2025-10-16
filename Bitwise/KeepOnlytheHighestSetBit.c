#include <stdio.h>
#include <stdint.h>

void int_to_binary(int data){
    for(int bit=31;bit>=0;bit--){
        printf("%d ",(data>>bit)&1);
    }
}
int highest_set_bit(int reg) {
    int data=reg;
    int high = 0;
    for(int bit=31;bit>=0;bit--){
        if((data>>bit)&1){
            high = bit;
            break;
        }
    }
    for(int bit=high-1;bit>=0;bit--){
            data &= ~(1<<bit);
    }
    return data;
}

int main() {
    int reg;
    printf("Enter a Number :\n");
    scanf("%d",&reg);
    printf("Binary of %d is :\n",reg);
    int_to_binary(reg);
    printf("\n");
    int result = highest_set_bit(reg);
    int_to_binary(result);
    return 0;
}