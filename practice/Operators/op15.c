#include<stdio.h>
int main(){
    printf("%d\n",-1&3456);   // 3456
    printf("%d\n", -1| 456);  // -1
    printf("%d\n", -3| 656);  // -3
    printf("%d\n", -1 ^ 789);   // -790
    printf("%d\n", 0&789);  //0
    printf("%d\n",3&234);  //2

}