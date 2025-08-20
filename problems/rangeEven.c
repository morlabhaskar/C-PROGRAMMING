#include<stdio.h>
int checkEven(int);
int main(){
    int min,max;
    printf("Enter a Min Number :");scanf("%d",&min);
    printf("Enter a Max Number :");scanf("%d",&max);
    for(int i=min;i<=max;i++){
        if(checkEven(i)){
            printf("%d,",i);
        }
    }
}
int checkEven(int num){
    if(num%2==0){
        return 1;
    }
    else{
        return 0;
    }
}