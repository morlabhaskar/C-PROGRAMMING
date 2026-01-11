#include <stdio.h>

int main(){
    int a[5],b[5],c[5],i;
    printf("Enter First Array :");
    for(i=0 ;i<5 ;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter Second Array :");
    for(i=0 ;i<5 ;i++){
        scanf("%d",&b[i]);
    }
    for(i=0 ;i<5 ;i++){
        c[i] = a[i] + b[i];
        printf("Third %d\n",c[i]);
    }
}