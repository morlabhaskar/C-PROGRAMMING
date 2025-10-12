//Set or Clear a Specific Bit in a Register  
#include <stdio.h>
#include <string.h>
void int_to_binary(int data){
    for(int bit=31;bit>=0;bit--){
        printf("%d ",(data>>bit)&1);
    }
}
int modifyBit(int reg, int pos, char mode) {
    int data = reg;
    if(mode=='s'){
        data |= (1<<pos);
    }
    else{
        data &= ~(1<<pos);
    }
    return data;
}
int main() {
    int reg,pos;
    char mode;
    printf("Enter Number :\n");
    scanf("%d", &reg);
    printf("Enter Position :\n");
    scanf("%d",&pos);
    printf("Enter Mode :\n\'s\' for Set Bit\n\'c\' for Clear Bit \n");
    scanf(" %c",&mode);
    int_to_binary(reg);
    int result=modifyBit(reg,pos,mode);
    printf("\n");
    int_to_binary(result);
}