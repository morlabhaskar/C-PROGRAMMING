#include<stdio.h>
int main(){
    int a=10,b=20;
    printf("a=%d b=%d\n",a,b);    //  10  20 
    //b=a*b/a=b;
    b=a*b/(a=b);    // b = 200 / 20 = 10       , a = 20
    //b=(a*b)/(a=b);
    //b=((a*b)/(a=b));
    printf("a=%d b=%d\n",a,b);  //  20   10

}