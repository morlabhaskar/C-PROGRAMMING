#include<stdio.h>
#include<string.h>

void main(){
    char s[30];
    printf("Enter a String :");
    gets(s);
    // strlwr(s);
    strupr(s);
    printf("After : %s",s);
}