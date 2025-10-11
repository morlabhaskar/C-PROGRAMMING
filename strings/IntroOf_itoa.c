//The function itoa() in C is used to convert an integer (int) into a string (char array) in a 
//given base (like 2 for binary, 10 for decimal, 16 for hexadecimal, etc.).
//char *itoa(int value, char *str, int base);
//value → the integer to convert
//str → the character array to store the resulting string
//base → the number system (2 to 36)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int num;
    char str[30];
    printf("Enter a Number :\n");
    scanf("%d",&num);
    itoa(num,str,10);//10 for decimal
    printf("String is : %s",str);
}