#include<stdio.h>
#include<unistd.h>

int fib(int);
int main(){
    int nterms;
    printf("Enter Number of Terms :");
    scanf("%d",&nterms);
    for(int i=0;i<nterms;i++){
        printf("%d\t",fib(i));
        fflush(stdout);
        usleep(500000);
    }
    printf("\n");
}
int fib(int n){
    if(n==0 || n==1){
        return(1);
    }
    return(fib(n-1) + fib(n-2));
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