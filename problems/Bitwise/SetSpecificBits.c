#include <stdio.h>

int set_bits(int reg, int pos, int len) {
    // Your code here
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
    scanf("%d %d %d", &reg, &pos, &len);
    printf("%d", set_bits(reg, pos, len));
    return 0;
}