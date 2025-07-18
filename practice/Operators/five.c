#include<stdio.h>
int main(){
    int i=20.5;
    float f=20.4;
    int result;
    result= i==f;   //0
    result=i==(int)f;   //1
    result= (float)i==f;   //0
    result=i<f;   //0
    result=i<(int)f;  //0
    printf("%d\n",result);   //0
}