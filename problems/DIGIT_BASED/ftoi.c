#include<stdio.h>
void ftoi(float f,int *n){
    *n = (int)f;
}
int main(){
    float num;
    int n;
    printf("Enter the Float Number :\n");
    scanf("%f",&num);
    printf("Float : %f\n",num);
    ftoi(num,&n);
    printf("Int : %d\n",n);
}