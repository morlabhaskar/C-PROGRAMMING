#include<stdio.h>
int main(){
    int num,bit,cnt=0,res=0,index = 0;
    printf("Enter a Number :");
    scanf("%d",&num);
    for(bit=31;bit>=0;bit--){
        printf("%d",(num>>bit)&1);
        if((num>>bit)&1){
            cnt++;
        }
        else{
            if(res < cnt){
                index = bit+cnt;
                res = cnt;
            }
            cnt = 0;
        }
    }
    if(res<cnt){
        index = bit+cnt;
        res = cnt;
    }
    printf("%d",bit);
    printf("\nLongest Series at %d, Count %d",index,res);
}