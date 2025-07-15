#include<stdio.h>
int main(){
    unsigned short int var=0;   //2 bytes  , range : 0 to 65535
    printf("var=%hu\n",var);   // 0
    --var;
    printf("var=%hu\n",var);   // 65535   outoff range so max of range
}

//output :
// var=0
// var=65535