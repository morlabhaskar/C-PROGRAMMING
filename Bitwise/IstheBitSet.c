//Given an 8-bit register, check whether the bit at a specific position is set (i.e., equals 1). Return 1 if the bit is set, otherwise return 0.
// #include <stdio.h>
// #include <stdint.h>

// uint8_t is_bit_set(uint8_t reg, uint8_t pos) {
//     for(int bit=9;bit;bit--){
//         if((bit==pos)&&((reg>>bit)&1)){
//             return 1;
//         } 
//     }
//     return 0;
// }

// int main() {
//     uint8_t reg, pos;
//     scanf("%hhu %hhu", &reg, &pos);
//     printf("%u", is_bit_set(reg, pos));
//     return 0;
// }

#include <stdio.h>
#include <stdint.h>

int is_bit_set(int reg, int pos) {
    int flag = 0;
    int data = reg;
    for(int i=1;i<10;i++){
        int bit = data%10;
        // if(bit == pos){
        //     if(bit == ((data>>bit)&1)){
        //         flag=1;
        //     }
        // }
        data /= 10;
    }
    // for(int bit=9;bit;bit--){
    //     if((bit==pos)&&((reg>>bit)&1)){
    //         flag=1;
    //         break;
    //     } 
    // }
    flag;
}
int main() {
    int reg, pos;
    scanf("%d %d", &reg, &pos);
    printf("%d %d\n", reg,pos);
    printf("%d", is_bit_set(reg, pos));
    return 0;
}