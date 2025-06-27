// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a = 7;
    int b = 9;
    int *p,*q;
    p = (&a,&b);
    q = &b;
    int c = *p;
    printf("a = %d\n",p);
    printf("b = %d\n",q);
    printf("q = %x\n",&b);
    printf("c = %d",c);
    return 0;
    
}
