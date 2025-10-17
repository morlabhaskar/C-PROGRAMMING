#include<stdio.h>
int fib(int n){
    if(n==0 || n==1){
        return 1;
    }
    return(fib(n-1) + fib(n-2));
}
int main(){
    int min,max;
    printf("Enter Min Number :\n");
    scanf("%d",&min);
    printf("Enter Max Number :\n");
    scanf("%d",&max);
    for(int i=min;i<=max;i++){
        printf("%d ",fib(i));
    }
}


//output :
// Enter Number of Terms: 5
// ✅ Step 1: fib(0)
// n == 0, return 1.

// ✅ Step 2: fib(1)
// n == 1, return 1.

// ✅ Step 3: fib(2)
// fib(2) = fib(1) + fib(0)

// = 1 + 1 = 2

// ✅ Step 4: fib(3)
// fib(3) = fib(2) + fib(1)

// = 2 + 1 = 3

// ✅ Step 5: fib(4)
// fib(4) = fib(3) + fib(2)

// = 3 + 2 = 5

// ans : 1 1 2 3 5



// fib(4)
// ├── fib(3)
// │   ├── fib(2)
// │   │   ├── fib(1) = 1
// │   │   └── fib(0) = 1
// │   │       → fib(2) = 2
// │   └── fib(1) = 1
// │       → fib(3) = 3
// └── fib(2)
//     ├── fib(1) = 1
//     └── fib(0) = 1
//         → fib(2) = 2

// → fib(4) = 3 + 2 = 5     