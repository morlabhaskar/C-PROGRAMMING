#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int num;
    char arr[100];
    printf("Enter the Numer : \n");
    scanf("%d",&num);
    snprintf(arr,sizeof(arr),"%d",num);
    printf("Before Number : %d\n",num);
    for(int i=0;i<strlen(arr);i++){
        if(arr[i]=='0'){
            arr[i]='1';
        }
    }
    num=atoi(arr);
    printf("After Number : %d\n",num);
}
