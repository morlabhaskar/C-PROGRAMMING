#include<stdio.h>
int main(){
    float v=1234.5;
    printf("v=%e %f\n",v,v);
    v=v*100;
    printf("v=%e %f\n",v,v);
    v=3.4;
    printf("v=%e %f\n",v,v);
    v=0.000567;
    printf("v=%e %f\n",v,v);
}


//output :
// v=1.234500e+03 1234.500000
// v=1.234500e+05 123450.000000
// v=3.400000e+00 3.400000
// v=5.670000e-04 0.000567