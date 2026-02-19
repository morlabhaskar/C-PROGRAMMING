/*
register is a storage class used for local variables that requests the 
compiler to store the variable in a CPU register instead of RAM, for faster access.
register variables do not have a memory address
*/
#include<stdio.h>
int main(){
    register int x = 10;
    printf("%d\n", x);//10
    x=20;//modified
    printf("%d\n", x);//10
    // printf("%d\n", &x);//error : register variable has not an address
    return 0;
}