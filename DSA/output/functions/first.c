#include <stdio.h>


void sum(void);
void mul(void);

void main(){
    sum();
    mul();
}

void mul(){
    int a,b;
    printf("Enter Two Numbers :");
    scanf("%d %d",&a,&b);
    printf("Mul is : %d\n",a*b);
}

void sum(){
    int a,b;
    printf("Enter Two Numbers :");
    scanf("%d %d",&a,&b);
    printf("Sum is : %d\n",a+b);
}
