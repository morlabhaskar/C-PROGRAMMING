#include<stdio.h>
int main(){
    int z,x=5,y=-10,a=4,b=2;
    z=x++ - --y * --b / a;    // z = 5 - (-11) * 1 / 4  = 5 - (-11)  / 4  = 5 - (-2)  = 7
    printf("%d\n",z);
}