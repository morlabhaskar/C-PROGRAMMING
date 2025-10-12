#include<stdio.h>
int main(){
    int num,cnt=0,temp=0;
    printf("Enter a Number :\n");
    scanf("%d",&num);
    for(int bit=31;bit>=0;bit--){
        printf("%d",(num>>bit)&1);
        if((num>>bit)&1){
            temp++;
        }
        else{
            temp=0;
        }
        if(temp==2){
            cnt++;
            temp=0;
        }
    }
    printf("\nCount of SetBit pairs %d of number %d\n",cnt,num);
}