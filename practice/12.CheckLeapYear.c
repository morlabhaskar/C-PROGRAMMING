#include <stdio.h>

int main(){
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if(year % 400 == 0){
        printf("%d is a leap year.\n", year);
    }
    else if(year % 100 == 0){
        printf("%d is not a leap year.\n", year);
    }
    else if(year % 4 == 0){
        printf("%d is a leap year.\n", year);
    }
    else{
        printf("%d is not a leap year.\n", year);
    }
    return 0;
}

// This program checks if a given year is a leap year or not.
// A year is a leap year if it is divisible by 4, except for end-of-century years.
//Enter a year: 2000
// 2000 is a leap year.
// Enter a year: 1900
// 1900 is not a leap year.