#include<stdio.h>
int main(){
    int N,S,D,cnt = 0;
    printf("Eneter N for Prime Numbers :");scanf("%d",&N);
    printf("Eneter S for Starting :");scanf("%d",&S);
    printf("Eneter D for Digit Sum :");scanf("%d",&D);
    for(int i=S;;i++){
        int c = 0;
        for(int j=2;j<i;j++){
            if(i%j == 0){
                c++;
            }
        }
        if(c==0){
            int flag = 0;
            for(int temp=i;temp;temp/=10){
                if(temp%10==D){
                    flag = 1;
                }
            }
            if(flag){
                printf("%d,",i);
                cnt++;
            }

        }
        if(cnt == N){
            break;
        }
    }
}