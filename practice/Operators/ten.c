#include<stdio.h>
int main(){
    int a=5,b=0,c=-3,d=-1;
    printf("%d %d %d %d\n",a,b,c,d);    //  5  0  -3  -1
    d=a&&b;   // d = 5 && 0  = 0
    printf("%d %d %d %d\n",a,b,c,d);    //  5  0  -3  0
    d=b||c;   //  d = 0 || -3  = 1
    printf("%d %d %d %d\n",a,b,c,d);    //  5  0  -3  1
    d= !a || !c;     //  d = !5  ||  !-3  =  0  ||  0  =  0
    printf("%d %d %d %d\n",a,b,c,d);    //  5  0  -3  0
}