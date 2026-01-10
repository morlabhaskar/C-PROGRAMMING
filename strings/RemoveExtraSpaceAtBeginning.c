//WAP to Remove Space at Beginning in a given string.
#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
    char *ptr = NULL;
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);

    if(str[strlen(str)-1] == '\n') str[strlen(str)-1] = '\0';

    ptr=str;
    while((*ptr)==' '){
        memmove(ptr,ptr+1,strlen(ptr+1)+1);
    }
    printf("%s\n",str);
}