#include<stdio.h>
int checkPrime(int);
int sumDigits(int);
int main(){
    int min,max,cnt=0;
    printf("Enter a Min Number :");scanf("%d",&min);
    printf("Enter a Max Number :");scanf("%d",&max);
    for(int i=min;i<=max;i++){
        if(checkPrime(i)){
            printf("%d,",i);
            int x = sumDigits(i);
            cnt += x;
        }
    }
    printf("\n%d",cnt);
}

int checkPrime(int data){
    int cnt=0;
    for(int i=1;i<=data;i++){
        if(data%i == 0){
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

int sumDigits(int data){
    int temp = data,cnt = 0;
    while(temp){
        cnt += temp%10;
        temp /= 10;
    }
    return cnt;
}