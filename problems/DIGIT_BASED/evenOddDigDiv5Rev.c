#include<stdio.h>
int evenp(int num){
    int pro=1;
    while(num){
        int rem=num%10;
        if(rem%2==0){
            pro=pro*rem;
        }
        num/=10;
    }
    return pro;
}
int oddp(int num){
    int pro=1;
    while(num){
        int rem=num%10;
        if(rem%2==1){
            pro=pro*rem;
        }
        num/=10;
    }
    return pro;
}
int is_div_5(int num){
    if(num%5==0){
        return 1;
    }
    return 0;
}
int reverse(int num){
    int desi=0;
    while(num){
        int rem=num%10;
        desi=desi*10+rem;
        num /=10;
    }
    return desi;
}
int main(){
    int num;
    int even=1;
    int odd=1;
    int desimal=0;
    printf("Enter the num :\n");
    scanf("%d",&num);//12345
    even=evenp(num);
    odd=oddp(num);
    int res=even+odd;//23
    printf("odd :%d\n",odd);
    printf("even :%d\n",even);
    printf("res :%d\n",res);
    if(is_div_5(res)){
        printf("%d\n",res);
    }else{
        int rev=reverse(res);
        printf("reverse : %d\n",rev);
    }
}