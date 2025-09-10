#include<stdio.h>
int checkPrime(int);
int main(){
    int min,max,cnt=0;
    printf("Enter a Min Number :");
    scanf("%d",&min);
    printf("Enter a Max Number :");
    scanf("%d",&max);
    for(int i=min;i<=max;i++){
        if(checkPrime(i)){
            if(cnt%2==0){
                printf("%d,",i);
            }
            cnt++;
        }
    }
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