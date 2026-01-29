#include<stdio.h>
int sum(int n){
    static int s=0;
    if(n>0){
        s = s+(n%10);
        sum(n/10);
        return s;
    }
}
int main(){
    int num;
    printf("Enter the Number :\n");
    scanf("%d",&num);
    printf("Sum of %d is %d",num,sum(num));
}