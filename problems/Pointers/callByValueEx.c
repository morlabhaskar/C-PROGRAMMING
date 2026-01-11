//This is Best Example for "Call By Value"
#include<stdio.h>
void swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
    printf("In Swap Function :\n");
    printf("a = %d , b = %d\n",a,b);
}
int main(){
    int a=10,b=20;
    printf("Before Swapping :\n");
    printf("a = %d , b = %d\n",a,b);
    swap(a,b);
    printf("After Swapping :\n");
    printf("a = %d , b = %d\n",a,b);
}

