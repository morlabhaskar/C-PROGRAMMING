//Introduction of strchr() Pre-defined Function
//char *strchr(const char *s, char ch);

//The strchr() function returns a pointer to the first occurrence of the character ch in the string str.

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
    if(str[strlen(str)-1] == '\n') str[strlen(str)-1] = '\0';

    ch = getchar();
    ptr = str;
    // ptr = strchr(str,ch);
    ptr = my_strchr(str,ch);
    if(ptr == NULL){
        printf("Character Not Found\n");
    }
    else{
        printf("Character Found at Index : %d",ptr-str);
    }
}