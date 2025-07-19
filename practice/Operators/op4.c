#include<stdio.h>
int main(){
    int a = 123, b = 456;
    a ^= b ^= a ^= b;
    // a = a^b    a = 435  b = 456
    // b = b^a    b = 127  a = 435
    //a = a^b     a = 456  b = 127
    printf(" %d %d" , a,b);  //a = 456  b = 127
}