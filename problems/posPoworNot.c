#include<stdio.h>
int main(){
    int y,flag,res;
    flag = 0;
    printf("Enter Y values :");
    scanf("%d",&y);
    res = 1;
    for(int i=0;i<=y;i++){
        res *= 2;
        if(res == y){
            flag = 1;
            break;
        }
    }
    if(y<0) printf("wrong input");
    else (flag) ? printf("YES") : printf("NO");
}