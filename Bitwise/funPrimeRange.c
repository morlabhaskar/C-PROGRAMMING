#include<stdio.h>
int checkPrime(int);
int main(){
    int min,max;
    printf("Enter Min Number :");scanf("%d",&min);
    printf("Enter Max Number :");scanf("%d",&max);
    for(int i=min;i<=max;i++){
        if(checkPrime(i)){
            printf("%d,",i);
        }
    }
}
int checkPrime(int data){
    int cnt=0;
    for(int j=1;j<=data;j++){
        if(data%j == 0){
            cnt++;
        }
    }
    if(cnt==2) return 1;
    else return 0;
}