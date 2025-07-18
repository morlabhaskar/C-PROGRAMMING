#include<stdio.h>
int main(){
    int result;
    char ch;
    printf("enter a char:");
    scanf("%c",&ch);     //a
    printf("%d\n",ch);    //97
    result=(ch>=65)&&(ch<=90);  // res = 1 && 0 = 0
    printf("%d\n",result);  // 0
    result=(((ch>='A')&&(ch<='Z')) || ((ch>='a') && (ch<='z')));  // res = (1 && 0) || (1 && 1) = 1
    printf("%d\n",result);  // 1
}