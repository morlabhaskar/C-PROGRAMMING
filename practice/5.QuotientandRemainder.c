#include <stdio.h>

int main(){
    int a,b,quot,remain;
    printf("Enter a :");
    scanf("%d",&a);
    printf("Enter b :");
    scanf("%d",&b);
    
    quot = a / b;
    remain = a % b;
    
    printf("The Quotient is %d\n",quot);
    printf("The Remainder is %d",remain);
    return 0;
}

// OP : Enter a : 10
// Enter b : 3
// The Quotient is 3
// The Remainder is 1