#include<stdio.h>
int main(){
    unsigned long long int var=0;  //8 bytes   0 to 18,446,744,073,709,551,615
    printf("var=%llu\n",var);   // 0
    var=var-1;
    printf("var=%llu\n",var);   // 18446744073709551615

}

//output :
// var=0
// var=18446744073709551615




