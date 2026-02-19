/*
extern is a storage class used to declare a global variable or function that is defined in another file.
This variable exists somewhere else. Don’t allocate memory here.
*/
#include <stdio.h>
extern int x;  // declaration (no memory allocated)
extern int add(int, int);//definition present in another file
int main() {
    printf("%d\n", x);
    printf("%d\n", add(3,4));
    return 0;
}