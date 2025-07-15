#include<stdio.h>
int main(){
    int a=10;
    printf("a=%d\n",a);   // 10
    ++a;
    printf("a=%d\n",a);   // 11
    a++;
    printf("a=%d\n",a);   // 12
    --a;
    printf("a=%d\n",a);   // 11
    a--;
    printf("a=%d\n",a);   // 10

}


// output :
// a=10
// a=11
// a=12
// a=11
// a=10