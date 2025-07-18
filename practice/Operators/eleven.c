#include<stdio.h>
int main(){
    int a=5,b=0,c=-3,d=-1;
    printf("%d %d %d %d\n",a,b,c,d);   //  5   0  -3  -1
    d= ++a || ++b || ++c; // d = 6 || 1 || -3 = 1 || 1 || 1 = 1
    printf("%d %d %d %d\n",a,b,c,d);   //  6  1  -3  1
    a=5;b=0;c=-3;d=-1;
    d= b++ && c++ && a++;   // d = 0 && -3 && 5  = 0 && 1 && 1  = 0
    printf("%d %d %d %d\n",a,b,c,d);   // 6  1  -3  0
    a=5;b=0;c=-3;d=-1;
    d= ++b && ++c && ++a;   // d = 1 && -2 && 6  = 1 && 1 && 1 = 1
    printf("%d %d %d %d\n",a,b,c,d);  // 6  1  -2  1 
}