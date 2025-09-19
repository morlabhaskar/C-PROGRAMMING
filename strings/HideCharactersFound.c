//wap to Hide the All occurance of given character in the given string
#include<stdio.h>
#include<string.h>

char* my_strchr(char *ptr,char ch){
    while((*ptr) != '\0'){
        if((*ptr)==ch){
            return ptr;
        }
        ptr++;
    }
    return NULL;
}

int main(){
    char str[30],ch;
    char *ptr = NULL;
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);

    //For removing '\n' before the '\0' character
    if(str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
    ch = getchar();
    while((ptr=my_strchr(str,ch))!=NULL){
        memset(ptr,'*',1);
        ptr++;
    }
    printf("%s\n",str);
}