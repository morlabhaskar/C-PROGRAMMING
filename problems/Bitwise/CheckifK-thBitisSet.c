#include <stdio.h>

int isKthBitSet(int n, int k) {
    for(int bit=7;bit>=0;bit--){
        // printf("bit[%d]=%d\n ",bit,(n>>bit)&1);
        if(k==bit){
            if(1==((n>>bit)&1)){
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", isKthBitSet(n, k));
    return 0;
}