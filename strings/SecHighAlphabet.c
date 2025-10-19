#include<stdio.h>
#include<string.h>
char second_highest(char *str){
    char high='a',shigh='a';
    for(int i=0;str[i];i++){
        if(str[i]>high){
            shigh=high;
            high=str[i];
        }
        else if(str[i]>shigh && str[i]<high){
            shigh = str[i];
        }
    }
    return shigh;
}
int main(){
    char str[100];
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);
    if(str[strlen(str)-1]=='\n') str[strlen(str)-1]='\0';
    printf("Second Highest Character is : %c\n",second_highest(str));
}