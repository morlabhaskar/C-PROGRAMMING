//wap to Hide the first occurance of given charcter in the given string
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
    if(str[strlen(str)-1] == '\n') str[strlen(str)-1] = '\0';
    printf("Enter the Character :\n");
    ch = getchar();
    ptr = my_strchr(str,ch);
    if(ptr == NULL){
        printf("Character Not Found\n");
    }
    else{
        printf("Character Found at Index : %d\n",ptr-str);
        memset(ptr,'*',1);
    }
    printf("%s\n",str);
}