//Revese bits of a Given Number
#include<stdio.h>
void int_to_binary(int data){
    for(int bit=31;bit>=0;bit--){
        printf("%d ",(data>>bit)&1);
    }
}
int reverse_binary(int num){
    int data = num,left,right;
    for(left=31,right=0;left>right;left--,right++){
        if(((data>>left)&1) != ((data>>right)&1)){
            data ^= (1<<left);
            data ^= (1<<right);
        }
    }
    return data;
}
int main(){
    int num;
    printf("Enter a Number :\n");
    scanf("%d",&num);
    printf("Given Number of Binary is :\n");
    int_to_binary(num);
    int reverse = reverse_binary(num);
    printf("\nReverse Binary of Given Number is :\n");
    int_to_binary(reverse);
}