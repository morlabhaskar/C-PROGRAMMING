#include <stdio.h>

int main(){
    int intType;
    float floatType;
    char charType;
    double doubleType;
    long b;   // equivalent to long int b;
    long long c;  // equivalent to long long int c;
    long double f;
    
    printf("The size of int is %zu bytes\n",sizeof(intType));    // we use either %lu or %zu format specifier.
    printf("The size of float is %zu bytes\n",sizeof(floatType));
    printf("The size of char is %zu bytes\n",sizeof(charType));
    printf("The size of double is %zu bytes\n",sizeof(doubleType));
    printf("Size of long int = %zu bytes\n", sizeof(b));
    printf("Size of long long int = %zu bytes\n", sizeof(c));
    printf("Size of long double = %zu bytes\n", sizeof(f));
    return 0;
}

// OP : The size of int is 4 bytes
// The size of float is 4 bytes
// The size of char is 1 bytes
// The size of double is 8 bytes
// Size of long int = 8 bytes
// Size of long long int = 8 bytes
// Size of long double = 16 bytes
// Note: The size of data types may vary based on the system architecture (32-bit or 64-bit).