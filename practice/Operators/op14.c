#include<stdio.h>
int main(){
    int a=-1,b=0, c=5;
    char ch='a';
    printf("%d\n", (ch>=97)&&(ch<=122));        // 1 && 1  = 1             ASCII of a = 97
    printf("%d\n",(a==0) || (b==0) ||(c==0));  // 0 || 1  || 0  = 1
    printf("%d\n", (a<b)&&(b<c));              // 1 && 1  = 1
}