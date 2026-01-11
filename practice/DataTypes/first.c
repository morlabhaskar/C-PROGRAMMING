#include<stdio.h>
int main(){
    char v1='2';     // Range : -128  to  +127 
    printf("v1=%c %d\n",v1,v1);  // 2  50     50 is ASCII of 2
    v1=v1*2;  // v1 = 50 * 2 = 100
    printf("v1=%c %d\n",v1,v1);  // d  100    d is ASCII of 100 
    v1*=2;// v1=v1*2     v1 = 100 * 2 = 200
    printf("v1=%c %d\n",v1,v1);  //garbage   -56        binary msb of 200 is 1 so "-" and 2's of 200 is 56 so -56
}
//output :
// v1=2 50
// v1=d 100
// v1=╚ -56