#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    // int num = rand()%(90-65+1)+65;//Uppercase
    int num = rand()%(122-97+1)+97;//Lowercase
    printf("%c",num);
}