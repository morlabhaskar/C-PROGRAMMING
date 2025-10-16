#include<stdio.h>
void print_binary_using_int(float *num){
    int *ptr=(int*)num; //Treat Float as Int
    for(int bit=31;bit>=0;bit--){
        printf("%d",(*ptr>>bit)&1);
    }
}
int main(){
    // float num=23.4;  //0100000110111011001100110011001
    float num;
    printf("Enter Float Number :\n");
    scanf("%f",&num);
    printf("Binary (int* Method) :\n");
    print_binary_using_int(&num);
    return 0;
}