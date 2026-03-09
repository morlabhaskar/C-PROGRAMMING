#include<stdio.h>
int is_prime(int num){//11
    if(num<1) return 0;
    for(int i=2;i<num/2;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
int rev_num(int num){//0
    int temp=0;//82
    while(num){
        int rem = num%10;//2
        temp=temp * 10 + rem;
        num/=10;
    }
    return temp;
}
int main(){
    int num,cnt=0,product=1;
    printf("Enter the Number : \n");
    scanf("%d",&num);
    while(num){//37
        int dig=num%10;
        if(is_prime(dig)){
            if(cnt%2==0){
                printf("Alt : %d\n",dig);
                product = product * dig;
            }
            cnt++;
        }
        num/=10;
    }
    printf("Product : %d\n",product);
    if(product%3==0){
        printf("Its Divisible by 3\n");
    }else{
        int rev=rev_num(product);
        printf("Reverse Number is : %d",rev);
    }
}

