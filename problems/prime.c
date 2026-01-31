// #include<stdio.h>
// int main(){
//     int min,max,cnt;
//     printf("Enter Min Number :");
//     scanf("%d",&min);
//     printf("Enter Max Number :");
//     scanf("%d",&max);
    
//     for(int i=min;i<=max;i++){
//         cnt = 0;
//         for(int j=2;j<i;j++){
//             if(i % j == 0){
//                 cnt++;
//             }
//         }
//         (cnt == 0) ? printf("%d,",i) : 0;
//     }
// }
#include<stdio.h>
int main(){
    int num,cnt = 0;
    printf("Enter Min Number :");
    scanf("%d",&num);
    for(int i=2;i<num;i++){
        if(num % i == 0){
            cnt++;
        }
    }
    if(cnt==0){
        printf("Prime\n");
    }else{
        printf("Not Prime\n");
    }
}