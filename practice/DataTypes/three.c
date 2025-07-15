#include<stdio.h>
int main(){
    short int x=55,y=66;  // 2 bytes, range : -2^15 to +2^15 -1
    printf("x=%d y=%d\n",x,y);  // 55    66
    printf("enter two integers:");
    scanf("%hd%hd",&x,&y);   // 10  20  (inputs)
    printf("x=%d y=%d\n",x,y);   // 10   20
}

//output:
// x=55 y=66
// enter two integers:10 20
// x=10 y=20