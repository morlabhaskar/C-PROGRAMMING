#include<stdio.h>
int main(){
    int x=10,y=0;
    int i=10,j=0;
    printf("x=%d y=%d\n",x,y);   // 10  0
    printf("i=%d j=%d\n",i,j);   // 10   0
    y=++x;   // y = 11  , x = 11
    j=i++;   // j = 10  , i = 11
    printf("x=%d y=%d\n",x,y);   // 11   11
    printf("i=%d j=%d\n",i,j);   //  11    10


}


//output :
// x=10 y=0
// i=10 j=0
// x=11 y=11
// i=11 j=10