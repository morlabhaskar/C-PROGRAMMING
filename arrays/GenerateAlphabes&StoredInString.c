//wap to  generate upper case alphabets and print the elements hint:use rand function
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    char str[10];
    srand(time(0));
    for(int i=0;i<10;i++){
        str[i] = rand()%(90-65+1)+65;
    }
    printf("Array is :\n");
    for(int i=0;i<10;i++){
        printf("str[%d]=%c\n",i,str[i]);
    }
}