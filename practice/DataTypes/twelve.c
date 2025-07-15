#include<stdio.h>
int main(){
    int i=56.7;
    float f= 12;
    printf("i=%d f=%f\n",i,f);  // 56  12.000000
    i=f;
    printf("i=%d f=%f\n",i,f);    //12   12.000000
    i=i*20;  //i = 240
    f=i;    // f = 240
    printf("i=%d f=%f\n",i,f);   // 240   240.000000
}

//output :
// i=56 f=12.000000
// i=12 f=12.000000
// i=240 f=240.000000