#include<stdio.h>
int main(){
    printf("%lu\n",sizeof('\n'));  //4
    printf("%lu\n",sizeof("5"));  //2
    printf("%lu\n",sizeof(5.0));  //8
    printf("%lu\n",sizeof(23.4f));  //4
    printf("%lu\n",sizeof("23.4f"));   //6
}