#include<stdio.h>
int main(){
    unsigned int res;
    res = (64 >>(2+1-2)) & (~(1<<2));   // 32 & ~4  = 32
    res = (64 >>(2+1-2)) & (~100);   // 0  becouse outoff range for unsigned int
    printf("%d", res);   //32
}