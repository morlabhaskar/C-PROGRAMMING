#include<stdio.h>
int main(){
    float var=23.43;
    printf("%d\n", var==23.43);   //float == double    ->  0
    var=23.25;
    printf("%d\n", var==23.25);    //  23.25  == 23.25   ->  1

}


                                                // 1. float var = 23.4;
// 23.4 is a double by default in C.

// var is a float, which has less precision than double.

// So when comparing var == 23.4, you're comparing a float to a double.

// Due to precision loss when converting 23.4 to float, it does not exactly match 23.4 as a double.

// Hence, the comparison fails → false → prints 0.

                                                // 2. var = 23.25;
// In this case, 23.25 can be exactly represented in float.

// So, even after converting to float, the value still matches 23.25 as a double.

// The comparison succeeds → true → prints 1