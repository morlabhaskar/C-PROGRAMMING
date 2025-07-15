#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter three different Numbers :");
    scanf("%d %d %d",&a,&b,&c);
    if (a >= b && a >= c){
        printf("a = %d is Big Number.",a);
    }
    if (b >= c && b >= a){
        printf("b = %d is Big Number.",b);
    }
    if (c >= a && c >= b){
        printf("c = %d is Big Number.",c);
    }
    return 0;
}

//OP : Enter three different Numbers : 10 20 30
//c = 30 is Big Number.