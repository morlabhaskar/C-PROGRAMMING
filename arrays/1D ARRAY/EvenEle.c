#include <stdio.h>

int main() {
    int arr[5],i;
    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Even Elements are :\n");
    for(i=0;i<5;i++){
        if(arr[i] % 2 == 0){
            printf("%d\t",arr[i]);
        }
    }
}