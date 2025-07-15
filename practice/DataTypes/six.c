#include<stdio.h>
int main(){
    unsigned long int var=0;   //4 bytes  Range: 0 to 4,294,967,295
    printf("var=%lu\n",var);  //0
    var=var-1;
    printf("var=%lu\n",var);    //  4,294,967,295
}

//output :
// var=0
// var=4294967295