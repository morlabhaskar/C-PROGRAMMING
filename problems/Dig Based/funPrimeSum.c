#include<stdio.h>
int checkPrime(int);
int sumDigits(int,int);
int main(){
    int min,max,dig,cnt=0;
    printf("Enter Min Number :");scanf("%d",&min);
    printf("Enter Max Number :");scanf("%d",&max);
    printf("Enter Sum Equal to :");scanf("%d",&dig);
    for(int i=min;i<=max;i++){
        if(checkPrime(i)){
            if(sumDigits(i,dig)){
                printf("%d,",i);
                cnt++;
            }
        }
    }
    if(cnt==0){
        printf("No Prime Numbers Between the given Range Sum equal %d",dig);
    }
}
int checkPrime(int data){
    int cnt=0;
    for(int j=1;j<=data;j++){
        if(data%j == 0){
            cnt++;
        }
    }
    if(cnt==2){
        return 1;
    }
    else{
        return 0;
    }
}
int sumDigits(int data,int dig){
    int cnt = 0;
    while(data){
        cnt += data%10;
        data /= 10;
    }
    if(cnt == dig){
        return 1;
    }
    else{
        return 0;
    }
}