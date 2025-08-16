#include <stdio.h>

int main() {
    int num;
    printf("Enter a Number :");
    scanf("%d",&num);
    if(num % 2 == 0){
        printf("%d is a Even Number",num);
    }
    else{
        printf("%d is a Odd Number",num);
    }

    return 0;
}

// OP : Enter a Number : 5
// 5 is a Odd Number
// Note: The code checks if a number is even or odd using the modulus operator.