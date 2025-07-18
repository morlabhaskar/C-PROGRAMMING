#include<stdio.h>
int main(){
    int x=10,y=20,z=30;
    printf("%d %d %d\n",x,y,z);    //  10   20   30
    x=y=z=40;
    printf("%d %d %d\n",x,y,z);    //  40   40   40


}