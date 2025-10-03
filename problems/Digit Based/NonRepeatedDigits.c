#include<stdio.h>
int repeate_count(int num,int dig){
    int count = 0;
    while(num){
        int last=num%10;
        if(last==dig) count++;
        num/=10;
    }
    return count;
}
int main(){
    int num,flag=1;
    printf("Enter a Number :\n");
    scanf("%d",&num);
    if(num<0){
        num = -num;
    }
    if(num==0){
        printf("%d",num);
    }
    else{
        int temp = num;
        while(temp){
            int last = temp % 10;
            int res=repeate_count(num,last);
            if(res==1){ 
                printf("%d ",last);
                flag=0;
            }
            temp /= 10;
        }
    }
    if(flag && num!=0){
        printf("no non-repeated numbers");
    }
    
}