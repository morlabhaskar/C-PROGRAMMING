#include <stdio.h>

int main() {

    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);

    if (num < 0.0)
        printf("You entered a negative number.");
    else if (num > 0.0)
        printf("You entered a positive number.");
    else
        printf("You entered 0.");

    return 0;
}

// This program checks if a given number is positive, negative, or zero.
// Enter a number: -5.5
// You entered a negative number.
// Enter a number: 3.14
// You entered a positive number.
// Enter a number: 0
// You entered 0.