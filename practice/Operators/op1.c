#include<stdio.h>
int main(){
    unsigned char a;
    a = 0xFF + 3;       // a= 255 + 3 = 258  overflow  then 0 - 255  to return back  so ans = 2
    printf("%u\n", a);   // 2
}