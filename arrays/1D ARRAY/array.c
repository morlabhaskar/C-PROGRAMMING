#include <stdio.h>

int main(){
    // int arr[5], i;
    // float sum = 0;
    // printf("Enter 5 integers:\n");
    // for (i = 0; i < 5; i++) {
    //     scanf("%d", &arr[i]);
    // }
    // for (i = 0; i < 5; i++) {
    //     sum = sum + arr[i];
    //     printf("Array element at index %d: %d\n", i, arr[i]);
    // }
    // printf("Sum of the array elements: %f\n", sum);
    // printf("Avg of the array elements: %f\n", sum/5);

    int arr[5];
    printf("%d\n",sizeof(arr));//20
    char arr1[5];
    printf("%d\n",sizeof(arr1));//5
    float arr2[5];
    printf("%d\n",sizeof(arr2));//20
    double arr3[5];
    printf("%d\n",sizeof(arr3));//40
   

}