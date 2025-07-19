#include<stdio.h>
int main(){
    int a = 12;
    int b = -112;
    printf("%d", ~a);   // -(12 + 1) = -13        formula of "~n" = -(n+1)
    printf("%d", ~b);   // -(-112 + 1) = -(-111) = 111
}