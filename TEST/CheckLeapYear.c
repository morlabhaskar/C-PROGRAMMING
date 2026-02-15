//WAP to check leap year or not
#include<stdio.h>
int checkLeapYear(int year){
    if(year%400==0){
        return 1;
    }else if(year%100==0){
        return 0;
    }else if(year%4==0){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int year,status;
    printf("Enter the Year :\n");
    scanf("%d",&year);
    status = checkLeapYear(year);
    if(status==1){
        printf("%d is Leap Year\n",year);
    }else{
        printf("%d is Not Leap Year\n",year);
    }
}