#include <stdio.h>

int toggleFifthBit(int n) {
    int data = n;
    for(int bit=7;bit>=0;bit--){
        printf("%d ",(data>>bit)&1);
        if(bit == 5){
            data ^= (1<<bit);
        }
    }
    printf("\n");
    for(int bit=7;bit>=0;bit--){
        printf("%d ",(data>>bit)&1);
    }
    return data;
}

int main() {
    int n;
    scanf("%d", &n);
    // toggleFifthBit(n);
    printf("\n%d", toggleFifthBit(n));
    return 0;
}