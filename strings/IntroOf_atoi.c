//atoi() stands for ASCII to Integer — it’s a C library function used to convert a 
//string (containing digits) into an integer.
//int atoi(const char *str);
#include<stdio.h>
#include<stdlib.h>
int main(){
    char s1[20]="123";
    char s2[20]="    123";
    char s3[20]="123    ";
    char s4[20]="a123";
    char s5[20]="123a";
    char s6[20]="1a23";
    char s7[20]="12.3";
    char s8[20]="-123";
    printf("%d\n",atoi(s1));//123
    printf("%d\n",atoi(s2));//123
    printf("%d\n",atoi(s3));//123
    printf("%d\n",atoi(s4));//0
    printf("%d\n",atoi(s5));//123
    printf("%d\n",atoi(s6));//1
    printf("%d\n",atoi(s7));//12
    printf("%d\n",atoi(s8));//-123
}