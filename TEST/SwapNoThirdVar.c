#include<stdio.h>
void swap(int *a,int *b){
    // *a^=*b^=*a^=*b;
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
int main(){
    int a=10,b=20;
    printf("Before Swap\n");
    printf("a=%d  b=%d\n",a,b);
    swap(&a,&b);
    printf("After Swap\n");
    printf("a=%d  b=%d\n",a,b);
}
