/*
static is a storage class that preserves a variable’s value and restricts visibility depending on where it is declared.
It has two important uses:
Static local variable(function scope)
Static global variable(file scope)
*/
#include <stdio.h>
static int x = 50;   // file-scope only
//Cannot call display() from another .c file.(because static is a file scope only)
static void display() {
    printf("Hello\n");
}
void counter() {
    static int count = 0;   // initialized once
    count++;
    printf("%d ", count);
}
int main() {
    counter();//1
    counter();//2
    counter();//3
}