#include <stdio.h>
#include <stdint.h>

// Complete the function
uint16_t highest_set_bit(uint16_t reg) {
    // Your logic here
    int high = 0;
    for(int bit=15;bit>=0;bit--){
        printf("%d ",(reg>>bit)&1);
        if((reg>>bit)&1 == 1){
            high = bit;
            break;
        }
    }
    printf("\n%d\n",high);
    for(int bit1=15;bit1>=0;bit1--){
        printf("%d ",(reg>>bit1)&1);
        if(bit1 != high){
            reg &= ~(1<<bit1);
        }
    }
    
    return 0;
}

int main() {
    uint16_t reg;
    scanf("%hu", &reg);

    uint16_t result = highest_set_bit(reg);
    printf("\n%hu", result);
    return 0;
}