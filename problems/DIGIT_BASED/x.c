#include<stdio.h>
void sum(int x,int y,int *z){
    *z=x+y;
}
int main(){
    int a,b,c;
    printf("Enter a b values :\n");
    scanf("%d %d",&a,&b);// 1 2
    sum(a,b,&c);
    printf("res=%d\n",c);
}
