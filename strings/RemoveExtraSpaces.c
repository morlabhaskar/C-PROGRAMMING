//WAP to Remove First Occurance substring in a given string.
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
    while((*ptr)!='\0'){
        if((*ptr)==' '){
            if((*(ptr+1))==' '){
                memmove(ptr,ptr+1,strlen(ptr+1)+1);
                ptr--;
            }
        }
        ptr++;
    }
    printf("%s\n",str);
}