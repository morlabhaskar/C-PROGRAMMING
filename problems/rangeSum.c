#include<stdio.h>
int rangeSum(int,int);
int main(){
    int min,max;
    printf("Enter a Min Number :");scanf("%d",&min);
    printf("Enter a Max Number :");scanf("%d",&max);
    int res = rangeSum(min,max);
    printf("%d",res);
}
int rangeSum(int min,int max){
    int cnt=0;
    for(int i=min;i<=max;i++){
        if(i%2==0){
            cnt += i;
        }
    }
    return cnt;
}