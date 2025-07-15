#include<stdio.h>
int main(){
    unsigned int var=0;   //4 bytes  Range: 0 to 4,294,967,295
    printf("var=%u\n",var);  // 0
    var=var-1;
    printf("var=%u\n",var);  //  4,294,967,295

}

//output :
// var=0
// var=4294967295