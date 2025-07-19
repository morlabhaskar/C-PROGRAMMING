#include<stdio.h>
int main(){
    printf("%d\n",(0x11>11) && (11>011));   // 1
    printf("%d\n", sizeof(-1) > 10); // 0
    printf("%d\n", sizeof(-1)); // 4
    printf("%d\n", 23.0>23); //0
}