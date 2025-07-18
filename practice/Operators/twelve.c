#include<stdio.h>
int main(){
    int a,b,c;
    int result;
    printf("enter 3 integers:");
    scanf("%d%d%d", &a,&b,&c);  //0  1   2 
    result= (a<0) &&(b<0)&&(c<0);   // 0  &&  0  &&  0  = 0 = result
    printf("%d\n",result);  // 0
    result=(a>b)&&(b>c);  // 0  &&  0  = 0 = result
    printf("%d\n",result);  // 0

}