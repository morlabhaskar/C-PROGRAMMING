//wap to  generate upper case & lower case alphabets and print the elements hint:use rand function
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    char str[10];
    srand(time(0));
    //for UpperCase
    // for(int i=0;i<10;i++){
    //     str[i] = rand()%(90-65+1)+65;
    // }
    //for LowerCase
    for(int i=0;i<10;i++){
        str[i] = rand()%(122-97+1)+97;
    }
    printf("Array is :\n");
    for(int i=0;i<10;i++){
        printf("str[%d]=%c\n",i,str[i]);
    }
}