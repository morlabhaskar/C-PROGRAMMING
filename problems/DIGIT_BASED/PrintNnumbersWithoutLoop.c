//WAP to print n numbers without using any loop
#include <stdio.h>
void printNos(unsigned int n){
  if(n > 0){
    printNos(n-1);
    printf("%d ",  n);
  } 
}
int main(void){
    int n;
    scanf("%d",&n);
    printNos(n);
}