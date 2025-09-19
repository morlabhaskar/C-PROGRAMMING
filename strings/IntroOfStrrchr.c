//Introduction of strchr() Pre-defined Function
//char *strchr(const char *s, int c);

//The strchr() function returns a pointer to the first occurrence of the character ch in the string str.

#include<stdio.h>
#include<string.h>

char* my_strrchr(char *ptr,char ch){
    char *found = NULL;
    while((*ptr) != '\0'){
        if((*ptr)==ch){
            found = ptr;
        }
        ptr++;
    }
    return found;
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
    ptr = str;
    // ptr = strrchr(str,ch);
    ptr = my_strrchr(str,ch);
    if(ptr == NULL){
        printf("Character Not Found\n");
    }
    else{
        printf("Character Found at Index : %d\n",ptr-str);
        memset(ptr,'*',1);
    }
    printf("%s\n",str);
}