//Introduction of menmove() pre-defined Function
#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);

    //For removing '\n' before the '\0' character
    if(str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
    for(int i=0;str[i];i++){
        printf("str[%d]=%c\n",i,str[i]);
    }
    //memmove(1000,1001,9 bytes);
    memmove(str+1,str+2,strlen(str+1)+1);
    printf("After memmove() use:\n");
    for(int i=0;str[i];i++){
        printf("str[%d]=%c\n",i,str[i]);
    }
}