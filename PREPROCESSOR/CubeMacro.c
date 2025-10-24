#include<stdio.h>
#define CUBE(x) x*x*x
int main(){
    int a,b=3;
    a = CUBE(b++);
    printf("%d %d",a,b); //60 6
}