#include<stdio.h>
int main(){
    int i=-1;
    int result;
    result= sizeof(i) > i ;     //  4  >   -1      4 is unsigned and i is signed so i is converted to unsigned int   so res = 4  > 2^32  = 0
    printf("result=%d\n",result);
}