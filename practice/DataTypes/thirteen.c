#include<stdio.h>
int main(){
    int a=20, b=021,c=0x22;
    int d;
    d=a+b+c;   // 20 + 17 + 34
    printf("d= %d %o %x\n",d,d,d);   // 71  107  47
}

//output :
// d= 71 107 47