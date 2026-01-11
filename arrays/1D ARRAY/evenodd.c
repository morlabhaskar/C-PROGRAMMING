#include <stdio.h>

void main() {
    int arr[10],i;
    int even_count = 0, odd_count = 0;
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0)
            even_count++;
        else
            odd_count++;
    }
    printf("Even numbers count: %d\n", even_count);
    printf("Odd numbers count: %d\n", odd_count);




}