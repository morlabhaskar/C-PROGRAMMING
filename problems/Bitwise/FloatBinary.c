#include<stdio.h>
void print_binary_using_int(float *num){
    int *ptr=(int*)num; //Treat Float as Int
    for(int i=31;i>=1;i--){
        printf("%d",(*ptr>>i)&1);
    }
    printf("\n");

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