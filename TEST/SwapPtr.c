//WAP to swap 2 variables with using pointer
#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=10,b=20;
    printf("Before Swap\n");
    printf("a=%d  b=%d\n",a,b);
    swap(&a,&b);
    printf("After Swap\n");
    printf("a=%d  b=%d\n",a,b);
}