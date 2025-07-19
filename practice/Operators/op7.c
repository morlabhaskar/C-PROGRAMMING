#include<stdio.h>
int main(){
    printf("%d\n", -1<<4);    //-16
    printf("%d\n", -2 >>7);   //-1
    printf("%x\n", 1<<10);    //400
    printf("%x\n", 0xFF<<4);  //ff0
    printf("%o\n", 034<<2);   //160
}