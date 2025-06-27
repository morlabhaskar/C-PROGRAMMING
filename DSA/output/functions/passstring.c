#include<stdio.h>

void modi(char[]);

void main(){
    char name[] = "Bhaskar";
    modi(name);
    printf("Modify String is : %s",name);
}

void modi(char a[]){
    a[1] = "z";
}