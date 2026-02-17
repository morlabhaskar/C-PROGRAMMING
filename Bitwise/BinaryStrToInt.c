#include<stdio.h>
#include<string.h>
int main(){
    int num=0,base=1,flag=1;
    char str[100];
    printf("Enter the Binary String\n");
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1]='\0';
    for(int i=strlen(str)-1;i>=0;i--){
        if((str[i]=='0')||(str[i]=='1')){
            num = num + base * (str[i]-'0');
            base *= 2;
        }
        else{
            flag=0;
            printf("Invalid Input\n");
            break;
        }
    }
    if(flag) printf("Number = %d\n",num);
}