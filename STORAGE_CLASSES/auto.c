/*
auto is the default storage class for local (block-scope) variables in C.
If you don’t write any storage class for a local variable, it is automatically auto.
auto variable is visible only inside its block.
*/
#include<stdio.h>
int main(){
    int a=100;//default auto
    // auto int a=10;
    {
        int a=20;
        // auto int a=20;
        printf("Inside block: %d\n", a);//20
    }
    printf("Outside block: %d\n", a);//10
}
