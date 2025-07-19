#include<stdio.h>
int main(){
    printf("%d\n", 1<<4>>4);    // 1
    printf("%d\n", 1<<31>>30);    //-2   after left shift sign bit is -ve so -2 is answer
}