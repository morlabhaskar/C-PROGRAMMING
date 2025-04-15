#include <stdio.h>

int main(){
    int a,b,x;
    printf("First :");
    scanf("%d",&a);
    printf("Second :");
    scanf("%d",&b);
    
    printf("Before Swaping a = %d\n",a);
    printf("Before Swaping b = %d\n",b);
    
    x = a;
    a = b;
    b = x;
    
    printf("After Swaping a = %d\n",a);
    printf("After Swaping b = %d\n",b);
    
    
    return 0;
}

// OP : First : 5
// Second : 10
// Before Swaping a = 5
// Before Swaping b = 10

// After Swaping a = 10
// After Swaping b = 5
// Note: The code swaps the values of two integers using a temporary variable.