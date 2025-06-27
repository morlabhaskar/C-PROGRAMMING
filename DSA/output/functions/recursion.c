#include <stdio.h>

int factorial(int n) {
    if (n == 0)
        return 1;               // Base case
    else
        return n * factorial(n - 1);  // Recursive case

        // factorial(5) = 5 * factorial(4)
        //      = 5 * 4 * factorial(3)
        //      = 5 * 4 * 3 * factorial(2)
        //      = 5 * 4 * 3 * 2 * factorial(1)
        //      = 5 * 4 * 3 * 2 * 1 * factorial(0)
        //      = 5 * 4 * 3 * 2 * 1 * 1 = 120
}

int main() {
    int num = 3;
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}