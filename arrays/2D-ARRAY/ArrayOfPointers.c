#include<stdio.h>
#include<stdlib.h>
int main(){
    // int *arr[4];
    // printf("%lu\n",sizeof(arr));//16  → for 32 bit cpu
    // printf("%lu\n",sizeof(*arr));//4
    // printf("%lu\n",sizeof(**arr));//4

    // int *arr[5];
    // printf("%lu\n",sizeof(arr));//20  → for 32 bit cpu
    // printf("%lu\n",sizeof(*arr));//4
    // printf("%lu\n",sizeof(**arr));//4

    // int x = 10;
    // int *p=&x;
    // int **q=&p;
    // printf("%lu\n",x);//10
    // printf("%lu\n",&x);//address of x
    // printf("%lu\n",p);//address of x
    // printf("%lu\n",*p);//10
    // printf("%lu\n",q);//q pointer address
    // printf("%lu\n",*q);//address of x
    // printf("%lu\n",**q);//10

    // int **ptr;
    // printf("%lu\n",sizeof(ptr));//4
    // printf("%lu\n",sizeof(*ptr));//4
    // printf("%lu\n",sizeof(**ptr));//4

    // int v=50;
    // int *ptr=&v;
    // int **q=&ptr;
    // printf("%lu\n",v);//50
    // printf("%lu\n",&v);//1000
    // printf("%lu\n",ptr);//1000
    // printf("%lu\n",*ptr);//50
    // printf("%lu\n",q);//3000
    // printf("%lu\n",*q);//1000
    // printf("%lu\n",**q);//50

    // int v=50;
    // int **q=&v;
    // printf("%lu\n",**q);//segmentation fault

    // char **p;//double pointer or pointer to pointer
    // char *q[5];//array of 5 char pointers
    // char (*r)[4];//pointer to an array
    // printf("%lu  %lu  %lu\n",sizeof(p),sizeof(*p),sizeof(**p));//4   4  1
    // printf("%lu  %lu  %lu\n",sizeof(q),sizeof(*q),sizeof(**q));//20  4  1
    // printf("%lu  %lu  %lu\n",sizeof(r),sizeof(*r),sizeof(**r));//4   4  1

}