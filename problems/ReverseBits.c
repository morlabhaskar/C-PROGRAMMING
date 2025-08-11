#include<stdio.h>
int main(){
    int left,right,data,num;
    scanf("%d",&num);
    data = num;
    for(left=31,right=0;left>right;left--,right++){
        if(((data>>left)&1) != ((data>>right)&1)){
            data ^= (1<<left);
            data ^= (1<<right);
        }
        
    }
    for(int bit=31;bit>=0;bit--){
        printf("%d",(data>>bit)&1);
    }
    printf("%d",data);
}