/*
1234 - ["12","34"]
12345 - ["12","34","5_"]
*/
#include<stdio.h>
#include<string.h>
//123 - 123_
int main(){
    int cnt=0;
    char arr[1][3];////12\0   3_\0
    char str[20];
    printf("Enter the String:\n");
    fgets(str,sizeof(str),stdin);
    if(str[strlen(str)-1]=='\n') str[strlen(str)-1] ='\0';
    int len=strlen(str);//3
    for(int i=0;i<len;i+=2){
        char a[3];//3_\0
        a[0]=str[i];
        if(i+1<len){
            a[1]=str[i+1];
        }else{
            a[1]='_';
        }
        a[2]='\0';
        strcpy(arr[cnt++],a);
    }
    for(int i=0;i<cnt;i++){
        printf("%s ",arr[i]);
    }
}

