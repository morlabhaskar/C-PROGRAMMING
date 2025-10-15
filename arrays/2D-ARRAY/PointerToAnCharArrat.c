#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void intput_names(char (*names)[20],int stu){
    // int count=0;
    for(int i=0;i<stu;i++){
        gets(names[i]);
    }
}
void print_names(char (*names)[20],int stu){
    for(int i=0;i<stu;i++){
        printf("%s\n",names[i]);
    }
}
int main(){
    // srand(getpid());
    char names[5][20];
    // int row=sizeof(arr)/sizeof(arr[0]),col=sizeof(arr[0])/sizeof(arr[0][0]);
    printf("Enter 5 names :\n");
    intput_names(names,5);
    printf("Names are :\n");
    print_names(names,5);
    
}