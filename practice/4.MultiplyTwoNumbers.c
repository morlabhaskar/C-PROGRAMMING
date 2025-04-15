#include <stdio.h>

int main(){
    double first,second,ans;
    printf("Enter a first Number :");
    scanf("%lf",&first);
    printf("Enter a second Number :");
    scanf("%lf",&second);
    ans = first * second;
    printf("The Sum of given numbers is %.2lf",ans);
    return 0;
}

// OP : Enter a first Number : 5.5
// Enter a second Number : 10.2
// The Sum of given numbers is 56.10