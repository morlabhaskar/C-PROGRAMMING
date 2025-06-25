#include <stdio.h>

void main(){
    int arr[5], i;
    float sum = 0;

    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 5; i++) {
        sum = sum + arr[i];
        printf("Array element at index %d: %d\n", i, arr[i]);
    }

    

    printf("Sum of the array elements: %f\n", sum);
    printf("Avg of the array elements: %f\n", sum/5);
   

}