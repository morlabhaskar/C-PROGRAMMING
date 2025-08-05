#include<stdio.h>
int main(){
    int x,y,flag,res;
    flag = 0;
    printf("Enter X and Y values :");
    scanf("%d %d",&x,&y);
    res = 1;
    for(int i=0;i<=y;i++){
        res *= x;
        if(res == y){
            flag = 1;
            break;
        }
    }
    (flag) ? printf("YES") : printf("NO");
}