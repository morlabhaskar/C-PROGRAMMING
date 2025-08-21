#include<stdio.h>
int main(){
    int num = 10;
    printf("num=%d\n",num);  //num=10
    printf("&num=%u\n",&num);  //&num=6422300
    int *iptr=&num;
    printf("ptr=%u\n",iptr);   //ptr=6422300
    printf("*ptr=%d\n",*iptr);   //*ptr=10
    printf("&ptr=%u\n",&iptr);   //&ptr=6422296
}
