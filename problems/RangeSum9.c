#include <stdio.h>
int main(){
    int min,max;
    printf("Enter Min :");scanf("%d",&min);
    printf("Enter Max :");scanf("%d",&max);
    for(int i=min;i<=max;i++){
        int cnt = 0,x=0;
        int temp=i;
        while(temp){
            cnt += temp%10;
            temp /= 10;
        }
        if(cnt>=9){
            x = cnt;
            cnt = 0;
            while(x){
                cnt += x%10;
                x /= 10;
            }
        }
        if(min<0 || max<0 || min>max){
            printf("invalid range");
        }
        else if(cnt == 9 || x == 9){
            printf("%d,",i);
        }
    }
}