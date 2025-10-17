#include<stdio.h>
int main(){
    int num,cnt=0;
    printf("Enter a Number :\n");
    scanf("%d",&num);
    for(int bit=31;bit>=0;bit--){
        printf("%d ",(num>>bit)&1);
        if(((num>>bit)&1 ==1)){
            cnt++;
        }
    }
    printf("\nCount is :%d",cnt);
}