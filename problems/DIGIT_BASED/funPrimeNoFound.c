#include<stdio.h>
int checkPrime(int);
int DigitFound(int,int);

int main(){
    int min,max,dig,cnt=0;
    printf("Enter Min Number :");scanf("%d",&min);
    printf("Enter Max Number :");scanf("%d",&max);
    printf("Enter Digit :");scanf("%d",&dig);
    for(int i=min;i<=max;i++){
        if(checkPrime(i)){
            if(DigitFound(i,dig)){
                printf("%d,",i);
                cnt++;
            }
        }
    }
    if(cnt==0) printf("No Prime Numbers Between the given Range Digit Found of %d",dig);
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
int DigitFound(int data,int dig){
    int flag = 0;
    while(data){
        if(data%10 == dig){
            flag = 1;
            break;
        }
        data /= 10;
    }
    if(flag) return 1;
    else return 0;
}