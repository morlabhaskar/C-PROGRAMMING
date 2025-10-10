#include<stdio.h>
#include<string.h>
int is_num(char ch){
    if(ch=='0' || ch=='1') return 1;
    return 0;
}
int main(){
    char str[100];
    int flag=1,base=1,num=0;
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);
    if(str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
    for(int i=strlen(str)-1;i>=0;i--){
        if(is_num(str[i])){
            num=num+(str[i]-'0')*base;
        }
        else{
            flag=0;
            break;
        }
        base=base*2;
    }
    if(flag) printf("%d",num);
    else printf("invalid input");

}