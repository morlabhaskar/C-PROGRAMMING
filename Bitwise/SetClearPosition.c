//Set or Clear a Specific Bit in a Register
/*Input Format :
    An 8-bit integer (0-255) representing the register value.
    An integer (0-7) representing the bit position.
    An integer (0 or 1) representing the operation (1 to set, 0 to clear the bit).

Output Format :
    The modified register value after setting/clearing the bit.*/
    
#include <stdio.h>
int modifyBit(int reg, int pos, int mode) {
    int data = reg;
    if(mode==1){
        data |= (1<<pos);
    }
    else{
        data &= ~(1<<pos);
    }
    return data;
}

int main() {
    int reg;
    int pos, mode;
    scanf("%d %d %d", &reg, &pos, &mode);
    printf("%d", modifyBit(reg, pos, mode));
    return 0;
}