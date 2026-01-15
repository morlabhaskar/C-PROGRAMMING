#include <stdio.h>
int isKthBitSet(int num, int k) {
    for(int bit=7;bit>=0;bit--){
        // printf("bit[%d]=%d\n ",bit,(n>>bit)&1);
        if(bit==k){
            if((num>>bit)&1){
                return 1;
            }
        }
    }
    return 0;
}
int main() {
    int num, k;
    scanf("%d %d", &num, &k);
    printf("%d", isKthBitSet(num, k));
}