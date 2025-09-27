//WAP to Upper of First and Last Character in a given String.
#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
    char *ptr = NULL;
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);

    //For removing '\n' before the '\0' character
    if(str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
    ptr=str;
    ptr = strtok(ptr," ");
    while(ptr!=NULL){
        ptr = strtok(NULL," ");
    }
    printf("%s\n",str);
}