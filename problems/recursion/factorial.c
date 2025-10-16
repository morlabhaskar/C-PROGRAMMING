#include<stdio.h>
int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}

int main(){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    printf("Factorial of %d is %d",num,fact(num));
}
//output :

// fact(5)
// → 5 * fact(4)
// → 5 * (4 * fact(3))
// → 5 * (4 * (3 * fact(2)))
// → 5 * (4 * (3 * (2 * fact(1))))
// → 5 * (4 * (3 * (2 * (1 * fact(0)))))
// → 5 * 4 * 3 * 2 * 1 * 1 = 120

