#include<stdio.h>
int main(){
    int num,cnt=0,temp=0;
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
    printf("\n%d",cnt);
}